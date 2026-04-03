#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, n, parte;
    char LetraMaiuscula[100], LetraMinuscula[100], Numeros[100], Caracteres[100];
    // Lista de símbolos fixa (não mexer nela no loop)
    char lista_simbolos[] = "!@#$-+*()"; 

    srand(time(NULL));

    printf("Gerador de Senhas\n");
    printf("Selecione o tamanho da senha (mínimo 4): ");
    printf("\n (1) - 4 caracteres\n (2) - 8 caracteres\n (3) - 12 caracteres\n (4) - 16 caracteres\n");
    scanf("%d", &n);

    if (n < 1 || n > 4) {
        printf("Opção inválida. Por favor, selecione um número entre 1 e 4.\n");
        return 1;
    }
    
    if(n == 1) {
        parte = 4; // 4 caracteres
    } else if(n == 2) {
        parte = 8; // 8 caracteres
    } else if(n == 3) {
        parte = 12; // 12 caracteres
    } else {
        parte = 16; // 16 caracteres
    }

    parte = parte /4;
    
    for (i = 0; i < parte; i++) {
     LetraMaiuscula[i] = 'A' + rand() % 26;            // Maiúsculas
        LetraMinuscula[i] = 'a' + rand() % 26;            // Minúsculas
        Numeros[i] = '0' + rand() % 10;            // Números
        Caracteres[i] = lista_simbolos[rand() % 9];  // Símbolos (pega da lista)
    }

    // Finaliza as strings corretamente
    LetraMaiuscula[parte] = '\0';
    LetraMinuscula[parte] = '\0';
    Numeros[parte] = '\0';
    Caracteres[parte] = '\0';

    printf("Senha gerada: %s%s%s%s\n", LetraMaiuscula, Caracteres, LetraMinuscula, Numeros);

    return 0;
}