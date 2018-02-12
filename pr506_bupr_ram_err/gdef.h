#ifndef _GDEF_H
#define _GDEF_H

#include "MDR32Fx.h"


#define CPU_PLL_MULT 10 // PLL_CLK 80 MHz for 8 MHz ext oscillator
#define EEPROM_DEL 4
#define SYS_TICKS 80000 // 1ms for 80 MHz
//#define SYS_TICKS 8000000 // 100ms

#define RST_CLK_PLL_CONTROL_PLL_CPU_MUL_OFFS 8
#define RST_CLK_CPU_CLOCK_HCLK_SEL_OFFS 8
#define RST_CLK_CPU_CLOCK_CPU_C2_SEL_OFFS 2
#define EEPROM_CMD_Delay_OFFS 3

#define NE 12
#define MAXENC (2<<(NE-1))

struct pi_reg_state{
	int32_t ki;
	int32_t kp;
	int32_t a;
	int32_t y;	
};

#define KI_DQCUR 100
#define KP_DQCUR 100
#define KI_SPD 0
#define KP_SPD 4000
#define KI_POS 0
#define KP_POS 6000

#endif
