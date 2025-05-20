// biblioteca.h
#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

void multiplicarMatriz(double **A, double **B, double **C, int N, int numHilos);

double **crearMatriz(int N);
void liberarMatriz(double **matriz, int N);
void llenarMatriz(double **matriz, int N);

#endif
