#include <stdio.h>
#include <time.h>

#include "../util.h"
#include "datetime.h"

void
datetimeu(char *str, int sigval)
{
        time_t t = time(NULL);
        struct tm tm = *localtime(&t);

        strftime(str, CMDLENGTH, "%Y-%m-%d %H:%M", &tm);
}
