#include<stdio.h>
#include<ctype.h>
int main()
{
	char sent[100],ch;
	int a,e,i,o,u,cons=0,j;
	    a=e=i=o=u=0,j=0;
	    printf("Enter a sentence \n");
	    gets(sent);
	    for(j=0;sent[j]!='\0';j++)
	    {
	    	ch=tolower(sent[j]);
	    	switch(ch)
	    	{
	    		case'a': a++;
				break;
				case'e': e++;
				break;
				case'i': i++;
				break;
				case'o': o++;
				break;
				case'u': u++;
				break;
				case' ':  
				break;
				default: cons++;
			}
		}
		printf("The frequency of a is %d \n",a);
		printf("The frequency of e is %d \n",e);
	    printf("The frequency of i is %d \n",i);
	    printf("The frequency of o is %d \n",o);
	    printf("The frequency of u is %d \n",u);
	    printf("The frequency of consonent is %d \n",cons);
}
