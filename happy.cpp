/*
2022    2022
2022    2022
202220222022
202220222022
2022    2022
2022    2022



               2022
             20222022
           2022   2022
         2022        2022
       20222022202220222022
     202220222022202220222022
   2022                    2022
 2022                        2022



202220222022
202220222022
2022    2022
2022    2022
202220222022
202220222022
2022
2022
2022
2022



202220222022
202220222022
2022    2022
2022    2022
202220222022
202220222022
2022
2022
2022
2022



 2022        2022
   2022    2022
     20222022
       2022
       2022
       2022
       2022 
       */


#include <stdio.h>
int main()
{
	int i,j,k,spc;
    for(i=1;i<=6;i++)
    {
    	for(j=1;j<=3;j++)
    	{
		
    	if(j==1||j==3||i==3||i==4)
    	printf("2022");
    	
    	else 
    	printf("\t");
    }
    printf("\n");
    	}
    	  printf("\n\n\n");
    k=0;i=0;j=0;spc=0;
 spc=15;
   for(i=1;i<=8;i++)
   {
         for(k=spc;k>=1;k--)
            {
              printf(" ");
            }
   for(j=1;j<=i;j++)
   {
   if(j==1||j==i||i==5||i==6)
    printf("2022");
    else if(i==2)
    printf("  ");
    else if(i==3)
    printf("   ");
    else if(i==4)
      printf("    ");
    else if(i==7||i==8)
    printf("    ");
}
    printf("\n");
    spc-=2;
   }
   printf("\n\n\n");
   i=0;j=0;k=0;spc=0;
     for(i=1;i<=10;i++)
   {
         for(j=1;j<=3;j++)
   {
     if(i==1||j==1||i==5||i==6||((i==3||i==4||i==2)&&j==3)||(i==2&&j==2))
     printf("2022");
     else
     printf("\t");
   }
   printf("\n");

}
 printf("\n\n\n");
   i=0;j=0;k=0;spc=0;
     for(i=1;i<=10;i++)
   {
         for(j=1;j<=3;j++)
   {
     if(i==1||j==1||i==5||i==6||((i==3||i==4||i==2)&&j==3)||(i==2&&j==2))
     printf("2022");
     else
     printf("\t");
   }
   printf("\n");
}
printf("\n\n\n");
   i=0;j=0;k=0;spc=0;
   spc=1;
   for(i=4;i>=1;i--)
   {
         for(k=spc;k>=1;k--)
            {
              printf(" ");
            }
   for(j=1;j<=i;j++)
   {
   if(j==i||j==1)
    printf("2022");
    else
    printf("    ");
}
 printf("\n");
    spc+=2;
    }
    i=0;j=0;k=0;
    for(i=1;i<=2;i++)
   {
    for(j=1;j<=i;j++)
   {
   
    printf("       2022\n");
    
    }
}
   
}
