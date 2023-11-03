#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing a binary number.
 *
 * Return: Unsigned int with the decimal value of the binary number,
 *         or 0 if there is an error in the input.
 */
unsigned int binary_to_uint(const char *b)
{
    int index;
    unsigned int decimalNum = 0;

    if (!b)
        return 0;

    for (index = 0; b[index] != '\0'; index++)
    {
        if (b[index] != '0' && b[index] != '1')
            return 0;
    }

    for (index = 0; b[index] != '\0'; index++)
    {
        decimalNum <<= 1;
        if (b[index] == '1')
            decimalNum += 1;
    }

    return decimalNum;
}
