/* Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça 
{ K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);

Ao final do processamento, qual será o valor da variável SOMA? */

#include <stdio.h>

int main() {
    int indice = 12;
    int soma = 0;
    int k = 1;

    while (k < indice) {
        k = k + 1;
        soma = soma + k;
    }

    printf("Soma = %d\n", soma);

    return 0;
}
