#include <stdio.h>
#include <stdlib.h>

int main()
{    
    int b=1, a;
    
    
    char son [10]={'1', '2', '3', '4', '5', '6', '7', '8', '9'};
      
    do
    {
        printf("Tic Tac Toe \n\n");
        printf("1-o'yinchi X\n2-o'yinchi O\n\n");
        printf("%c | %c | %c\n__|___|___\n%c | %c | %c\n__|___|___\n%c | %c | %c\n  |   |\n\n", son[0], son[1], son[2], son[3], son[4], son[5], son[6], son[7], son[8]);
        
    
        if (b%2==0)
        {
            printf("2-o'yinchi sonni kiriting:");
            scanf("%d", &a);
            switch (a)
            {
            case 1:
                son[0]='O';
                break;
            case 2:
                son[1]='O';
                break;
            case 3:
                son[2]='O';
                break;
            case 4:
                son[3]='O';
                break;
            case 5:
                son[4]='O';
                break;
            case 6:
                son[5]='O';
                break;
            case 7:
                son[6]='O';
                break;
            case 8:
                son[7]='O';
                break;
            case 9:
                son[8]='O';
                break;
            default:
                printf("10 dan kichkina son kiriting");
                break;
               if (son[0]=='O' && son[1]=='O' && son[2]=='O' || son[0]=='O' && son[4]=='O' && son[8]=='O' || son[1]=='O' && son[4]=='O' && son[7]=='O' || son[0]=='O' && son[4]=='O' && son[8]=='O' || son[3]=='O' && son[4]=='O' && son[6]=='O' || son[3]=='O' && son[4]=='O' && son[5]=='O' || son[6]=='O' && son[7]=='O' && son[8]=='O' )
                {
                    return 0;
                } 
            }
        }
       
        if (b%2!=0)
        {
            printf("1-o'yinchi sonni kiriting :");
            scanf("%d", &a);
            switch (a)
            {
            case 1:
                son[0]='X';
                break;
            case 2:
                son[1]='X';
                break;
            case 3:
                son[2]='X';
                break;
            case 4:
                son[3]='X';
                break;
            case 5:
                son[4]='X';
                break;
            case 6:
                son[5]='X';
                break;
            case 7:
                son[6]='X';
                break;
            case 8:
                son[7]='X';
                break;
            case 9:
                son[8]='X';
                break;
            default:
                printf("10 dan kichkina son kiriting\n");
                break;
            }
        }
        
        b++;
        system("clear");
        
    
    }while(a>0);
         
    return 0;
}