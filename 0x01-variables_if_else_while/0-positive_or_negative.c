#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: false or ture validation
 *
 * Return 0 (success)
*/

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n > 0)
                printf("%i is positive\n", n);

        else if (n == 0)
                printf("%i is Zero\n", n);
        else
                printf("%i is nigative\n", n);

        return (0);
}
