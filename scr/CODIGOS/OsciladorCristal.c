#include <xc.h>
// ================= CONFIGURACIÓN =================

// Cristal externo 16 MHz modo High Speed
#pragma config FOSC = HSHP
#pragma config PRICLKEN = ON   // Oscilador primario activo
#pragma config PLLCFG = OFF    // Sin PLL
#pragma config WDTEN = OFF
#pragma config LVP = OFF
#pragma config PBADEN = OFF
#pragma config CP0 = OFF, CP1 = OFF, CP2 = OFF, CP3 = OFF
#pragma config BOREN = OFF
#pragma config FCMEN = OFF
#pragma config IESO = OFF

#define _XTAL_FREQ 16000000UL

// ================= FUNCIONES =================

void init_pins(void)
{
    ANSELA = 0;
    ANSELB = 0;
    ANSELC = 0;
    ANSELD = 0;
    ANSELE = 0;

    TRISCbits.TRISC0 = 0;
    LATCbits.LATC0 = 0;
}

void main(void)
{
    init_pins();

    while(1)
    {
        LATCbits.LATC0 = 1;
        __delay_ms(1);

        LATCbits.LATC0 = 0;
        __delay_ms(1);
    }
}

