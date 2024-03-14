#include "Persona.cpp"
#include <iostream>
using namespace std;
class Empleado : Persona{
	
	private : string codigo_empleado;
    private : string puesto;	
    
    private :
	Empleado(){
		
		}
	Empleado(string nom, string ape, string dir, int tel) : Persona(nom,ape,dir,tel){
	 
	}	

	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setTelefono(int tel){telefono = tel;}


	 string getNombres(){return nombres;}
	 string getApellidos(){return apellidos;}
	 string getDireccion(){return direccion;}
	 int getTelefono(){return telefono;}
	void mostrar(){
		cout<<"      "<<endl;
		cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
    }
};
};
