 /*************************************************************************
    > File Name: main.c
    > Author: Shen Bo
    > mail: Bo.A.Shen@alcatel-sbell.com.cn
    > Created Time: Tue, Feb 27, 2018  2:40:24 PM
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#include "../inc/pow.h"


int main(int argc, char const *argv[])
{
    if (argc < 3)
    {
        printf("\nError arg count!\n");
        return 1;
    }

    double result = calc_pow(atof(argv[1]), atof(argv[2]));
    printf("pow result = %f\n", result);

    return 0;
}

