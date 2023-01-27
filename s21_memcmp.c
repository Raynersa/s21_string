#include "s21_string.h"

int memcmp (const void *arr1, const void *arr2, size_t n);

int main() {
    unsigned char src[15]="Regex$";
    unsigned char dst[15]="Regex$";
    if (memcmp (src, dst, 10) == 0)
      puts ("Области памяти идентичные.");
   else
      puts ("Области памяти отличаются.");
   return 0;
}

int memcmp (const void *arr1, const void *arr2, size_t n) {
    int counter = 0; 
    const char *arr3 = (char*) arr1;
    const char *arr4 = (char*) arr2;
    for (size_t i = 0; i <= n; i++) {
        if (arr3[i] == arr4[i]) {
            counter = 0;
        } else {
            counter = 1;
            break;
        }
    }
    return counter;
}