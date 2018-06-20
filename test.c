
//


#include <reg52.h>

sbit LED=P2^1;

void delay(unsigned int a)

{
	unsigned int c;
	for(c=0;c<a;c++)
	;
}
	
void main()
{
		
	while(1)
	{
		LED=1;
		delay(200);
		LED=0;
		delay(200);//test
	}
}