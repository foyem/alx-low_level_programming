#!/bin/bash
# gcc -fPIC -c *.c
# gcc -shared -Wl,-soname,liball.so -o liball.so *.o
gcc -fPIC -c *.c
gcc -shared -o liball.so *.o
