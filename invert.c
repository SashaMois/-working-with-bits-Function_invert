#include <stdio.h>

/*
 * Function invert return his argument 'x'
 * which in 'n' bits have faced start from 
 * 'p' pozition, but any have not touched.
*/

int invert(x, p, n);

int invert(x, p, n)
{
    x = x ^ ~(~0 << n) << p;

    return x;
}