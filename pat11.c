 #include<stdio.h>
 void main()
 {
	 int i,j;
	 for(i=1;i<=5;i++)
	 {
		 for(j=1;j<=5;j++)
		 {
			 if(i==j||(i+j)==(5+1))
				 printf("X");
			 else
				 printf("O");
		 }
		 printf("\n");
	 }
 }
						
