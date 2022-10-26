// testSleep2.c
// test for sleep(SC_Sleep) system call

#include "syscall.h"
main() {
    int i;
    for(i = 0; i < 10; i++) {
        Sleep(5000);
        PrintInt(5);
    }
    return 0;
}