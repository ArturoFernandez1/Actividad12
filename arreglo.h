#ifndef ARREGLO_H
#define ARREGLO_H

#include<iostream>
#include<string>

class Arreglo
{
private:
    std::string *arreglo;
    size_t tam;
    size_t cont;
    const static size_t MAX = 5;
    void expandir();

public:
    Arreglo();
    ~Arreglo();
    void insertarFinal(const std::string &s);
    void insertarInicio(const std::string &s);
    std::string operator[](size_t p);
    size_t size();
};

#endif