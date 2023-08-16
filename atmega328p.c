// Online C compiler to run C program online
#include <stdio.h>

#include <stdio.h>

void convertUnsignedCharToHexString(unsigned char value, char* hexString)
{
    static const char digits[] = "0123456789abcdef";
    hexString[0] = digits[(value >> 4) & 0x0F];
    hexString[1] = digits[value & 0x0F];
    hexString[2] = '\0';
}

int main() {
    // Write C code here
    unsigned char a[10]; 
    convertUnsignedCharToHexString(0x1e, a);
    printf("%s", a);
    

    return 0;
}
