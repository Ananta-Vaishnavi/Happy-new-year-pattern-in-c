/*
20222022     2022
2022 2022    2022
2022  2022   2022
2022   2022  2022
2022    2022 2022
2022     20222022



202220222022
202220222022
2022
2022
202220222022
202220222022
2022
2022
202220222022
202220222022



 2022      20222022      2022
  2022    2022  2022    2022
   2022  2022    2022  2022
    20222022      20222022
    */
#include <stdio.h>
int main()
{
   int i,j,k,spc=1,l,spc1=5,spc2,j1,k1,spc21=1;
   for(i=1;i<=6;i++)
   {
         for(j=1;j<=17;j++)
   {
     if(j==1||(j==2&&i==1))
     printf("2022");
     
    }
    if(i>=2)
    {
    	for(k=1;k<=spc;k++)
    	{
    		printf(" ");
		}
		printf("2022");
		spc++;
	}
	k=0;
		for(l=1;l<=spc1;l++)
		{
			printf(" ");
		}
		spc1--;
		printf("2022");
		
	
     printf("\n");

  }
  printf("\n\n\n");
   i=0;j=0;k=0;spc=0;
  for(i=1;i<=10;i++)
   {
         for(j=1;j<=3;j++)
   {
     if(i==1||j==1||i==5||i==6||(i==2||(i==9||i==10)&&(j==2||j==3)))
     printf("2022");
     else
     printf("\t");
   }
   printf("\n");

}
printf("\n\n\n");
   i=0;j=0;k=0;spc2=1;spc21=1; 
   for(i=1;i<=4;i++) 
   { 
   for(j=1;j<=i;j++)
    { 
	printf(" "); 
	} 
	printf("2022");
	 for(k=12;k>=spc2;k-=2) 
	 {
	  printf(" "); 
	  }
	   spc2+=4; 
	   printf("2022");
	    for(j1=1;j1<=i-1;j1++)
		 { 
		 printf("  "); 
		 } 
		 printf("2022"); 
		 for(k1=12;k1>=spc21;k1-=2) 
		 { 
		 printf(" "); 
		 } 
		 spc21+=4; 
		 printf("2022"); 
		 printf("\n"); 
		 } 
}
