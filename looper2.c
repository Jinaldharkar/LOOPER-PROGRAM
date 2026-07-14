// Online C compiler to run C program online
#include <stdio.h>

int main()
 {
    int no, count =0;
    printf("ENTER NO:");
    scanf("%d",&no);
    
    if(no == 0)
    {
        count = 1;
    }
    
    else
    {
       while (no != 0)
        {
            no = no /10;
            count++;
        }
    }
    printf(" NUMBER OF DIGITS : %d",count);
    return 0;
}
