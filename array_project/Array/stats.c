#include "stats.h"

void print_array(unsigned char *p,unsigned int l){
    int i;
    for(i=0;i<l;i++) {
        printf("%d    ",*p++);

    }
    printf("\n");
}

void sort_array(unsigned char *p,unsigned int l) {
    //sorting using selection sort
    int j;
    int i;

    // One by one move boundary of unsorted subarray
    for (i =0; i < l-1; i++) {

        // Find the minimum element in unsorted array

        for (j = i+1; j < l; j++)
            if (*(p + j) > *(p+i))
                SWAP(*(p+j), *(p+i));

        // Swap the found minimum element
        // with the first element




    }

}
double find_maximum(unsigned char *p,unsigned int l) {
    double maximum = *p ;

    for (int i = 0;i<l;i++) {
        if (*(p+i)>maximum)
            maximum = *(p+i);

    }

    return maximum ;

}
double find_minimum(unsigned char *p,unsigned int l) {
    double minimum = *p ;

    for (int i = 0;i<l;i++) {
        if (*(p+i)<minimum)
            minimum = *(p+i);

    }

    return minimum ;

}
double find_median(unsigned char *p,unsigned int l) {
    unsigned char aux_arr[l] ;
    for(int i=0;i<l;i++)
        aux_arr[i]=*(p+i);
    sort_array(aux_arr,l);

    if (l%2 == 0)
        return ((aux_arr[l/2]+aux_arr[l/2-1])/2.0);
    else
        return aux_arr[l/2];


}
double find_mean(unsigned char *p,unsigned int l) {
    int sum =0;
    for (int i=0;i<l;i++)
        sum+= *(p+i);
    return sum/(float)l;

}
void print_statistics(unsigned char *p,unsigned int l) {
    printf("Maximum value : %G\n",find_maximum(p,l));
    printf("Minimum value : %G\n",find_minimum(p,l));
    printf("Median value : %G\n",find_median(p,l));
    printf("Mean value : %G\n",find_mean(p,l));
}
