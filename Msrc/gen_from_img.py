#!/usr/bin/python3
import numpy as np 

sleep_dur = 10000
sleep_func_name = 'HAL_Delay'
led_func_name = 'LEDSetState'
led_count = 10


im = np.loadtxt('imgs/cat.txt')

print('#include "main.h"')
print('')
print('extern void ' + led_func_name + '(int, int);')
print('')
print('void print_img() {')
for line in im:
    for i in range(min(led_count, len(line))):
        if line[i] == 0.0:
            print('\t' + led_func_name + '(' + str(i) + ', 1);')
        else:
            print('\t' + led_func_name + '(' + str(i) + ', 0);')
    print('\t' + sleep_func_name + '(' + str(sleep_dur) + ');')
print('}')
