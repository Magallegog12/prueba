//este es un ejemplo de comentario
/*
este es otro ejemplo de comentario
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
 int a, b;
 cout << "Ingresa el primer numero"<<endl;
 cin >> a;
 cout << "Ingresa el segundo numero"<<endl;
 cin >> b;
 cout <<"La suma de los numeros es: "<< a+b <<endl;
 cout <<"La resta de los numeros es: "<< a-b <<endl;
 cout <<"La multiplicacion de los numeros es: "<< a*b <<endl;
 cout <<"La division de los numeros es: "<< a/b <<endl;
 cout <<"El residuo es: "<< a%b <<endl;
 system("pause");
 return EXIT_SUCCESS;
}
