#include <stdio.h> 

int fatorial(int numero) {
    if (numero == 0) {
        return 1;
    } else {
        return numero * fatorial(numero - 1);
    }
}

int main() {
    int numero;
    printf("Digite um numero inteiro e positivo:\n");
    scanf("%d", &numero);

    if(numero < 0) {
        printf("Não é possível realizar a função com um número negativo.\n");
    } else {
        int resultado = fatorial(numero);
        
        printf("o fatorial de %d é: %d\n",numero, resultado);
    }
    
    printf("\n");

    return 0;
}