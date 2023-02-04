/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/
#include <stdio.h>

// harf piramidi oluşturur

int main() 

{ 

  char harf;
  int i,j;
  
  printf("lutfen buyuk harf girin: ");
  scanf("%c",&harf); // W: 87
  
  for(i = harf - 65 ; i < 26 ; i++)       
  {
    for(j = harf - 65 ; j <= i ; j++)
    {
      printf("%c ",(char)(j + 65));
    }
    for(j = i - 1 ; j >= harf - 65 ; j--)
    {
      printf("%c ",(char)(j + 65));
    }
    printf("\n");
  } 
  
/*char harf;
  int i,j;
  printf("lutfen kucuk harf girin: ");
  scanf("%c",&harf); // w: 119
  
  for(i = harf - 97 ; i < 26 ; i++)     
  {
    for(j = harf - 97 ; j <= i ; j++)
    {
     printf("%c ",(char)(j + 97));
    }
    for(j = i - 1 ; j >= harf - 97 ; j--)
    {
     printf("%c ",(char)(j + 97)); 
    }
     printf("\n");
  }
*/  

  return 0;
}