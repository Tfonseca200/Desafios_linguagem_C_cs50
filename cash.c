#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{

    float valor;
    int coin25 = 25, coin10 = 10, coin5 = 5, coin1 = 1;
    int count_coin25 = 0, count_coin10 = 0, count_coin5 = 0, count_coin1 = 0;

    do
    {
        valor = get_float("Troca devida: ");
    }
    while (0 > valor);

    int coinInt = round(valor * 100);
    int loop = coinInt + 1 ;

    for (int i = 0; i < loop; i++)
    {
        if (coin25 <= coinInt)
        {
            coinInt -= coin25;
            count_coin25++;
        }

        else if (coin10 <= coinInt)
        {
            coinInt -= coin10;
            count_coin10++;
        }

        else if (coin5 <= coinInt)
        {
            coinInt -= coin5;
            count_coin5++;
        }

        else if (coin1 <= coinInt)
        {
            coinInt -= coin1;
            count_coin1++;
        }
    }

    printf("Valor do restante : %d\n", coinInt);
    printf("Quantidade de moedas de $0.25 : %d\n", count_coin25);
    printf("Quantidade de moedas de $0.10 : %d\n", count_coin10);
    printf("Quantidade de moedas de $0.05 : %d\n", count_coin5);
    printf("Quantidade de moedas de $0.01 : %d\n", count_coin1);
    printf("**************************************************\n");
}


