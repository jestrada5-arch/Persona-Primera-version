#include <iostream>
using namespace std;

class Persona{
	//atributo
protected :	
	string nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	  
	//constructores
	Persona(){
	}	
	Persona(string nom,string ape,string dir,int tel, string fn){
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel; 
			fecha_nacimiento = fn;
	}
	
		void crear();
		void leer();
		void actualizar();
		void borrar();
};
