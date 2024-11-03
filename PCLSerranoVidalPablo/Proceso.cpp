#include "Proceso.hpp"
#include "Pila.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;


Pila pila;

Proceso::Proceso(int pid, std::string user, bool real)
{
this->PID = pid;
this->usuario = user;
this->tiempoReal = real;
this->estado = false;
this->prioridad = real ? rand() % 100 : 120 + (rand() % 39 - 19);
}

void Proceso::generarProceso(){
	for (int i = 0; i < 12; ++i) {
            int pid = 300 + rand() % 700;
            string usuario = "Usuario" + to_string(rand() % 100);
            bool tiempoReal = rand() % 2;
            Proceso* proceso = new Proceso(pid, usuario, tiempoReal);
            pila.insertar(proceso);
	}
}



void Proceso::mostrar()
{
cout << "PID: " << this->PID << ", Usuario: " << this->usuario
        << ", Estado: " << (estado ? "Ejecuci�n" : "Parado")
        << ", Prioridad: " << prioridad
        << ", Tipo: " << (tiempoReal ? "Tiempo Real" : "Normal") << endl;
}



