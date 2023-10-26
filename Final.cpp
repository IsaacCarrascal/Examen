#include <iostream>
#include <stdio.h> // <>
#include <string>
#include <cstdio>
#include <cstring>
#include <conio.h>
#include <windows.h>
using namespace std;
void cuadrado();
void triangulo();
int main() {
    int seleccion;
    printf("Digite 1 para imprimir un cuadrado y 2 para imprimir un triángulo: \n");
    scanf("%d", &seleccion);
    
switch(seleccion)
    case 1:
        cuadrado();
        break;
    case 2:
        triangulo();
        break;
    default:
        printf("Opcion no válida \n");
    return 0;    
}

void cuadrado() {
    int filas_columnas = 0;
    int i;

    printf("Intrdozca cuántas filas y columnas va a querer para el cuadrado : ");
    scanf("%i", &filas_columnas);
    for (int i = 0; i < filas_columnas; i++) {
        for (int o = 0; o < filas_columnas; o++) {
            printf("* ");
        }
        printf("\n");
    }
}

void triangulo() {
    int numero_filas_columnas = 0;
    char opcion = '0';
    printf("Introduzca el número de filas y columnas para el triangulo equilatero (debe ser mayor a 1) : ");
    scanf("%i", &numero_filas_columnas);
    if (numero_filas_columnas < 2) {
        printf("Valor no es mayor a 1");
    }
    else {
        for (int i = 0; i < numero_filas_columnas; i++) {
            printf("\n");
            for (int espacios = 0; espacios < numero_filas_columnas - i; espacios++) {
                printf(" ");
            }
            for (int asteriscos = 0; asteriscos < i + 1; asteriscos++) {
                printf("* ");
            }
        }
    }
}