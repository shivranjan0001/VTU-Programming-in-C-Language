#include<stdio.h>

#include<stdlib.h>

int main()

{

    int x=0,num;

    scanf("%d",&num);

    if(num==0)

    {

        printf("NO");

        exit(0);

    }

    while(x<=num)

    {

        if(x==num)

            {

              printf("YES");

              break;

            }

        else x=x+1;

        if(x==num)

          {

            printf("YES");

            break;

          }

        else x=x+2;

        if(x==num)

             {

               printf("YES");

               break;

             }

        else x=x+3;


    }


    if(x>num)

        printf("NO");

  return 0;

}
