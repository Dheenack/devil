# include<stdio.h>
void main()
{
	int a,b,c,d,e,avg;
	printf("tamil:");
	scanf("%d",&a);
	printf("english:");
	scanf("%d",&b);
	printf("mathematics:");
	scanf("%d",&c);
	printf("science:");
	scanf("%d",&d);
	printf("social:");
	scanf("%d",&e);
	avg= total/5;
	total=a+b+c+d+e;
	if(avg>=80){
		printf("grade a");
	}
	else if(avg>=79&&avg<=60){
		printf("grade b");
	}
	else if (avg>=59&&avg<=40){
		printf("grade c");
	}
	else if(avg<=39){
		printf("grade d");
	}
	
	

