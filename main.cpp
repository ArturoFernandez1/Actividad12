#include <iostream>
#include "arreglo.h"

using namespace std;

int main(){

    Arreglo myArray;

    myArray.insertarFinal("Einstein");
    myArray.insertarFinal("Tesla");
    myArray.insertarFinal("Feynman");
    myArray.insertarFinal("Newton");
    myArray.insertarFinal("Bohr");
    myArray.insertarFinal("Galilei");
    myArray.insertarFinal("Shell");
    myArray.insertarFinal("Babbage");
    
    for (size_t i = 0; i < myArray.size(); i++)
    {
        cout << myArray[i] << endl;
    }

    myArray.insertarInicio("Turing");
    myArray.insertarInicio("Ada");

    cout << endl << endl;

    for (size_t i = 0; i < myArray.size(); i++)
    {
        cout << myArray[i] << endl;
    }

    return 0;
}