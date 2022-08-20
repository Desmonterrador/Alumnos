#include <iostream>
using namespace std;
int main(int argv, char** argc){
	int n1, n2, n3;
	char continuar;
	continuar='s';
	while (continuar=='s'){
		cout<<"Escriba la calificacion del primer parcial \n";
		cin>>n1;
		cout<<"Escribs la calificacion del segundo parcial \n";
		cin>>n2;
		n3=n1+n2;
		n3=n3/2;
		if (n3<=6){
			cout<<"El alumno saco: "<<n3<<"\n";
			cout<<"El alumno esta reprobado \n";
		}
		else
		{
			cout<<"EL alumno saco: "<<n3<<"\n";
			cout<<"El alumno esta aprobado \n";	
		}
		cout<<"¿Desea realizar otro calculo? s=Si n=No \n";
		cin>>continuar;
	}
}
