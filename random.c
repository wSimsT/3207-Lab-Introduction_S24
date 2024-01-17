#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

int randchar(void){
    int r = rand();
    return (r%26)+65;
}