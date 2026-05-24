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

int main(int argc, char** argv) {
	fstream we1("C:/cpp/liczby.txt");
	fstream we2("C:/cpp/pierwsze.txt");
	int i=0, j=0;
	int liczby[l], pierwsze[p];
	
	for(i=0; i<l; i++){
		we1>>liczby[i];
	}
	
	for(i=0; i<p; i++){
		we2>>pierwsze[i];
	}
	
	for(i=0; i<l; i++){
		if(liczby[i]>=100 && liczby[i]<=5000){	
			if(czy_p(liczby[i]))
				cout<<liczby[i]<<endl;	
		}
	}
	
	return 0;
}
