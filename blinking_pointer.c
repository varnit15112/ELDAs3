#define F_CPU 16000000L

#define DDRB *((volatile unsigned char *)0x24)
#define PORTB *((volatile unsigned char *)0x25)

int main()
{

	unsigned long long delay;
	int i;

	DDRB |= (1 << 5);
	
	  
	  while(1)
	  {

	  		PORTB ^= (1 << 5);		//DIGITALWRITE(13,HIGH)	

	  		/*In the above example, we 'XOR' the whole bit by 0001000  or somethink where only the 5th bit is 1
			and all the rest bits are zero.
			*/

	  		
	  		for(i=0;i<3;i++)
	  		for(delay=0; delay < 100000; delay++);

	  }

return(0);
}