#include "Persona.cpp"
#include <iostream>
using namespace std;
class Empleado : Persona{
	
	private : string codigo_empleado;
    private : string puesto;	
    
    public :
	Empleado(){
		
		}
	Empleado(string nom, string ape, string dir, string fechaN, int tel) : Persona(nom,ape,dir,fechaN,tel){
	    codigo_empleado = n;
	    puesto = n;
	
	}	
};
