#include "menu.h"
#include <stdio.h>

int menu(){

    int option;

    printf("Indique a função a ser executada: \n\n");
    printf("1 - Ler arquivo de dicionário\n");
    printf("2 - Ler arquivo contendo texto de referência A (TRA)\n");
    printf("3 - Ler arquivo contendo texto de referência B (TRB)\n");
    printf("4 - Exibir BOWs de TRA e TRB na tela\n");
    printf("5 - Mostrar similaridade entre os dois textos\n");
    printf("6 - Sair\n\n");
    printf("Insira o número indicando a função desejada: ");
    scanf("%d", &option);

    return option;

 }
