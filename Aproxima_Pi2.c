#include <stdio.h>

// Funcion para calcular	 PI con la serie de Leibniz
void calcular_pi(int n) {
    double pi = 0;
    int a = 0;  // a sera el contador
    
    while(a<n){
    	if (a % 2 == 0)
            pi += 1.0 / (2 * a + 1);
        else
            pi -= 1.0 / (2 * a + 1);
        a++;
    }
    
    pi = pi * 4;
    printf("\nUsando %d elementos, el valor aproximado de PI es: %f\n", n, pi);
}

int main() {
    int veces = 0;
    printf("\nPractica I");
    printf("\nIngresa el numero de elementos para calcular PI:");
    scanf("%d", &veces);

    calcular_pi(veces);
    
    return 0;
}


