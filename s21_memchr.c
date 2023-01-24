#include "s21_string.h"

char *memcharr (const void *arr, int c, size_t n) {
    unsigned char *result = (unsigned char*) arr;
    unsigned char *symbol = NULL;
    while(n--) {
        if(*result != (unsigned char)c) {
            result++;
        }
        else {
            symbol = result;
            break;
        }
    }
    return symbol;
}

int main(void) {
    unsigned char src[15]= "1234567890";
    //memcharr(src, '4', 10);
    printf("%s", memcharr(src, '4', 10));
    return 0;
}
