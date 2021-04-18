#include<stdio.h>
//#include <stdlib.h>
//#include <unistd.h>
#include <sys/time.h>


#include "buffer.h"

#ifdef __unix__
# include <unistd.h>
#elif defined _WIN32
# include <windows.h>
#define sleep(x) Sleep(1000 * (x))
#endif


 void* memcpy(void* dest, const void* src, size_t count);


int main()
{
    struct timeval start, end;
    double time_taken;

    // start timer.
    gettimeofday(&start, NULL);

    memcpy(dst_buffer,data,256);
    sleep(3);

    // stop timer.
    gettimeofday(&end, NULL);

    time_taken = (end.tv_sec - start.tv_sec) * 1e6;
    time_taken = (time_taken + (end.tv_usec -
                              start.tv_usec)) * 1e-6;


    printf("\nTotal Time taken is: %lf",time_taken);
    return 0;
}


 void* memcpy(void* dest, const void* src, size_t count) {
        int* dst8 = (int*)dest;
        int* src8 = (int*)src;

        while (count--) {
            *dst8++ = *src8++;
        }
        return dest;
    }
