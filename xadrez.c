#include <stdio.h>
// movivmentacao das pecas de xadrez utilizando for, while e do-while

// Recursividade movimento da torre
void moverTorre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Recursividade movimento do bispo
void moverBispo(int casas)
{
    if (casas > 0)
    {
        printf("Cima\n");
        printf("Direita\n");
        moverBispo(casas - 1);
    }
}

// Recursividade do cavalo
void moverCavalo(int casas)
{
    printf("Cavalo escolhido\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Cima\n"); // direcao do movimento}
    }
    printf("Direita\n");
}

int main()
{
    char sentido;
    int peca;
    // menu para escolher a peca
    printf("Vamos jogar xadrez, escolha qual peca voce quer mover: \n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");

    scanf("%d", &peca);
    // torre
    if (peca == 1)
    {
        printf("Torre escolhida\n");
        moverTorre(5);
        return 0;
    }
    // bispo
    if (peca == 2)
    {
        printf("Bispo escolhido\n");
        moverBispo(5);
        return 0;
    }
    // rainha
    if (peca == 3)
    {
        do
        {
            printf("Rainha escolhida\n");
            printf("Escolha o sentido: \n");
            printf("c - Cima\n");
            printf("d - Direita\n");
            printf("e - Esquerda\n");
            printf("b - Baixo\n");
            scanf("%c", &sentido);
        } while (sentido != 'c' && sentido != 'd' && sentido != 'e' && sentido != 'b');

        switch (sentido)
        {
        case 'c':
            for (int i = 0; i < 8; i++)
                printf("Cima\n");
            break;

        case 'd':
            for (int i = 0; i < 8; i++)
                printf("Direita\n");
            break;

        case 'e':
            for (int i = 0; i < 8; i++)
                printf("Esquerda\n");
            break;

        case 'b':
            for (int i = 0; i < 8; i++)
                printf("Baixo\n");
            break;
        default:
            break;
        }
    }

    if (peca == 4)

    {
        moverCavalo(0);
    }
}