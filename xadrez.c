#include <stdio.h>

void move_bispo(int bispo);
void move_torre(int torre);
void move_rainha(int rainha);
void move_cavalo(int cavalo);

int main() {

    int bispo = 5, torre = 5, rainha = 8, cavalo = 2;
    // Variavel para as opções do switch
    int menu = 4;

    // Printf com o menu do jogo
    printf("***Escolha uma peça para se mover!***\n1 - Bispo\n2 - Torre\n3 - Rainha\n4 - Cavalo\n");
    scanf("%d", &menu);
    printf("\n");

    switch (menu)
    {

    //Bispo
    case 1:   
        
        move_bispo(bispo);
        printf("\n");
        break;

    // Torre
    case 2:
        
        move_torre(torre);
        printf("\n");
        break;

    // Rainha
    case 3:
        
        move_rainha(rainha);
        printf("\n");
        break;
    
    // Cavalo
    case 4:

        move_cavalo(cavalo);
        printf("\n");
        break;

    // Default com print de opção inválida
    default:

        printf("Opção inválida!\n\n");
        break;
    }
  
    return 0;
}

// Função com loop while para o bispo, iniciando com n movimentos e tendo decremento até zerar o numero de movimentos.
void move_bispo(int bispo) {

    while (bispo > 0)
    {
        if (bispo > 0)
        {
            printf("Direita\n");
        }
        
        if (bispo > 0)
        {
            printf("Cima\n");
            bispo--;
        }
        
    }

}

// Função recursiva do movimento da torre
void move_torre(int torre) {

    if (torre > 0)
    {
        printf("Direita\n");
        move_torre(torre - 1);
    }

}

// Função recursiva com o movimento da rainha
void move_rainha(int rainha) {

    if (rainha > 0)
    {
        printf("Esquerda\n");
        move_rainha(rainha - 1);
    }

}

// Função com loop de variavel mutipla para o cavalo com continue e break.
void move_cavalo(int cavalo) {

    for (int i = 0, j = cavalo; i <= cavalo; i++, j--)
    {
        if (i < cavalo)
        {
            printf("Cima\n");
            continue;
        }
        
        if (j == 0)
        {
            printf("Direita\n");
            break;
        }
    }

}
