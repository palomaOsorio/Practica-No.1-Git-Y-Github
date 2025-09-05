#include <stdio.h>

// Funcion para calcular	 PI con la serie de Leibniz
double calcular_pi(int n) {
    double pi = 0;
    int a;  // a sera el contador
    for (a = 0; a < n; a++) {
        if (a % 2 == 0)
            pi += 1.0 / (2 * a + 1);
        else
            pi -= 1.0 / (2 * a + 1);
    }
    return pi * 4;
}

int main() {
    int veces;
    printf("Practica I \t\n\n\n Ingresa el numero de elementos para calcular PI: ");
    scanf("%d", &veces);

    double pi = calcular_pi(veces);
    printf("Usando %d elementos, el valor aproximado de PI es: %f\n", veces, pi);

    return 0;
}


