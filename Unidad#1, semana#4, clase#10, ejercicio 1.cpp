// Unidad 1, semana 4, clase 10, ejercicio 1 (Jennifer Melara 2D #13)
#include <iostream>
using namespace std;

int main(){
	double nota1, nota2, nota3, promedio;
	cout << "Ingrese la primer nota: " << endl;
	cin >> nota1;
	cout << "Ingrese la segunda nota: " << endl;
	cin >> nota2;
	cout << "Ingrese la tercer nota: " << endl;
	cin >> nota3;
	promedio = (nota1 + nota2 + nota3)/3;
	if (promedio >= 7 and promedio <= 10){
		cout << "Aprobado";
	} else if (promedio >= 4 && promedio <7){
		cout << "Regular";
	} else if (promedio > 0 && promedio <4){
		cout << "Reprobado";
	} else {
		cout << "Nota no valida";
	}
}

