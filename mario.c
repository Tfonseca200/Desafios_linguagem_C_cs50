#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int x;

    do
    {
        x = get_int("digite um numero de 1 a 8:");
    }
    while (x < 1 || x > 8);

    int Position = x - 1;

    for (int lineIndex = 0; lineIndex < x; lineIndex++)
    {
        for (int columnIndex = 0; columnIndex < x; columnIndex++)
        {
            if (columnIndex < Position)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");

        inputPosition -= 1;
    }
}
