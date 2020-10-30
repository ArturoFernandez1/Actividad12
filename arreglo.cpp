#include "arreglo.h"

using namespace std;

Arreglo::Arreglo()
{
    this->arreglo = new string[MAX];
    this->cont = 0;
    this->tam = MAX;
}
Arreglo::~Arreglo()
{
    delete[] arreglo;
}
void Arreglo::insertarFinal(const string &s)
{
    if (this->cont == this->tam)
    {
        expandir();
    }

    this->arreglo[this->cont] = s;
    this->cont++;
}
void Arreglo::insertarInicio(const string &s)
{
    if (this->cont == this->tam)
    {
        expandir();
    }

    for (size_t i = this->cont; i > 0; i--)
    {
        this->arreglo[i] = this->arreglo[i - 1];
    }
    
    this->arreglo[0] = s;
    this->cont++;
}

void Arreglo::expandir(){
    string* temp = new string[tam + MAX];

    for (size_t i = 0; i < this->cont; i++)
    {
        temp[i] = this->arreglo[i];
    }

    delete[] this->arreglo;
    this->arreglo = temp;
    this->tam+=this->MAX;
}

size_t Arreglo::size(){
    return this->cont;
}

string Arreglo::operator[](size_t p){
    return this->arreglo[p];
}
