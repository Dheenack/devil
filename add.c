# include<stdio.h>
void main()
{
    int a,b,c,d,option;
    scanf("%d" "%d" "%d" "%d",&a,&b,&c,&d);
    printf("to add press 1");
    printf("to sub press 2");
    printf("to mul press 3");
    printf("to div press 4"); 
    printf("enter the option");
    scanf("%d\n",option);
    if(option==1){
    	printf("add",a+b+c+d);
	}else if(option==2){
		printf("sub",a-b-c-d);
	}else if (option==3){
		printf("mul",a*b*c*d);
	}else if(option==4){
		printf("div",a/b/c/d);
	}
	
}
