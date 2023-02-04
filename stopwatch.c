#include<windows.h>
#include<stdio.h>
int main(){
    int sec=0;
    int min=0;
    int hor=0;
    int d=1000;

    if(hor>12 || min>60 || sec>60){
        printf("Wrong Input");
        exit(0);
    }

    while(1){
        sec++;
        if(sec>59){
            min++;
            sec=0;
        }
        if(min>59){
            hor++;
            min=0;
            sec=0;
        }
        if(hor>12){
            hor=1;
        }
        printf("StopWatch : \n");
        printf("%02d:%02d:%02d",hor,min,sec);
        Sleep(d);
        system("cls");
        int stop;
        scanf("%d",&stop);
        if(stop==0){
            break;
        }
        else{
            continue;
        }

    }
    return 0;

}