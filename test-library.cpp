#include "mbed.h"
#define UPDATE_RATE_MS    1000
void testFunction()
{
    while (1) {
        thread_sleep_for(UPDATE_RATE_MS);
    }
}
