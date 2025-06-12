#include <stdio.h>

void selectionSort(int vetor[], int tamanho) {
    int i, j, min_index;

    for(i = 0; i < tamanho - 1; i++) {
        min_index = i;

        for (j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[min_index]) {
                printf("%d e menor que %d;\n", vetor[j], vetor[min_index]);
                min_index = j;
            }
        }

        int aux = vetor[min_index];
        vetor[min_index] = vetor[i];
        vetor[i] = aux;
    }
}

int main() {
    int vetor[] = {9,8,7,1,5,4,3,6,2};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    
    printf("Vetor antes de ser ordenado usando Selection Sort: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d; ", vetor[i]);
    }
    printf("\n");
    selectionSort(vetor, tamanho);

    printf("Vetor depois de ser ordenado usando Selection Sort: \n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d; ", vetor[i]);
    }

    printf("\n");

    return 0;
}