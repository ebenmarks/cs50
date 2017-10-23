#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    // height check loop
    do
    {
        printf("Height: ");
        height = get_int();
    }

    //prompt user to try again if number entered isn't from 1 to 23
    while( height < 0 || height > 23);

    // printing loop
    for (int row = 0; row < height; row++)
    {

        //print spaces
        for (int space = 0; space < height - row -1; space++)
        {
            printf(" ");
        }

        //print hashes
        for (int hash = 0; hash < row+2; hash++)
        {
            printf("#");
        }
        //go to the next line
        printf("\n");
    }
}