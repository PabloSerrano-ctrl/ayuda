#include "Gestor.hpp"
#include "Proceso.hpp"
#include "Pila.hpp"
#include <stack>
#include <cstdlib>
#include <string>

using namespace std;

Proceso proceso;
Pila pila;
Gestor::Gestor()
{
}
void Gestor::genera12Procesos(){
	return proceso.generarProceso();
}

int Gestor::ProcesosEnPila(){
	return pila.getLongitud();
}

void Gestor::muestraProcesos(){
	return pila.mostrar();
}





Gestor::~Gestor() {}