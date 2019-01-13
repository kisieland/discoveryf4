#include "main.h"

// TODO set valid configuration
void LEDSetState(int pin, int state) {
    switch (pin) {
    case 0:
        HAL_GPIO_WritePin(GPIOA, GreenLED_Pin, state);
        break;
    case 1:
        HAL_GPIO_WritePin(GPIOA, GreenLED_Pin, state);
        break;
    case 2:
        HAL_GPIO_WritePin(GPIOA, GreenLED_Pin, state);
        break;
    case 3:
        HAL_GPIO_WritePin(GPIOA, GreenLED_Pin, state);
        break;
    case 4:
        HAL_GPIO_WritePin(GPIOA, GreenLED_Pin, state);
        break;
    case 5:
        HAL_GPIO_WritePin(GPIOA, GreenLED_Pin, state);
        break;
    case 6:
        HAL_GPIO_WritePin(GPIOA, GreenLED_Pin, state);
        break;
    case 7:
        HAL_GPIO_WritePin(GPIOA, GreenLED_Pin, state);
        break;
    case 8:
        HAL_GPIO_WritePin(GPIOA, GreenLED_Pin, state);
        break;
    case 9:
        HAL_GPIO_WritePin(GPIOA, GreenLED_Pin, state);
        break;
    }
}