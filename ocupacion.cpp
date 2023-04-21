//
// Created by H. Alfredo on 4/20/23.
//
#include <iostream>
#include "Icosphere.h"
#include "ocupacion.h"
#include <random>

using std::random_device;
using std::mt19937;
using std::uniform_real_distribution;

int TriangleCount;  //Numero de triangulos
int *triangulos;   //arreglo de punteros


/*void triangulo(int TriangleCount)
{
    nt = TriangleCount;
    triangulos = &nt;
}
*/
void permutation()
{
    int i, j;
    int nt; //sitios ocupados o no ocupados.
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(0,1);
    for(i=0; i<TriangleCount; i++) triangulos[i] = i;
    for(i=0; i<TriangleCount; i++) {
        j = i + (TriangleCount-i)*dis(gen);
        nt = triangulos[i];
        triangulos[i] = triangulos[j];
        triangulos[j] = nt;
    }
}



void main_ocupacion()
{
    //main_ocupacion();
    std::cout << "numero " <<std::endl;


}
