/* Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula 
ou minúscula, além de informar a quantidade de vezes em que ela ocorre.

IMPORTANTE: Essa string pode ser informada através de qualquer entrada de sua preferência ou 
pode ser previamente definida no código; */

#include <stdio.h>

int main() {
    char str[100];
    int contador = 0;

    printf("Digite uma palavra ou frase: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            contador++;
        }
    }

    if (contador > 0) {
        printf("A letra 'a' aparece %d vez(es) na palavra/frase digitada.\n", contador);
    } else {
        printf("A letra 'a' não aparece na palavra/frase digitada.\n");
    }

    return 0;
}
