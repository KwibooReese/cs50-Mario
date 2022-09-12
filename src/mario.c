#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Getting the height
    int h;
    do
    {
        h = get_int("Height:");
    }
    while (h < 1 || h > 8);

    int b1 = h;

    // For each row
    for (int i = 0; i < h; i++)
    {
        //printing spaces
        for (int j = 0; j < b1 - 1; j++)
        {
            printf(" ");
        }

        //printing bricks1
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        printf("  ");

        //print bricks2
        for (int p = 0; p <= i; p++)
        {
            printf("#");
        }

        b1--;
        printf("\n");
    }
}