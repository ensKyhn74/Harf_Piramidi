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

  return 0;
}
