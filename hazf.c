#include<stdio.h>
#include<math.h>
void hazf(int n, int counter, int num){
    int c,d=0,j=0;
    int tmp = num;
  //  printf("n: %d counter: %d num: %d", n, counter, num);
        while (tmp > 0)
        {
            c = tmp % 2;
            d += c * (pow(10 , j));
            tmp /= 2;
            j++;
        }

    //printf(" d: %d\n", d);
        if(d <= n){
            hazf(n, counter + 1, num + 1);
        }
        else{
            printf("%d", counter);
            //return 0;
        }

    }

int main(){
    int n, counter=0,num=1;
    scanf("%d", &n);
    hazf(n, counter, num);
}
