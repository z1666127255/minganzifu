#include <stdio.h>

char arr[1024];
int index = 0;
int isMingan(char x){

    int count = 0;

    for(int i=0;i<index;i++){
        if(x == arr[i]){
            count++;
        }
    }

    if(count == 0){
        return 0;
    }else{
        return 1;
    }

}

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
            printf("shanchuzuihouyige\n");
            index--;

            printf("shanchuchenggong\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code == 3){
            printf("minganzifuwei:\n");

            for (int i = 0; i < index; i++)
            {
                printf("di%dgeminganzifu:%c\n", i + 1, arr[i]);
            }

            printf("shanchuchenggong\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if(code == 4){
            printf("qingshuruyiduanwenzi\n");
            char neirong[1024];
            scanf("%s",neirong);

            for(int i = 0;1;i++){
                if(neirong[i] == '\0'){
                    break;
                }

                if(isMingan(arr[i]) == 1){
                    neirong[i] = '*';
                }

                printf("%c",neirong[i]);


            }

            printf("\n");

            printf("tihuanwancheng\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if(code == 5){
            printf("tuichu\n");
            break;
        }
    }

    return 0;

}