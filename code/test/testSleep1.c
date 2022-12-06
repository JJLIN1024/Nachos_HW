// testSleep1.c
// test for sleep(SC_Sleep) system call
// Sleep interval is set to double that of testSleep2.c

#include "syscall.h"
main() {
    int i;
    for(i = 0; i < 10; i++) {
        Sleep(10000);
        PrintInt(10);
    }
    return 0;
}