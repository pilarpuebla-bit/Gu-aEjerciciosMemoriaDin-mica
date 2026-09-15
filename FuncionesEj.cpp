#include <iostream>
#include "FuncionesEj.h"
#include <string>
#include <limits>

using namespace std;


/* EJERCICIO 1
void cargarVector (int *puntero, int tamanio){
int num;
for (int i = 0; i < tamanio; i++){
    cout << "ingrese el valor a cargar en el array en la posicion: " << i+1 << endl;
    cin >> num;
   puntero[i]= num;
}
}

void mostrarVector (int *puntero, int tamanio){

for (int i =0; i<tamanio;i ++){
    cout << puntero[i] <<"\t" ;
}
}

*/

/* EJERCICIO 2

void mostrarMenu (){

    system ("cls");

    cout << "===================" << endl;
    cout << "        MENU       " << endl;
    cout << "1. Cargar Vector." << endl;
    cout << "2. Mostrar Vector. " << endl;
    cout << "3. Salir. " << endl;
    cout << "===================" << endl;
    cout << "Ingrese su opción elegida: " << endl;
}

void cargarVector (int *pDinamico, int tam){

 int num;
for (int i =0; i< tam; i++){
    cout << "Ingrese el valor que quiere asignarle al vector en la posicion " << i+1 << endl;
    cin >> num;
    pDinamico[i]=num;
}
system ("pause");
}

void mostrarVector(int *pDinamico, int tam){

system ("cls");
for (int i =0; i <tam; i++){
    cout << pDinamico[i]<< "\t" << endl;
}
system ("pause");
}


*/

/* EJERCICIO 3
void CargarVec(int vec[] ,int tam){
    int num;
    for (int i =0; i<tam; i++){
cout << "Ingrese el numero de la posicion "<< i+1 << endl;
cin >> num;
vec[i]=num;

    }
}

void mostrarVec (int *pPositivo, int *pNegativo, int contPos, int contNeg){

for (int i =0; i<contPos; i++){
    cout << pPositivo[i] << "\t";
}

for (int i=0; i<contNeg; i++){
    cout << pNegativo[i] << "\t";
}
}
*/

/* EJERCICIO 4

void cargarVector(int *pDinamico, int tam){

int num;
for (int i=0; i<tam; i++){
    cout << "Ingrese el numero de la posicion: " << i+1<< endl;
    cin >> num;
    pDinamico[i]=num;
}
}

int ContarRepetidos (int *pDinamico, int tam){
    int Contador=0;
    for (int i =0; i<tam;i++){

    bool yaAparece = false;

    for (int k =0; k<i;k++){
            if (pDinamico[i]==pDinamico[k]){
                yaAparece = true;
                break;
            }
    }
    if (!yaAparece){
    for (int j =i+1; j<tam; j++){
    if (pDinamico[i]==pDinamico[j]){
        Contador++;
        break;
    }
    }
    }
    }

    return Contador;
}
*/

/* EJERCICIO 5
void cargarVector(int *pDinamico, int tam){
int num;

for (int i =0;i<tam;i++){
cout << "Ingrese el valor en la posicion " << i+1 << endl;
cin >>num;
pDinamico[i]=num;

}
}

void ordenarmostrarVector (int *pDinamico, int tam){
int Aux;

int *punteroOrd =nullptr;
punteroOrd=new int [tam];
if (punteroOrd==nullptr){
    cout << "ERROR EN ASGINACION DE MEMORIA DINAMICA" << endl;
    return;
}

for (int i =0;i<tam;i++){
    punteroOrd[i]=pDinamico[i];
}

for (int i =0; i<tam;i++){
    for (int j=0;j<tam-1;j++){
        if (punteroOrd[j]>punteroOrd[j+1]){
            Aux=punteroOrd[j+1];
            punteroOrd[j+1]=punteroOrd[j];
            punteroOrd[j]=Aux;
        }
    }
}

for (int i =0;i<tam;i++){
    cout << punteroOrd[i] << "\t";
}


delete [] punteroOrd;
punteroOrd=nullptr;
}
*/

// EJERCICIO 6

void cargarVector (int *v, int tam){
for (int i=0; i<tam;i++){
        cin >> v[i];
}
}

int *copiarSoloPares (int *v, int tam){
int *vNuevo;
int cantPares=contarPares(v,tam);
if (cantPares==0){
    return nullptr;
}
vNuevo=new int [cantPares];
if (vNuevo==nullptr)return nullptr;
copiarParesEnVector(v, tam, vNuevo);
return vNuevo;
}

void mostrarVector (int *v, int tam){
for (int i=0; i<tam;i++){
        cout << v[i] << endl;
}
}

int contarPares(int *v,int tam){
int cantPares=0;
for (int i=0; i<tam;i++){
        if (v[i]%2==0){
            cantPares++;}
        }
return cantPares;
}


void copiarParesEnVector(int *vOrigen, int tam, int *vDestino){

int i, j=0;
for (i=0; i<tam;i++){

    if (vOrigen[i]%2==0){
        /// aca habria que poner algo para
        /// evitar que se repitan los pares
        vDestino[j]=vOrigen[i];
        j++;
    }
}
}


/* EJERCICIO 7

void cargarLibros (string *v, int tam){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i =0; i<tam;i++){
cout << "Ingrese el nombre del libro numero " << i+1 << endl;

getline(cin,v[i]);
    }
}

void mostrarMenu(){

system ("cls");
cout << "==================" << endl;
cout << "1. Listado." << endl;
cout << "2. Tiempo de lectura. " << endl;
cout << "3. Ranking. " << endl;
cout << "4. Salir. "<< endl;
cout << "==================" << endl;
cout << "Ingrese la opcion elegida. "<< endl;

}

void mostrarListado (string *pLibro, int tam){


    cout << "El listado de libros ingresados es el siguiente: "<< endl;

for (int i =0;i<tam;i++){
    cout << pLibro[i] << endl;
}
    system ("pause");
}

void cargarTiempo (string *pLibro, float *pTiempo, int tam){
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

bool Coincide=false;
string Libro="";
float Minutos;
cout << "Ingrese el nombre del libro: " << endl;
getline(cin, Libro);
for (int i =0;i<tam;i++){
if (Libro==pLibro[i]){
    cout << "Ingrese la cantidad de minutos que le llevo su lectura: " << endl;
    cin >> Minutos;
    pTiempo[i]=Minutos;
    Coincide=true;
}

}
if (Coincide==false){
    cout << "No existe el libro."<< endl;
}
    system ("pause");
}

void mostrarRanking (string *pLibro, float *pTiempo, int tam){

float *pTiempoOrdenado = nullptr;
string *pLibroOrdenado = nullptr;
float Aux;
string Aux2="";

pLibroOrdenado=new string [tam];
pTiempoOrdenado=new float [tam];

if (pTiempoOrdenado==nullptr||pLibroOrdenado==nullptr){
        cout << "ERROR EN ASIGNACION DE MEMORIA" << endl;
        return;
    }

for (int i =0; i<tam;i++){
    pLibroOrdenado[i]= pLibro[i];
}
for (int i=0;i<tam;i++){
    pTiempoOrdenado[i]=pTiempo[i];
}

for (int i =0; i<tam;i++){
    for (int j=0;j<tam-1;j++){
        if (pTiempoOrdenado[j]<pTiempoOrdenado[j+1]){
            Aux=pTiempoOrdenado[j+1];
            pTiempoOrdenado[j+1]=pTiempoOrdenado[j];
            pTiempoOrdenado[j]=Aux;
            Aux2=pLibroOrdenado[j+1];
            pLibroOrdenado[j+1]=pLibroOrdenado[j];
            pLibroOrdenado[j]=Aux2;
        }
    }
}

cout << "===============" << endl;
cout << "----RANKING----" << endl;
for (int i=0;i<tam;i++){
    cout << pLibroOrdenado[i] << endl;
}
    system ("pause");
}
*/





