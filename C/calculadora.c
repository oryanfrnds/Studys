
#include <stdio.h>

int main() {
    float numero, dobro;
    char resposta;

    do {
        printf("Digite um numero real: ");
        scanf("%f", &numero);

        dobro = numero * 2;

        printf("O dobro de %.2f e %.2f\n", numero, dobro);

        printf("Deseja calcular outro numero? (S para Sim / N para Nao): ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    printf("Calculadora encerrada. Ate logo!\n");

    return 0;
}


