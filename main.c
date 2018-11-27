#include "general.h"
#include "hal_motor.h"
#include "hal_servomotor.h"
#define FWD 0
#define BWD 1

int main()
{
	 int i;
	/*vMotorInit();
	vSetMotorDir(FWD);
	vSetMotorSpeed(50);
	*/    
	PWM1_vInit();
	for(i=60 ; i <= 120 ; i++)
	{
		__delay_ms(100);	
		vSetServomotor(i);
	}    
    while(1)
    {
        
    }
    return 0;
}