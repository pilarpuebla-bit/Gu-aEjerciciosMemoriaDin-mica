#ifndef FUNCIONESEJ_H_INCLUDED
#define FUNCIONESEJ_H_INCLUDED
#include <string>

using namespace std;

/* EJERCICIO 1

void cargarVector (int *puntero, int tamanio);
void mostrarVector (int *puntero, int tamanio);
*/

/* EJERCICIO 2

void mostrarMenu ();

void cargarVector (int *pDinamico, int tam);

void mostrarVector(int *pDinamico, int tam);
*/

/* EJERCICIO 3
void CargarVec(int vec[] ,int tam);

void mostrarVec (int *pPositivo, int *pNegativo, int contPos, int contNeg);
*/

/* EJERCICIO 4
void cargarVector(int *pDinamico, int tam);

int ContarRepetidos (int *pDinamico, int tam);
*/

/* EJERCICIO 5
void cargarVector(int *pDinamico, int tam);

void ordenarmostrarVector (int *pDinamico, int tam);
*/

// EJERCICIO 6

void cargarVector (int *v, int tam);

int *copiarSoloPares (int *v, int tam);

void mostrarVector (int *v, int tam);

int contarPares(int *v,int tam);

void copiarParesEnVector(int *vOrigen, int tam, int *vDestino);


// EJERCICIO 7

void cargarLibros (string *v, int tam);

void mostrarMenu();

void mostrarListado (string *pLibro, int tam);

void cargarTiempo (string *pLibro, float *pTiempo, int tam);

void mostrarRanking (string *pLibro, float *pTiempo, int tam);





#endif // FUNCIONESEJ_H_INCLUDED
