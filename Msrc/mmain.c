#include "main.h"

extern void print_img();

int mmain() {
    while (1) {
        print_img();
        HAL_Delay(500);
    }

    return 0;
}