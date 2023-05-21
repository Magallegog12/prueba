//este es un ejemplo de comentario
/*
este es otro ejemplo de comentario
*/
#include <iostream>
using namespace std;
int main()
{
 int numero,a=1,multiplicacion;
 cout<<"Ingresa el numero de la tabla:";
 cin>>numero;
 cout<<"La tabla del "<<numero<<" es:"<<endl;
 do{
    multiplicacion= numero * a;

    cout<<numero<<" x "<< a <<" = "<< multiplicacion <<endl;
    a++;
 }
 while (a<=10);
}

