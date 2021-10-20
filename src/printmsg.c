#include "printmsg.h"

#include "stm32f4xx_hal.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

extern UART_HandleTypeDef huart2;

void printMsg(char *format, ...)
{
    char sz[100];
    va_list args;
    va_start(args, format);
    vsprintf(sz, format, args);
    HAL_UART_Transmit(&huart2, (uint8_t *)sz, strlen(sz), HAL_MAX_DELAY);
    va_end(args);
}
