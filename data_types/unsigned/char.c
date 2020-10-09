#include <stdio.h>

int main(void) {
    unsigned char j = 127;
    j = j + 1000;
    printf("%u", j);
}