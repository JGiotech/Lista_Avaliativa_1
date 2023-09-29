#include <stdio.h>

int main() {

    int valor1, valor2, maiorValor, menorValor;
    
    scanf("%d", &valor1);
    scanf("%d", &valor2);
    
    if (valor1 == valor2){
        printf("Os valores lidos sao iguais\n");

    }else{

    if(valor1 > valor2){
        maiorValor = valor1;
        menorValor = valor2;
    }else{
        maiorValor = valor2;
        menorValor = valor1;
    }   
        printf("%d eh maior que %d\n", maiorValor, menorValor);
        
    if (menorValor != 0 && maiorValor % menorValor == 0){
        printf("%d eh multiplo de %d\n", maiorValor, menorValor);
    }else {
        printf("%d nao eh multiplo de %d\n", maiorValor, menorValor);
   
    }
}

    return 0;
}
