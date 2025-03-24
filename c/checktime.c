#include <stdio.h>
#include <time.h>
#include "checktime.h"

int checktime()
{
    // Get the current time
    time_t currentTime;
    time(&currentTime);

    // Convert it to local time format
    struct tm *localTime = localtime(&currentTime);

    // Print the local time
    printf("Current local time: %02d:%02d:%02d\n",
           localTime->tm_hour, localTime->tm_min, localTime->tm_sec);

    return 0;
}
