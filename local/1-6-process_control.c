#include "apue.h"

int
main(void)
{
    /* Print PID of existing process */
    printf("PID of process %ld\n", (long)getpid());
    
    pid_t   currentpid, childpid, parentpid;
    
    printf("%% "); /* Print prompt sign after escaping*/
    
    if ((currentpid = fork()) < 0)
    {
        err_sys("For failed with negative return value");
    }
    else if (currentpid == 0){
        /* This is child code */
        
        /* Child needs to execute command process */
        excelp("ls", "ls", (char *) 0);
    }
    else{
        /* This is parent code */
        childpid = currentpid;
        
        printf("%% "); /* Print prompt sign after escaping*/
    }
    exit(0)
}