
 #include <stdio.h>

 int main(void)

{
   printf("what is your greeting?:");
   char greeting[20];
  
   fgets(greeting, 20 , stdin);   
  
   printf("%s to jinwoo.",greeting);

}


