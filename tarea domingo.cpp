#include<iostream>

using namespace std;
char nombre[50];
int codigo[10];
int funcion_mostrar();
int funcionnotas();
int main(){
	int fila_estudiante=0,columna_notas=0;
	int valor1;
	cout<<"Cuantos Estudiantes Desea Ingresar: ";
	cin>>fila_estudiante;	
	cout<<"Cuantas Notas Desea Ingresar: ";
	cin>>columna_notas;
int funcion_notas();{
	cout<<"--------------Ingrese Notas--------------"<<endl;
	for (int i=0;i<fila_estudiante;i++){
		cout<<"Codigo: ";
		cin >> codigo[i];
		cout<<"Nombre: ";
		cin >> nombre[i];
		for (int ii=0;ii<columna_notas;ii++){
			int notas[10];
		cout<<"Ingrese Nota "<<ii + 1<<": ";
		cin >>notas[ii];
		cout<<""<<endl;
		}
		
		}
int funcion_mostrar();
{
	cout<<"----------------Mostrar Datos-------------"<<endl;
	for(int i=0; i<fila_estudiante;i++){
		cout<<"Codigo: ";
		cout<< codigo[i];
		cout<<""<<endl;
		cout<<"Nombre: ";
		cout<< nombre[i];
		cout<<""<<endl;
		for (int ii=0;ii<columna_notas;ii++){
			int notas[10];
		cout<<"Ingrese Nota "<<ii + 1<<": ";
		cout <<notas[ii]<<endl;;
		cout<<" -------------------------"<<endl;
}	
}
}
}
}



