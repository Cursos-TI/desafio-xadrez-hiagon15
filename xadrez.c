#include <stdio.h>

void moverTorre(int passos)
{
    if (passos <= 0)
        return;
    printf("Cima\n");
    moverTorre(passos - 1);
}

void moverBispo(int passos)
{
    if (passos <= 0)
        return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispo(passos - 1);
}

void moverBispoComLoops(int passosVerticais, int passosHorizontais)
{
    for (int i = 0; i < passosVerticais; i++)
    {
        printf("Cima\n");
        for (int j = 0; j < passosHorizontais; j++)
        {
            printf("Direita\n");
        }
    }
}

void moverRainhaDiagonal(int passos)
{
    if (passos <= 0)
        return;
    printf("Cima\n");
    printf("Direita\n");
    moverRainhaDiagonal(passos - 1);
}

void moverCavalo()
{

    for (int i = 0; i < 2; i++)
    {
        printf("Cima\n");
        
        int j = 0;
        while (j < 1 && i == 1)
        {
            printf("Direita\n");
            j++;
        }
    }
}

int main()
{

    printf("Movimento da Torre:\n");
    moverTorre(3);

    printf("\n");

    printf("Movimento do Bispo (recursivo):\n");
    moverBispo(2);

    printf("\n");

    printf("Movimento do Bispo (com loops aninhados):\n");
    moverBispoComLoops(2, 1);

    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainhaDiagonal(3);

    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}