#include <iostream>
#include "FuncionesEj.h"
#include <string>

using namespace std;

/// GUÍA DE EJERCICIOS DE MEMORIA DINÁMICA

/* EJERCICIO 1
// Escribir un programa que solicite al usuario el tamaño de un array de enteros,
// lo cree dinámicamente utilizando new.
// El usuario debe poder cargar el array y mostrarlo, y luego liberar la memoria con delete


int main()
{
    int tamanio, *puntero;
    cout << "Ingrese el tamanio del array de enteros: " << endl;
    cin >> tamanio;
    puntero=new int [tamanio];
    if (puntero==nullptr){
        cout << "ERROR" << endl;
        return -1;
    }
    cargarVector (puntero, tamanio);
    mostrarVector (puntero, tamanio);

    delete []puntero;
    return 0;
}
*/

/* EJERCICIO 2
// Crear un programa que contenga un menú con las siguientes opciones:
// 1- Cargar Vector: El programa debe solicitar al usuario la cantidad de elementos que va a cargar,
//    posteriormente se solicitara cuales son dichos números para almacenarlos en un vector utilizando
//    asignación dinámica de memoria.
// 2- Mostrar Vector: En caso de tener cargado el vector, debe mostrarlo por pantalla.
// 3- Salir: Sale del programa (no olvidar liberar la memoria)
// Pista: Recordar que se puede inicializar un puntero con el valor nullptr

int main (){

int Opcion = 0;
int tam, *pDinamico=nullptr;


while (Opcion != 3){

    mostrarMenu ();

    cin >> Opcion;

    switch (Opcion){

    case 1: // Cargar vector
        {
    system ("cls");
    cout << "Ingrese cantidad de elementos a cargar: "<< endl;
    cin >> tam;
    delete[] pDinamico;
    pDinamico = new int [tam];
    if (pDinamico == nullptr){
        cout << "ERROR EN ASIGNACION DE MEMORIA DINAMICA" << endl;
        return -1;
    }

    cargarVector (pDinamico, tam);
    }
    break;
    case 2: // Mostrar vector
        {
    if (pDinamico!=nullptr){
    mostrarVector(pDinamico, tam);
    }else {
    cout << "No se ha cargado el vector aun. " << endl;
    system ("pause");
    }
    }
    break;
    case 3: // Salir
        {
            cout << "Usted esta saliendo del programa..." << endl;
            delete []pDinamico;
    }
    break;
    default: {
     cout << "No ingreso una opcion valida." << endl;
     system ("pause");
    }
    break;

    } // Fin switch

} // Fin while

return 0;
}
*/

/* EJERCICIO 3
// Hacer un programa que solicite al usuario 10 números y luego muestre
// primero los números positivos y luego los negativos.
// El programa debe crear dos arrays dinámicos con la cantidad exacta en cada caso:
// uno para almacenar los números positivos y otro para los números negativos.

int main (){

int *pPositivo = nullptr;
int *pNegativo = nullptr;
int contPos =0;
int contNeg =0;
const int tam = 10;
int vec[tam]={};

CargarVec(vec,tam);

for (int i=0; i<tam; i++){
if (vec[i]>=0){
    contPos++;
} else {contNeg++;}
}

if (contPos!=0){
pPositivo=new int [contPos];
if (pPositivo==nullptr){
    cout << "ERROR EN ASIGNACION DE MEMORIA DINAMICA" << endl;
return -1;
}
}

if (contNeg!=0){
pNegativo=new int [contNeg];
if (pNegativo==nullptr){
    cout << "ERROR EN ASIGNACION DE MEMORIA DINAMICA" << endl;
return -1;
}
}
int idxPos=0;
int idxNeg=0;

for (int j=0; j<tam; j++){
    if (vec[j]>=0){
        pPositivo[idxPos]=vec[j];
        idxPos++;
    } else {
    pNegativo[idxNeg]=vec[j];
    idxNeg++;
    }
}


mostrarVec (pPositivo, pNegativo, contPos, contNeg);

return 0;
}
*/

/* EJERCICIO 4
// Hacer una función que reciba un vector de enteros y su tamaño y
// devuelva la cantidad de números distintos que se repiten en el vector.

int main (){

int *pDinamico = nullptr;
int tam;
int ContRepes = 0;

cout << "Ingrese el tamaño del vector: " << endl;
cin >> tam;

pDinamico=new int [tam];
if (pDinamico==nullptr){
    cout << "ERROR DE ASIGNACION DE MEMORIA" << endl;
    return -1;
}


cargarVector(pDinamico, tam);

ContRepes = ContarRepetidos (pDinamico, tam);

if (ContRepes>0){
cout << "La cantidad de numeros que se repiten en el vector es de: " << ContRepes << endl;
} else {cout << "Ningun numero se repite" << endl;
}

delete []pDinamico;
return 0;
}
*/

/* EJERCICIO 5
// Hacer una función que reciba un vector de enteros y su tamaño y luego muestre el vector ordenado de forma ascendente,
// tener en cuenta que el vector enviado como argumento no debe ser modificado.

int main (){

int *pDinamico=nullptr;
int tam;

cout << "Ingrese el tamanio de su vector: " << endl;
cin >> tam;

pDinamico= new int [tam];

if (pDinamico==nullptr){
    cout << "ERROR EN ASGINACION DE MEMORIA DINAMICA" << endl;
    return -1;
}

cargarVector(pDinamico, tam);
ordenarmostrarVector (pDinamico, tam);

delete [] pDinamico;
pDinamico=nullptr;
return 0;
}
*/

// EJERCICIO 6 (CODIGO COPIADO DEL VIDEO DE KLOSTER. MUESTRA TODOS LOS PARES
//              NO SOLO LOS DISTINTOS)

// Escribir un programa que solicite al usuario ingresar una lista de 10 números enteros.
// Luego, el programa debe mostrar los números pares distintos que se ingresaron.
// Para resolver este ejercicio, se debe implementar una función que reciba un vector de enteros y su tamaño,
// y que devuelva un puntero a un vector dinámico que contenga solo los números pares distintos del vector recibido.

/// v[]=*v

int main (){

int vec[10];
int *vPares;
cout << "Ingresar 10 numeros: " << endl;

cargarVector(vec, 10);
system("pause");
system("cls");
int cant=contarPares(vec,10);

if (cant==0){
    cout << "NO HAY PARES" << endl;
    return 0;}

vPares=copiarSoloPares(vec, 10);

if (vPares==nullptr){
    cout << "NO SE PUDO ASIGNAR MEMORIA" << endl;
    return -1;
}
mostrarVector (vPares, cant);

delete []vPares;
vPares=nullptr;
return 0;
}


/* EJERCICIO 7
// Escribir un programa que simule la gestión de un club de lectura.
// El programa debe solicitar al usuario la cantidad de libros que desea cargar y posteriormente
// pedir los nombres de dichos libros. Una vez cargados los libros se debe mostrar un menú  con las siguientes opciones:
// 1- Listado: Debe listar los libros en el orden en que fueron cargados.
// 2- Tiempo de lectura: Se solicita el nombre del libro. Si no existe debe mostrar un mensaje aclaratorio.
//    Si el libro existe, ingresar la cantidad de minutos que le llevó su lectura.
// 3- Ranking: Mostrar los libros ordenados por tiempo de lectura de Mayor a Menor.
// 4- Salir: el programa debe salir del programa.

int main (){

int tam;
float *pTiempo=nullptr;
string *pLibro=nullptr;

cout << "Ingrese la cantidad de libros a cargar: " << endl;
cin >> tam;

pTiempo= new float [tam];
pLibro= new string [tam];

if (pTiempo==nullptr||pLibro==nullptr){
        cout << "ERROR EN ASIGNACION DE MEMORIA" << endl;
        return -1;
    }

cargarLibros (pLibro, tam);
system ("cls");
int Opcion=0;

while (Opcion !=4){
mostrarMenu();
cin >> Opcion;
    switch (Opcion){

    case 1: // mostrar libros en orden
        {
    system ("cls");
    mostrarListado (pLibro, tam);
        }
    break;
    case 2: // tiempo
        {
    system ("cls");
    cargarTiempo (pLibro, pTiempo, tam);

        }
    break;

    case 3: // ranking
        {
    system ("cls");
    mostrarRanking (pLibro, pTiempo, tam);

        }
    break;

    case 4: //salir
        {

            cout << "Usted esta saliendo del programa... " << endl;
            system ("pause");
            delete []pTiempo;
            delete []pLibro;
            return 0;

        }
    break;

    default:
        {
cout << "No se ingreso una opcion valida..." << endl;
        }
        break;

    }//fin switch
}//fin while
}
*/

