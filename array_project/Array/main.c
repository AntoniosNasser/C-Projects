#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

int main()
{
    unsigned char x [8]={5,2,4,3,8,11,7,1};
    print_array(x,8);
    sort_array(x,8);
    print_array(x,8);
    print_statistics(x,8);


    return 0;
}
