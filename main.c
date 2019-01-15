#include <stdio.h>

char arr[1024];
int index = 0;

int main(){

    printf("minganzifuguanlixitong\n");

    while(1){
        printf("1----tianjia\n");
        printf("2----shanchu\n");
        printf("3----chakansuoyou\n");
        printf("4----tihuan\n");
        printf("5----tuichu\n");

        printf("xuanzegongneng\n");

        int code;
        scanf("%d",&code);

        if(code == 1){
                       printf("tianjiaminganzifu\n");
            char m;
            scanf("%c",&m);
            scanf("%c",&m);

            arr[index]=m;
            index++;

            printf("tianjiachenggong\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
 
        }
        if(code == 2){
            
        }
        if(code == 3){
            
        }
        if(code == 4){
            
        }
        if(code == 5){
            
        }
    }

    return 0;

}