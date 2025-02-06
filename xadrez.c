#include <stdio.h>

void move_bispo(void);
void move_torre(void);
void move_rainha(void);

int main() {

    // Variavel para as opções do switch
    int menu = 3;

    // Printf com o menu do jogo
    printf("***Escolha uma peça para se mover!***\n1 - Bispo\n2 - Torre\n3 - Rainha\n");
    scanf("%d", &menu);
    printf("\n");

    switch (menu)
    {

    //Bispo
    case 1:   
        
        move_bispo();
        break;

    // Torre
    case 2:
        
        move_torre();
        break;

    // Rainha
    case 3:
        
        move_rainha();
        break;
    
    // Default com print de opção inválida
    default:

        printf("Opção inválida!\n\n");
        break;
    }
  
    return 0;
}

// Função com loop while para o bispo, iniciando com n movimentos e tendo decremento até zerar o numero de movimentos.
void move_bispo() {

    int bispo = 5;
    printf("**O bispo se moveu**\n");
    while (bispo > 0)
    {
        printf("Cima\n");
        printf("Direita\n");
        bispo--;
    }
    printf("\n");

}

// Função com loop while para a torre, iniciando com n movimentos e tendo decremento até zerar o numero de movimentos.
void move_torre() {

    int torre = 5;
    printf("**A torre se moveu**\n\n");
    while (torre > 0)
    {
        printf("Direita\n");
        torre--;
    }
    printf("\n");

}

// Função com loop while para a rainha, iniciando com n movimentos e tendo decremento até zerar o numero de movimentos.
void move_rainha() {

    int rainha = 8;
    printf("**A rainha se moveu**\n\n");
    while (rainha > 0)
    {
        printf("Esquerda\n");
        rainha--;
    }
    printf("\n");

}
