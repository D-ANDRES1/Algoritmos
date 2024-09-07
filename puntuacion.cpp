#include <iostream>

using namespace std;

int main (){
	int n;
	int puntos = 0;
	int numero[100];
	
	cout<<"ingrese la cantidad de datos"<<endl;
	cin>>n;
	cout<<"ingrese los numeros"<<endl;
	
	for (int i = 0 ; i < n; i++){
	cin>>numero[i];

	if (numero[i] == 5){
		puntos = puntos + 5;
	} else if (numero[i] % 2 == 0){
		puntos = puntos + 1;
	} else {
		puntos = puntos + 3;
	}
}
	cout<<"la puntacion final es:"<<puntos;
	
		
		
	return 0;
}
