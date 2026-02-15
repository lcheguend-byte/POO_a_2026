#include"Persona.cpp"
#include <iostream>


using namespace std;
class Cliente: Persona{
	//atributo
	private: 
	     string nit;
	//Constructores
	public: 
	  Cliente(){
	  } 
	  
	  Cliente (string nom, string ape, string dir, string fn, int tel, string n) : Persona(nom,ape,dir,tel,fn){
	  	nit=n;
	  }
	  //metodo
	  void leer() {
	  	cout <<"nit"<<nit<<endl;
	  	cout<<"Nombre"<<nombre<<endl;
	  	cout<<"Apellidos"<<apellidos<<endl;
	  	cout<<"Direccion"<<direccion<<endl;
	  	cout<<"Telefono"<<telefono<<endl;
	  	cout<<"Fecha Nacimiento"<<fecha_nacimiento<<endl;
	  }
};
