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
void gotoxy(int,int); 
int main() {
    int seleccion;
    printf("Digite 1 para imprimir un cuadrado y 2 para imprimir un triángulo: \n");
    scanf("%d", &seleccion);
    
switch(seleccion) {
    case 1:
        cuadrado();
        break;
    case 2:
        triangulo();
        break;
    default:
        printf("Opcion no válida \n");
    }
    return 0;    
}

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void cuadrado() {
    int x = 0;
    int y = 0;
    int filas_columnas = 0;
    int i;

    printf("Intrdozca cuántas filas y columnas va a querer para el cuadrado : ");
    scanf("%i", &filas_columnas);

    system("cls");

    while (true) {
        // Imprimir el cuadrado en la posición actual
        for (int i = 0; i < filas_columnas; i++) {
            gotoxy(x, y + i);
            for (int o = 0; o < filas_columnas; o++) {
                printf("* ");
            }
        }

        // Obtener la entrada del usuario sin necesidad de presionar Enter
        char input = _getch();

        // Actualizar la posición del cuadrado según la entrada
        switch (input) {
            case 'w':
                y--;
                break;
            case 'a':
                x--;
                break;
            case 's':
                y++;
                break;
            case 'd':
                x++;
                break;
        }

        system("cls");
    }
}

void triangulo() {
    int x = 0;
    int y = 0;
    int numero_filas_columnas = 0;
    char opcion = '0';
    printf("Introduzca el número de filas y columnas para el triangulo equilatero (debe ser mayor a 1) : ");
    scanf("%i", &numero_filas_columnas);
    if (numero_filas_columnas < 2) {
        printf("Valor no es mayor a 1");
    }
    else {
        while (true) {
            system("cls");

            // Imprimir el triángulo en la posición actual
            for (int i = 0; i < numero_filas_columnas; i++) {
                gotoxy(x, y + i);
                for (int espacios = 0; espacios < numero_filas_columnas - i; espacios++) {
                    printf(" ");
                }
                for (int asteriscos = 0; asteriscos < i + 1; asteriscos++) {
                    printf("* ");
                }
            }

            // Obtener la entrada del usuario sin necesidad de presionar Enter
            char input = _getch();

            // Actualizar la posición del triángulo según la entrada
            switch (input) {
                case 'w':
                    y--;
                    break;
                case 'a':
                    x--;
                    break;
                case 's':
                    y++;
                    break;
                case 'd':
                    x++;
                    break;
            }
        }
    }
}