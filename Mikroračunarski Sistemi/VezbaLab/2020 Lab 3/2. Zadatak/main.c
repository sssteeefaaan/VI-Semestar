#incluce <xc.h>
#incluce <htc.h>

__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_ON & CP_OFF);

#define _XTAL_FREQ   20000000

void main()
{
	PORTA = 0;
	PORTB = 0;
	TRISA = 0;
	TRISB = 0x01;
	
	short brojac = 1;
	char zabrana = 0;
	
	while(1)
	{
		if(PORTBbits.RB0 == 1)
		{
			if(zabrana == 0)
			{
				zabrana = 1;
				if(brojac > 4)
					brojac = 1;
				PORTA - brojac;
				brojac += brojac;
			}
		}
		else zabrana = 0;
	}
}