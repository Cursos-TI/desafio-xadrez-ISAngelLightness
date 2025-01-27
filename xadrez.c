#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void passos_para_o_cavalo(int passos, int direcao){
    /*
    0=> cima esquerda;
    1=> cima direita;
    2=> esquerda baixo;
    3=> esquerda cima;
    4=> direita cima;
    5=> direita baixo;
    */
    for(int j = 0;;j++){
        if (direcao == 0){
            for (int i=0;i < 4;i++){
                printf("CIMA\n");
            }
            for (int i=0;i<3;i++){
                printf("ESQUERDA\n");
            }
        }else if (direcao == 1){
            for (int i=0;i < 4;i++){
                printf("CIMA\n");
            }
            for (int i=0;i<3;i++){
                printf("DIREITA\n");
            }
        }else if (direcao == 2){
            for (int i=0;i < 4;i++){
                printf("ESQUERDA\n");
            }
            for (int i=0;i<3;i++){
                printf("BAIXO\n");
            }
        }else if (direcao == 3){
            for (int i=0;i < 4;i++){
                printf("ESQUERDA\n");
            }
            for (int i=0;i<3;i++){
                printf("CIMA\n");
            }
        }else if (direcao == 4){
            for (int i=0;i < 4;i++){
                printf("DIREITA\n");
            }
            for (int i=0;i<3;i++){
                printf("CIMA\n");
            }
        }else if (direcao == 5){
            for (int i=0;i < 4;i++){
                printf("DIREITA\n");
            }
            for (int i=0;i<3;i++){
                printf("BAIXO\n");
            }
        }
        if (j > passos){
            break;
        }else{
            continue;
        }
    }
}
void passos_para_o_bispo(int passos, int direcao){
    /*
    0=> cima direta;
    1=> cima esquerda;
    2=> baixo direta;
    3=> baixo esqueda;
    */
    if (direcao == 0){
        for (int i = 0;i < 2;i++) {
            if (i == 0){
                printf("ESQUERDA\n");
            }else if(i == 1){
                printf("CIMA\n");
            }
        }
    }else if (direcao == 1){
        for (int i = 0;i < 2;i++) {
            if (i == 0){
                printf("DIREITA\n");
            }else if(i == 1){
                printf("CIMA\n");
            }
        }
    }else if (direcao == 2){
        for (int i = 0;i < 2;i++) {
            if (i == 0){
                printf("ESQUERDA\n");
            }else if(i == 1){
                printf("BAIXA\n");
            }
        }
    }else if (direcao == 3){
        for (int i = 0;i < 2;i++) {
            if (i == 0){
                printf("DIREITA\n");
            }else if(i == 1){
                printf("BAIXA\n");
            }
        }
    }
    if (passos > 0){
        passos_para_o_bispo(passos-1, direcao);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casas_bispo = 5;
    int passos_bispo = 0;
    int casas_torre = 5;
    int casas_rainha = 8;
    int casas_cavalo = 5;
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Bispo Passos:\n");

    while(casas_bispo > 0){
        if (passos_bispo == 0){
            printf("ESQUERDA\n");
        }else if(passos_bispo == 1){
            printf("CIMA\n");
        }
        if (passos_bispo == 1){
            passos_bispo = 0;
        } else {
            passos_bispo++;
        }
        casas_bispo--;
    }
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nTorre Passos:\n");
    while(casas_torre > 0){
        printf("DIREITA\n");
        casas_torre--;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nRainha Passos:\n");
    while(casas_rainha > 0){
        printf("ESQUERDA\n");
        casas_rainha--;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nCavalo Passos:\n");
    while(casas_cavalo > 0){
        for (int i=0;i < 4;i++){
            printf("CIMA\n");
        }
        for (int i=0;i<3;i++){
            printf("ESQUERDA\n");
        }
        casas_cavalo--;
    }

    // **Bispo**: 5 casas na diagonal direita para cima
    // **Torre**: 5 casas para a direita
    // **Rainha**: 8 casas para a esquerda
    // **Cavalo**: 1 vez em L para cima à direita
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    printf("\nBispo Passos para Mestre!\n");
    passos_para_o_bispo(5, 0);

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    printf("\nCavalo Passos para Mestre!\n");
    passos_para_o_cavalo(1, 1);

    return 0;
}
