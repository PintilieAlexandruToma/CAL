#include "general.h"
#include "hal_motor.h"
#define FWD 0
#define BWD 0

int main()
{
	vMotorInit();
	vSetMotorDir(FWD);
	vSetMotorSpeed(50);
    
    while(1)
    {
        
    }
    return 0;
}