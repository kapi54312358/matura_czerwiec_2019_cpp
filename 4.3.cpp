#include <iostream>
#include <fstream>

using namespace std;

int const p=200;

int waga (int a){
	int i=0, w=0, pom=0, suma1=a, suma2=0;
	while(suma1>9){
		while(suma1>0){
			pom=suma1%10;
			suma2+=pom;
			suma1/=10;
		}
		suma1=suma2;
		suma2=0;
	}
	return suma1;
}

int main(int argc, char** argv) {
	fstream we2("C:/cpp/pierwsze.txt");
	int i=0, licznik=0;
	int pierwsze[p];
	
	for(i=0; i<p; i++){
		we2>>pierwsze[i];
	}
	
	for(i=0; i<p; i++){
		if(waga(pierwsze[i])==1){
			licznik++;
		}
	}
	
	cout<<licznik;
	
	return 0;
}
