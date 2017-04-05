#include "Nodo.h"

class Pila{
public:
	//atributo del nodo tope de la pila
	Nodo *Tope;
//constructores
	Pila();
	Pila(int dato);
	//metodos
	int Pop();
	void Push(int dato);
	bool IsVacia();
	Nodo* Buscar(int ref);
};