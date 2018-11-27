#include "hal_servomotor.h"
#include "mcal_pwm.h"
#include "general_types.h"

void vSetServomotor(T_F16 u8angle)
{
	
	T_F16 DutyCycle;

	if(u8angle < 60)
		{
			u8angle=60;
		}
	if(u8angle > 120)
		{
			u8angle=120;
		}
		
	DutyCycle = ((u8angle-10)*7)/160+4;
	
	PWM1_vSetDuty(DutyCycle,1);
}
