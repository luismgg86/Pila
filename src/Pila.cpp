#include "Pila.h"

using namespace std;

Pila::Pila(){
	this->Tope=NULL;
}

Pila::Pila(int dato){
	Nodo *aux=new Nodo(dato);
	this->Tope=aux;
}

void Pila::Push(int dato){
	Nodo *aux=new Nodo(dato,this->Tope);
	this->Tope=aux;
}

int Pila::Pop(){

	if(IsVacia()){
		cout<<"La pila esta vacia"<<endl;
	}
	else{
		int x=this->Tope->dato;
		this->Tope=this->Tope->sig;
		return x;
	}
}

bool Pila::IsVacia(){
	if(this->Tope==NULL){
		return true;
	}
	else{
		return false;
	}
}

Nodo* Pila::Buscar(int ref){
	Nodo *aux = this->Tope;

	if (IsVacia())
	{
		cout<<"La lista esta vacía."<<endl;
		return NULL;
	}

	while(aux->dato != ref){
		if(aux->sig == NULL){
			cout<<"La referencia no esta en la lista."<<endl;
			return NULL;
		}
		aux=aux->sig;
	}

	return aux;
}





