#include <xc.h>
#pragma config FOSC=HS,WDTEN=OFF,XINST=OFF

void main(){
    TRISBbits.TRISB0 = 1; // Un bouton est un input
    TRISAbits.TRISA0 = 0; // Une led est un output

    for(;;){ // La boucle infinie
        LATAbits.LATA0 = PORTBbits.PORTB0;
        // LATAbits.LAT0 = ~ PORTBbits.PORTB0;
    }
}