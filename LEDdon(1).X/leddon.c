#include<htc.h>

void delay() {
    unsigned int a;
    for (a = 0; a < 20000; a++);
}

void main() {
    TRISB = 0;
    while (1) {
        PORTB = 0xff;
        delay();
        PORTB = 0xfe; 
        delay();
        PORTB = 0xfd; 
        delay();
        PORTB = 0xfb;
        delay();
        PORTB = 0xf7;
        delay();
        PORTB = 0xef;
        delay();
        PORTB = 0xdf;
        delay();
        PORTB = 0xbf;
        delay();
        PORTB = 0x7f;
        delay();
        PORTB = 0x00;
    }
}