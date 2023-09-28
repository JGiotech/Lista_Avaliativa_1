#include <stdio.h>

int main() {
    
    int numero;
    int soma = 0;

    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d eh par\n", numero);
    } else {
        printf("%d eh impar\n", numero);
    }

    int i = numero;
    for (; i != 0; i /= 10) {
        soma += i % 10;
    }

    printf("A soma dos algarismos de %d eh %d", numero, soma);

    return 0;
}
