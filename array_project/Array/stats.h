#ifndef __ARAAY_FUNCTIONS_H_
#define __ARAAY_FUNCTIONS_H_
#define SWAP(a, b) do { a = b + a; b = a - b; a = a - b; } while (0)

void print_array(unsigned char *p,unsigned int l);

void sort_array(unsigned char *p,unsigned int l);

double find_maximum(unsigned char *p,unsigned int l);

double find_minimum(unsigned char *p,unsigned int l);

double find_median(unsigned char *p,unsigned int l);

double find_mean(unsigned char *p,unsigned int l);

void print_statistics(unsigned char *p,unsigned int l);



#endif // __ARAAY_FUNCTIONS_H_
