// http://i.imgur.com/nM4UDA6.png .. results
// http://i.imgur.com/47zkcBI.png . copying this file
// https://www.youtube.com/watch?list=PL2_aWCzGMAwLZp6LMUKI3cc7pgGsasm2_&v=h-HBipu_1P0 from this video

# include <stdio.h>

int main(void){
    int a;
    int *p;
    p = &a;
    a =5;
    
    
    
    //printf("%d",p); //204 syntax error, specifically if enabled compile error: http://i.imgur.com/KUib3ew.png
    printf("The memory address of a is: %p\n", (void*) &a); //204 
    printf("The memory address of a is: %p\n", (void*) &p); //64
    printf("%d\n",*p); //5 dereferencing
    
    *p = 8;
    printf("%d\n", a); //8
}
