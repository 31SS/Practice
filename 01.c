#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define N 5
void sort(int data[N]);

int main(void) {
    int data[N] = {5,7,3,4,4},i;
    sort(data);
    for(i=0;i<N;i++){
        printf("%d ",data[i]);
    }
    puts("");
    return 0;
}

void sort(int data[N]){
    int i,j,tmp,x,y;

    for(i = 1;i < N;i++){
            x = data[i];
            for(j = i-1;j >= 0; j--)
            {
                y = data[j];
                if(x<y)
                    data[j+1] = y;
                else{
                    data[j+1] = x;
                    break;
                }
        }
        if(j==-1) data[0] = x;
    }
}