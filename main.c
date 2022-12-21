#include <stdio.h>
#include <stdlib.h>
void main(void)
{
    char message[27];
    char ch;
    int key;
    int i;
    printf("ENTER THE MESSAGE::\n");
    scanf("%s",&message);
    printf("ENTER THE KEY\n");
    scanf("%d",&key);
    printf("THE ENCRYPTED MESSAGE\n");
    for (i=0;message[i]!=0;i++)
    {
        ch=message[i];
        if(ch>='a'||ch<='z')
        {
            ch=ch+key;
            printf("%c",ch);
        }
    }
}
