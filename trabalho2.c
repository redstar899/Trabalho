#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main() {
    char jogador, computador;
    int escolhaComputador;

    srand(time(NULL));

    printf("\n");
    printf("PEDRA PAPEL TESOURA ULTIMATE\n");
    printf("-----------------------\n");
    printf("( ) JOGAR\n");
    printf("(z) COMO JOGAR\n");
    printf("(x) PEDRA PAPEL TESOURA CLASSICO\n");
    printf("(c) SAIR\n");
    printf("Aperte qualquer tecla para jogar ou digite outra opcao\n");
    char opcao = 0;
    scanf(" %c", &opcao); 

    switch(opcao) {
        case 'z': {
            printf("Link com manual: https://prnt.sc/pGkrklYUO8ac\n");
        } break;

        case 'x': {
            printf("Modo classico selecionado!\n");
            printf("PEDRA, PAPEL, TESOURA\n");
            printf("---------------------\n");
            printf("Escolha:\n");
            printf("(p) - Pedra\n");
            printf("(a) - Papel\n");
            printf("(t) - Tesoura\n");
            printf("Digite sua escolha: ");
            scanf(" %c", &jogador);

            escolhaComputador = rand() % 3;
            if (escolhaComputador == 0) {
                computador = 'p';
            } else if (escolhaComputador == 1) {
                computador = 'a';
            } else {
                computador = 't';
            }

            printf("Você escolheu: %c\n", jogador);
            printf("Computador escolheu: %c\n", computador);

            if (jogador == computador) {
                printf("Empate!\n");
            } else if ((jogador == 'p' && computador == 't') || 
                       (jogador == 'a' && computador == 'p') || 
                       (jogador == 't' && computador == 'a')) {
                printf("Voce venceu!\n");
            } else {
                printf("Voce perdeu!\n");
            }

            if (jogador != 'p' && jogador != 'a' && jogador != 't') {
                printf("Opcao invalida! Por favor, escolha 'p', 'a' ou 't'.\n");
            }
        } break;

        case 'c': {
            printf("Encerrando o programa...\n");
        } break;

        default: {
            printf("PEDRA PAPEL TESOURA ULTIMATE\n");
            printf("-------------------------------------\n");
            printf("Escolha:\n");
            printf("1 - Pedra\n");
            printf("2 - Papel\n");
            printf("3 - Tesoura\n");
            printf("4 - Lagarto\n");
            printf("5 - Spock\n");
            printf("Digite sua escolha (1 a 5): ");
            scanf("%d", &jogador);

            
            if (jogador < 1 || jogador > 5) {
                printf("Opcao invalida! Por favor, escolha um numero entre 1 e 5.\n");
                return 1; 
            }

            computador = rand() % 5 + 1;

            printf("Voce escolheu: %d\n", jogador);
            printf("Computador escolheu: %d\n", computador);

            if (jogador == computador) {
                printf("Empate!\n");
            } else if ((jogador == 1 && (computador == 3 || computador == 4)) || 
                       (jogador == 2 && (computador == 1 || computador == 5)) || 
                       (jogador == 3 && (computador == 2 || computador == 4)) || 
                       (jogador == 4 && (computador == 2 || computador == 5)) || 
                       (jogador == 5 && (computador == 1 || computador == 3))) {
                printf("Voce venceu!\n");

                if (jogador == 1 && computador == 3) {
                    printf("Pedra (1) vence Tesoura (3) porque a pedra quebra a tesoura.\n");
                } else if (jogador == 1 && computador == 4) {
                    printf("Pedra (1) vence Lagarto (4) porque a pedra esmaga o lagarto.\n");
                } else if (jogador == 2 && computador == 1) {
                    printf("Papel (2) vence Pedra (1) porque o papel cobre a pedra.\n");
                } else if (jogador == 2 && computador == 5) {
                    printf("Papel (2) vence Spock (5) porque o papel refuta Spock.\n");
                } else if (jogador == 3 && computador == 2) {
                    printf("Tesoura (3) vence Papel (2) porque a tesoura corta o papel.\n");
                } else if (jogador == 3 && computador == 4) {
                    printf("Tesoura (3) vence Lagarto (4) porque a tesoura corta o rabo do lagarto.\n");
                } else if (jogador == 4 && computador == 2) {
                    printf("Lagarto (4) vence Papel (2) porque o lagarto come o papel.\n");
                } else if (jogador == 4 && computador == 5) {
                    printf("Lagarto (4) vence Spock (5) porque o lagarto envenena Spock.\n");
                } else if (jogador == 5 && computador == 1) {
                    printf("Spock (5) vence Pedra (1) porque Spock vaporiza a pedra.\n");
                } else if (jogador == 5 && computador == 3) {
                    printf("Spock (5) vence Tesoura (3) porque Spock quebra a tesoura.\n");
                }
            } else {
                printf("Voce perdeu!\n");

                if (computador == 1 && jogador == 3) {
                    printf("Pedra (1) vence Tesoura (3) porque a pedra quebra a tesoura.\n");
                } else if (computador == 1 && jogador == 4) {
                    printf("Pedra (1) vence Lagarto (4) porque a pedra esmaga o lagarto.\n");
                } else if (computador == 2 && jogador == 1) {
                    printf("Papel (2) vence Pedra (1) porque o papel cobre a pedra.\n");
                } else if (computador == 2 && jogador == 5) {
                    printf("Papel (2) vence Spock (5) porque o papel refuta Spock.\n");
                } else if (computador == 3 && jogador == 2) {
                    printf("Tesoura (3) vence Papel (2) porque a tesoura corta o papel.\n");
                } else if (computador == 3 && jogador == 4) {
                    printf("Tesoura (3) vence Lagarto (4) porque a tesoura corta o rabo do lagarto.\n");
                } else if (computador == 4 && jogador == 2) {
                    printf("Lagarto (4) vence Papel (2) porque o lagarto come o papel.\n");
                } else if (computador == 4 && jogador == 5) {
                    printf("Lagarto (4) vence Spock (5) porque o lagarto envenena Spock.\n");
                } else if (computador == 5 && jogador == 1) {
                    printf("Spock (5) vence Pedra (1) porque Spock vaporiza a pedra.\n");
                } else if (computador == 5 && jogador == 3) {
                    printf("Spock (5) vence Tesoura (3) porque Spock quebra a tesoura.\n");
                }
            }
        }
    }

    return 0;
}