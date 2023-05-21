#include <iostream>
using namespace std;
int main()
{
 double vi,vf,t,a;
 cout<<"Ingresa la velocidad inicial del vehiculo:"<<endl;
 cin>>vi;
 cout<<"Ingresa la velocidad final del vehiculo:"<<endl;
 cin>>vf;
 cout<<"Ingresa el tiempo que recorrio el vehiculo:"<<endl;
 cin>>t;
 a = (vf-vi)/t;
 cout<<"La aceleracion del vehiculo es:"<< a <<endl;
 
}