// CONFIGURATION
#pragma config FOSC = XT        // Oscillator Selection bits (XT oscillator)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = ON       // Power-up Timer Enable bit (PWRT enabled)
#pragma config BOREN = ON       // Brown-out Reset Enable bit (BOR enabled)
#pragma config LVP = OFF        // Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF        // Flash Program Memory Write Enable bits (Write protection off; all program memory may be written to by EECON control)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)



#include <xc.h>

#define _XTAL_FREQ 16000000

#define RED PORTDbits.RD0
#define YELLOW PORTDbits.RD1
#define GREEN PORTDbits.RD2

void main(void)
{
    TRISD = 0x00;
    PORTD = 0x00; 
    while (1)
    {
        RED = 1;
       __delay_ms(5000);
        RED = 0;
        GREEN = 1;
       __delay_ms(2000);
        GREEN = 0;
        YELLOW = 1;
        __delay_ms(5000);
        YELLOW = 0;
       
    }


}
