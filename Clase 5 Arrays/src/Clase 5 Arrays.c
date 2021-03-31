/*
 ============================================================================
 Name        : Clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "UTN.h"
#include "UTN.c"
#define SIZE 5

int arr_calcularMaximoInt(int array[],int limite, int* resultado);
int main()
{
    int mi_Array[SIZE];
    int max;

    for(int x = 0; x < SIZE; x++)
    {
        printf("%d) >> Ingrese numero: ", x+1);
        scanf("%d", &mi_Array[x]);
    }
    if(!(arr_calcularMaximoInt(mi_Array, SIZE, &max)))
    {
        printf("El max es: %d\n", max);
    }

    //printf("El min es: %d\n", min);
    //printf("El promedio es: %.2f\n", (float)acumulador/SIZE);

    return 0;
}

