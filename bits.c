#include <stdio.h>


short get_new_number(int a, int b);

int main(){
    unsigned char a = 0x12;   // 0001 0010
    unsigned char b = 0x77;   // 0111 0111
    short new_number = 0;

    new_number = get_new_number(a,b);

    return 0;
}

short get_new_number(int a, int b) {
    unsigned char new_number = 0;
    int bit_to_add = 0;
    int i;
    for (i=7; i>=0; i--){
        bit_to_add = a >> i & 0x1;
        new_number <<= 1;
        new_number |= bit_to_add;

        bit_to_add = b >> i & 0x1;
        new_number <<= 1;
        new_number |= bit_to_add;
    }
    return new_number;
}