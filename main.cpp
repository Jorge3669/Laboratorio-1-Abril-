#include <iostream>
#include "biblioteca.hpp"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1, n2, result;
	char Opcion;
	
	
Opcion='x';
	while(Opcion!='0'){
		cout<<""<<endl;
		printf("CALCULADORA \n");
		printf("1) Suma\n");
		printf("2) Resta\n");
		printf("3) Multiplicacion\n");
		printf("4) Division\n");
		printf("0: Exit\n");
		printf("Elija el numero de la operacion que desea realizar "); 
		cin>>Opcion;
		
		if (Opcion!='0'){
	printf("INGRESE SU PRIMER NUMERO: "); scanf("%d", &n1);
			printf("INGRESE SU SEGUNDO NUMERO: "); scanf("%d", &n2); printf("\n");
	
	switch(Opcion){
		case '1': 
			cout<<"Suma:\n";
			result = sum(n1, n2);
			cout<<"El resultado de la suma es: "<<result; 
		break;
		
		case '2': 
			cout<<"Resta:\n";
			result = res(n1, n2);
		    cout<<"El resultado sera siempre un numero positivo";
		    cout<<""<<endl;
			cout<<"El resultado de la resta es: "<<result<<"\n"; 
		break;
		
		case '3': 
			cout<<"Multiplicacion:\n";
			result = mult(n1, n2);
			cout<<"El resultado de la multiplicacion es: "<<result; 
		break;
		
		case '4': 
			cout<<"Division:\n";
			result = divis(n1, n2);
			cout<<"El resultado de la division es: "<<result; 
		break;
		
		default: 
		cout<<"El numero no coincide con ninguna de las opciones (1, 2, 3, 4) Vuleva a intentarlo";
	}

}

}
system("pause");}

