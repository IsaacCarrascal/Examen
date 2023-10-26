#include <iostream>
#include <stdio.h> // <>
#include <string>
#include <cstdio>
#include <cstring>
#include <conio.h>
#include <windows.h>
using namespace std;

int main() {
    int filas_columnas=0;
    int i;
    char opcion=0;
    printf("Intrdozca cuántas filas y columnas va a querer para el cuadrado : ");
    scanf("%i", &filas_columnas);
    printf("Introduzca 1 y enter si quiere el cuadrado relleno o cualquier cosa y enter si lo quiere hueco : ");
    scanf(" %c",&opcion);
    if (opcion=='1') {
        for (int i = 0; i<filas_columnas; i++) {
            for (int o = 0;o<filas_columnas; o++) {
                printf ("* ");
            }
            printf("\n");
        }
    }

    else {
        for (i = 0; i<filas_columnas; i++) {
            if (i==0 || i==filas_columnas-1) {
                for (int o = 0;o<filas_columnas; o++) {
                printf ("* ");
                }
            }
            else {
                for (int o = 0;o<filas_columnas; o++) {
                    if (o==0 || o==filas_columnas-1) {
                        printf ("* "); 
                    }
                    else {
                        printf("  ");
                    }
                }
            }
            printf("\n");
        }
    }


    return 0;    
}