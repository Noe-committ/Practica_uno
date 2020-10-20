#include <iostream>
using namespace std; 

class vehiculo_rodante{
	int ruedas;
	int pasajeros;
	public: 
		void set_ruedas(int r){
			ruedas=r;
		}
		void set_pasajeros(int p){
			pasajeros=p;
		}
	/*	void set_Atributos(int r, int p){
			ruedas=r;
			pasajeros=p;      //ahorrar codigo
		}
	*/
	
	int get_ruedas(){
		return ruedas;
	}
	int get_pasajeros(){
		return pasajeros;
	}
};

//clase hija

class camion : public vehiculo_rodante{
	float carga;
	public:
		void set_carga(float t){
			carga=t;
		}
		float get_carga(){
			return carga;
		}
		void mostrar(){
			cout<<"Numero de pasaeros: "<<get_pasajeros()<<endl;
			cout<<"Numero de ruedas: "<<get_ruedas()<<endl;
			cout<<"Carga en pies cubicos: "<<carga<<endl;
		}
};

enum tipo{van,carro,camioneta}; //para ahorrar codigo coomo si fuera un arreglo
class automovil : public vehiculo_rodante{
	enum tipo tipoAuto;
	public:
		void set_tipoA(enum tipo t){
			tipoAuto=t;
		}
		enum tipo get_tipoA(){
			return tipoAuto;
		}
		void mostrarAutomovil();
};

void automovil::mostrarAutomovil(){
	cout<<"Numero de ruedas:  "<<get_ruedas()<<endl;
	cout<<"Numero de pasaeros:  "<<get_pasajeros()<<endl;
	switch(tipoAuto){
		case van:
			cout<<"Tipo automovil: van"<<endl;
			break;
		case carro:
		cout<<"Tipo automovil: carro"<<endl;
			break;
		case camioneta:
		cout<<"Tipo de automovil: camioneta"<<endl;
				
	}
}

int main(){
	camion  c;
	automovil a;
	c.set_ruedas(18);
	c.set_pasajeros(2);
	c.set_carga(300.5);
	
	a.set_ruedas(4);
	a.set_pasajeros(4);
	a.set_ruedas(4);
	a.set_tipoA(van);
	
	c.mostrar();
	cout<<"\n"<<endl;
	a.mostrarAutomovil();
	return 0;
}
