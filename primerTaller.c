#include <stdio.h>

// Prototipos de funciones
void llenarArray(int a[], int n);
void ordenarSelectionAscendente(int a[], int n);
void ordenarInsertionDescendente(int a[], int n);
void mostrarArray(int a[], int n);

int main() {
    int arreglo[10] = {5, 7, 8, 9, 3, 2, 1, 4, 6, 0};
    int n = 10;

    printf("Ordenamiento Ascendente (Selection Sort):\n");
    ordenarSelectionAscendente(arreglo, n);

    printf("\nOrdenamiento Descendente (Insertion Sort):\n");
    ordenarInsertionDescendente(arreglo, n);

    return 0;
}

// Función para mostrar el arreglo
void mostrarArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Selection Sort Ascendente
void ordenarSelectionAscendente(int a[], int n) {
    int i, j, min, temp;

    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        // Intercambio
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;

        printf("Paso %d: ", i + 1);
        mostrarArray(a, n);
    }

    printf("Resultado final ascendente: ");
    mostrarArray(a, n);
}

// Insertion Sort Descendente
void ordenarInsertionDescendente(int a[], int n) {
    int i, key, j;

    for (i = 1; i < n; i++) {
        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] < key) {
            a[j + 1] = a[j];
            j= j -1;
        }
        a[j + 1] = key;

        printf("Paso %d: ", i);
        mostrarArray(a, n);
    }

    printf("Resultado final descendente: ");
    mostrarArray(a, n);
}