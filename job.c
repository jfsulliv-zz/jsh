#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <termios.h>
#include <unistd.h>
#include "job.h"

job *new_job()
{
    job *j = malloc(sizeof(job));
    j->next = NULL;
    j->command = NULL;
    j->first_process = NULL;
    j->pgid = 0;
    j->notified = 0;
    j->stdin = STDIN_FILENO;
    j->stdout = STDOUT_FILENO;
    j->stderr = STDERR_FILENO;
    return j;
}

process *new_process()
{
    process *p = malloc(sizeof(process));
    p->next = NULL;
    pid_t pid = 0;
    char completed = 0;
    char stopped = 0;
    int status = 0;
    return p;
}
