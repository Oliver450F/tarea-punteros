#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
struct Estudiante{
	int *codigo;
	string *nombre;
	int **pm_notas;
};



int main(){
int fila_estudiante =0,columna_notas=0;
Estudiante estudiante;
cout<<"Cuantos Estudiantes Desea Ingresar: ";
cin>>fila_estudiante;	
cout<<"Cuantas Notas Desea Ingresar: ";
cin>>columna_notas;	
estudiante.pm_notas= new int *[fila_estudiante];
estudiante.codigo= new int [fila_estudiante];
estudiante.nombre = new string [fila_estudiante];
for (int i=0; i<fila_estudiante;i++){
	estudiante.pm_notas[i]= new int [columna_notas];
}
cout<<"--------------Ingrese Notas--------------"<<endl;
string nombre;
for (int i=0;i<fila_estudiante;i++){
	cout<<"codigo :";
	cin>>estudiante.codigo[i];
	cin.ignore();
	cout<<" nombre : ";
getline(cin,estudiante.nombre[i]);


for (int ii=0;ii<columna_notas;ii++){
	cout<<" ingrese nota "<<ii +1 <<" : ";
	cin>>*(*(estudiante.pm_notas +i)+ii);
}
	cout<<"------------------------------------"<<endl;
}
cout<<" ------------- mostrar nota-----------"<<endl;
for (int i=0;i<fila_estudiante;i++){
	cout<<" codigo : "<<estudiante.codigo[i]<<" estudiante : "<<estudiante.nombre[i]<<" . "<<endl;
	for ( int ii=0;ii<columna_notas;ii++){
		cout<<" nota ["<<i + 1 <<"] "
		<<*(*(estudiante.pm_notas +i)+ii);
		cout<<endl;
	}
}
for (int i=0;i<fila_estudiante;i++){
	delete [] estudiante.pm_notas[i];
}
delete [] estudiante.pm_notas;
delete [] estudiante.codigo;
delete [] estudiante.nombre;

system(" pause ");
return 0;










}






