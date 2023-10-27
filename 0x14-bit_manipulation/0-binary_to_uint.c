#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - binary can be converted to  unsigned int
 * @b: string that takes binary number or numbers
 * Return: A numbers converted
 */

unsigned int binary_to_uint(const char *b)
{
        int alx;
        unsigned int adel = 0;

        if (!b)
                return (0);
        for (alx = 0; b[alx]; alx++)
        {
                if (b[alx] < '0' || b[alx] > '1')
                        return (0);
                adel = 2 * adel + (b[alx] - '0');
        }
        return (adel);
}

