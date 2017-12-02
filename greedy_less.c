#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //check input is positive number
    float change;

    do
    {
        printf("How much change is owed?: ");
        change = get_float();
    }
    while ( change < 0 );

    //turn float dollar in integer cents and make sure it rounds correctly

    int cents;
    cents = (int) roundf(change*100);

    //finding coins loops

    int coins = 0;

    while (cents >= 25)
    {
        coins++;
        cents -= 25;
    }

    while (cents >= 10)
    {
        coins++;
        cents -= 10;
    }

    while (cents >= 5)
    {
        coins++;
        cents -= 5;
    }

    while (cents >= 1)
    {
        coins++;
        cents -= 1;
    }

    printf("Coins: %i\n", coins);

}
