/* Hipotenusa */

#include<iostream>
#include<cmath> //Con cmath se activa la libreria de matematicas.

using namespace std;

int main(){
	float a,b,hipo,a2,b2,hipo2;
	
	cout<<"Digite el valor del cateto a: "; cin>>a;
	cout<<"Digite el valor del cateto b: "; cin>>b;
	
	a2=a*a;
	b2=b*b;
	
	hipo2=a2+b2;
	hipo=sqrt(hipo2); //Con sqrt(x) se saca la raiz cuadrada de un valor.
	
	cout<<"La hipotenusa del triangulo es: "<<hipo<<endl;
	
	
	
	return 0;
}
