#include <stdio.h>

int somar(int numero) {
    
    if (numero <= 0) return 0;
    if (numero == 1) return 1;

    return numero + somar(numero - 1);
}

int main() {
    int numero = 2;
    printf("Soma de 1 até %d = %d\n", numero, somar(numero));
    return 0;
}