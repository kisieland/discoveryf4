#include "main.h"

void LEDSetState(int pin, int state) {
    switch (pin) {
    case 0:
        HAL_GPIO_WritePin(LED00_GPIO_Port, LED00_Pin, state);
        break;
    case 1:
        HAL_GPIO_WritePin(LED01_GPIO_Port, LED01_Pin, state);
        break;
    case 2:
        HAL_GPIO_WritePin(LED02_GPIO_Port, LED02_Pin, state);
        break;
    case 3:
        HAL_GPIO_WritePin(LED03_GPIO_Port, LED03_Pin, state);
        break;
    case 4:
        HAL_GPIO_WritePin(LED04_GPIO_Port, LED04_Pin, state);
        break;
    case 5:
        HAL_GPIO_WritePin(LED05_GPIO_Port, LED05_Pin, state);
        break;
    case 6:
        HAL_GPIO_WritePin(LED06_GPIO_Port, LED06_Pin, state);
        break;
    case 7:
        HAL_GPIO_WritePin(LED07_GPIO_Port, LED07_Pin, state);
        break;
    case 8:
        HAL_GPIO_WritePin(LED08_GPIO_Port, LED08_Pin, state);
        break;
    case 9:
        HAL_GPIO_WritePin(LED09_GPIO_Port, LED09_Pin, state);
        break;
    }
}