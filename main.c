//85-100  = A
//70-84   = B
//55 - 69 = C
//30 - 54 = D
//0 - 29  = E
//>100    = X
#include <stdio.h>
#include<stdlib.h>

int main(void) 
{
  int a,b;
  printf("Masukan nilai : ");
  scanf("%d",&a);
  
  if (a<30)
  {
    printf("Nilai anda adalah E, Anda tidak lulus\n");
  }
    
  else if(a<55)
  {
    printf("Nilai anda adalah D, Anda tidak lulus\n");
  }

  else if(a<70)
  {
    printf("Nilai anda adalah C, Anda lulus\n");
  }

  else if(a<85)
  {
    printf("Nilai anda adalah B, Anda lulus\n");
  }

  else if(a<100)
  {
    printf("Nilai anda adalah A, Anda lulus\n");
  }

  else if(a>100)
    {
     printf("X\n");
    }
  
    printf("\n");
  
  return 0;
}