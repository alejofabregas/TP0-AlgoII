#include "tp0.h"

/* *****************************************************************
 *                     FUNCIONES A COMPLETAR                       *
 *         (ver en tp0.h la documentación de cada función)         *
 * *****************************************************************/

void swap(int *x, int *y) {
	int aux = *x;
	*x = *y;
	*y = aux;
}


int maximo(int vector[], int n) {
	if (n == 0) {
    	return -1;
    }
    int pos_max = 0;
    int max = vector[0];
    for (int i = 1; i < n; i++) {
    	if (vector[i] > max) {
    		max = vector[i];
    		pos_max = i;
    	}
    }
    return pos_max;
}


int comparar(int vector1[], int n1, int vector2[], int n2) {
	int largo_min = (n1 <= n2) ? n1 : n2;
	for (int i = 0; i < largo_min; i++) {
		if (vector1[i] > vector2[i]) {
			return 1;
		}
		if (vector2[i] > vector1[i]) {
			return -1;
		}
	}
	if (n1 > n2) { return 1; }
	if (n2 > n1) { return -1; }
    return 0;
}


void seleccion(int vector[], int n) {
	int pos_max;
	for (int i = n - 1; i > 0; i--) {
		pos_max = maximo(vector, i);
		if (vector[pos_max] >= vector[i]) {
			swap(&vector[i], &vector[pos_max]);
		}
	}
}
