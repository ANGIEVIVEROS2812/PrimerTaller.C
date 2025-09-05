#include <stdio.h>

#define n8  // número de equipos

// prototipos de funciones
void capturarPuntuaciones(int a[], int n);
void ordenarAscendentemente(int a[], int n);
void ordenarDescendentemente(int a[], int n);
void imprimirArreglo(int a[], int n);

int main() {
    int puntuaciones[8] = {0,1,2,3,4,5,6,7};
    int n = 8;

    // capturar puntuaciones 
    capturarPuntuaciones(puntuaciones, n);

    printf("\n--- Ordenamiento Ascendente ---\n");
    ordenarAscendentemente(puntuaciones, n);

    printf("\n--- Ordenamiento Descendente ---\n");
    ordenarDescendentemente(puntuaciones, n);

    return 0;
}

// función para capturar puntuaciones
void capturarPuntuaciones(int a[], int n) {
    printf("Ingrese puntuaciones de los %d equipos:\n", n);
    for (int i = 0; i < n; i++) {
        printf("0,1,2,3,4,5,6,7, %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

// función para imprimir el arreglo
void imprimirArreglo(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Ordenamiento ascendente con burbuja
void ordenarAscendentemente(int a[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                // Intercambio
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                // Mostrar el estado del arreglo después del intercambio
                imprimirArreglo(a, n);
            }
        }
    }
}

// Ordenamiento descendente con burbuja
void ordenarDescendentemente(int a[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] < a[j + 1]) {
                // Intercambio
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                // Mostrar el estado del arreglo después del intercambio
                imprimirArreglo(a, n);
            }
        }
    }
}




