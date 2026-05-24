#include <iostream>
#include <fstream>

using namespace std;

int const l=300, p=200;

bool czy_p(long long a){
	if(a<=1) return false;
	long long i=2;
	for(i=2; i*i<=a; i++){
		if(a%i==0) return false;
	}
	return true;
}

int odwrot(int a){
	int i=0, cyfra=0, kopia_a=a;
	long long pot=1, w=0;
	
	while(a>=10){
		a/=10;
		pot*=10;
	}
	a=kopia_a;
	while(a>0){
		cyfra=a%10;
		a/=10;
		w+=cyfra*pot;
		pot/=10;
	}
	return w;
}

int main(int argc, char** argv) {
	fstream we2("C:/cpp/pierwsze.txt");
	int i=0, j=0, k=0;
	long long pierwsze[p];
	
	for(i=0; i<p; i++){
		we2>>pierwsze[i];
	}
	
	for(i=0; i<p; i++){
		j=0;
		while(j<p){
			if(czy_p(odwrot(pierwsze[i]))){
				cout<<pierwsze[i]<<endl;
				break;
			}		
			j++;
		}
	}
	
	return 0;
}
