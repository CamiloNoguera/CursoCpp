#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int numero;
	
	do{
		cout<<"Digite un numero entre 1-10: "; cin>>numero;
	}while((numero < 1) || (numero > 10));
	
	for(int i=1; i<=10; i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	
	getch();
	return 0;
}
