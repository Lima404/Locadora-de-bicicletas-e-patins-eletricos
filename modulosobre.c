#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "modulosobre.h"

char menu_sobre(void){
    char op;

    system("clear||cls");
    printf("\n");
    printf("=====================================================\n");
    printf("=====================================================\n");
    printf("-----------------------------------------------------\n");
    printf("░██████╗██╗░██████╗░░░░░░░██████╗░██╗██╗░░██╗███████╗\n");
    printf("██╔════╝██║██╔════╝░░░░░░░██╔══██╗██║██║░██╔╝██╔════╝\n");
    printf("╚█████╗░██║██║░░██╗░█████╗██████╦╝██║█████═╝░█████╗░░\n");
    printf("░╚═══██╗██║██║░░╚██╗╚════╝██╔══██╗██║██╔═██╗░██╔══╝░░\n");
    printf("██████╔╝██║╚██████╔╝░░░░░░██████╦╝██║██║░╚██╗███████╗\n");
    printf("╚═════╝░╚═╝░╚═════╝░░░░░░░╚═════╝░╚═╝╚═╝░░╚═╝╚══════╝\n");
    printf("-----------------------------------------------------\n");
    printf("=====================================================\n");
    printf("=====================================================\n");
    printf("======SISTEMAS DE BICICLETAS E PATINS ELÉTRICOS======\n");
    printf("======================Menu Sobre=====================\n");
    printf("===                                               ===\n");
    printf("===                  0.Voltar                     ===\n");
    printf("===                                               ===\n");
    printf("===                                               ===\n");
    printf("===                                               ===\n");
    printf("=====================================================\n");
    scanf("%c", &op);
    getchar();
    printf("===                                               ===\n");
    printf("===                                               ===\n");
    printf("=====================================================\n");
    printf("\t\t\t ... Aguarde ... \n");
    sleep(1);
    return op;
}