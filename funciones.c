#include "header.h"

void ordenSeleccion(int vector[], int cant){
    int i, j, min, aux;
    for(i=0; i<cant; i++){
        min = i;
        for(j=i+1; j<cant; j++){
            if(vector[j]<vector[min]){
                min = j;
            }
        }
        aux = vector[i];
        vector[i] = vector[min];
        vector[min] = aux;
    }
}

void mostrarVector(int vector[], int cant){
    int i;
    for(i=0; i<cant; i++){
        printf("%d ", vector[i]);
    }
}
