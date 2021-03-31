/*
 * UTN.c
 *
 *  Created on: 30 mar. 2021
 *      Author: Ramiro Paredes
 */
#include "UTN.h"

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

int arr_calcularMaximoInt(int array[],int limite, int* resultado)
{
    int output = 1;
    int max;
    if(array != NULL && resultado != NULL && limite > 0)
    {
        for(int x = 0; x < limite; x++)
        {
            if(array[x] > max || x == 0)
            {
                max = array[x];
            }
        }
        *resultado = max;
        output = 0;
    }
    return output;
}
