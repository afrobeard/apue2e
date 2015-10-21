#include "apue.h"
#define BUFFSIZE 4096

/*
    - read, write, STDIN_FILENO, STDOUT_FILENO are all available in unistd.h
*/

int
main(void)
{
    int n;
    char buf[BUFFSIZE];
    
    int keep_reading = 1;
    while (keep_reading){
        if ((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0){
            /*  File Read Success */
            /* Write to output */
            if (write(STDOUT_FILENO, buf, n) != n){
                err_sys("write error");
            }
        }
        else{
            keep_reading = 0;
        }
    }
    exit(0);
}
