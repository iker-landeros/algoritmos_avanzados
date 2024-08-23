// Actividad 1.3 Implementación de la técnica de programación "backtracking" y "ramificación y poda"

// Dulce Nahomi Bucio Rivas (A0)
// Iker Landeros De La O (A01423214)
// 23 de agosto de 2024

// ====================================================================================================
// Ejercicio: Utilizando la técnica de programación de "backtracking" y la de "ramificación y poda",
// escribe en equipos de máximo dos personas, en C++ un programa que resuelva un laberinto.

// El programa recibe dos numeros enteros M y N, seguido de M líneas de N valores booleanos(0|1) separados por un espacio,
// por la entrada estándar que representan el laberinto.  Un 1 representa una casilla en la que es posible moverse,
// un 0 es una casilla por la que NO se puede pasar.

// El origen o casilla de inicio es siempre la casilla (0,0) y la salida o meta es siempre la casilla (M-1, N-1).
// La salida del programa es una matriz de valores booleanos (0|1) que representan el camino para salir del laberinto.
// Primero debe mostrarse la solución utilizando la técnica de backtracking, y luego utilizando la técnica de ramificación y poda.

// Ejemplo de entrada:
// 4
// 4
// 1 0 0 0
// 1 1 0 1
// 0 1 0 0
// 1 1 1 1

// Ejemplo de salida:
// 1 0 0 0
// 1 1 0 0
// 0 1 0 0
// 0 1 1 1

// 1 0 0 0
// 1 1 0 0
// 0 1 0 0
// 0 1 1 1

#include <iostream>