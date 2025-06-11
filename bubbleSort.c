#include <stdio.h>

void bubbleSort(int vetor[], int tamanho) {
    int aux;

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if(vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main () {
    int vetor[] = {9,8,7,6,5,4,3,1,2};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    
    printf("Vetor antes de ser ordenado usando Bubble Sort: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d; ", vetor[i]);
    }
    printf("\n");
    bubbleSort(vetor, tamanho);

    printf("Vetor depois de ser ordenado usando Bubble Sort: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d; ", vetor[i]);
    }

    printf("\n");
    return 0;
}