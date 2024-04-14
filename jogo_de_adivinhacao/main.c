#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void) 
{
srand(time(NULL));
int numero = rand() % 50;
int numero2 = 0;
int aproxm = 0;
int aproxmi = 0;
int tentativas = 4;
printf("\n%s" , "Jogo de adivinhação! ");
  printf("\n%s" , "AUTORA: Letícia Silva");
printf("\n\n");
printf("\n%s" , "Tente adivinhar um número inteiro de 0 a 50");
printf("\n%s" , "você possui 5 tentativas");
  printf("\n");
  printf("\n%s" , "Boaa sorteee!!!");
printf("\n\n");
printf("%s" , "Digite um número: ");
scanf(" %d" , &numero2);
getchar();

aproxm = numero + 1;
aproxmi = numero - 1;
if ( numero2 != numero )
{
  do{ 
 if( numero2 == aproxm || numero2 == aproxmi )
{
  printf("\n%s" , "Quase lá!!!");
  printf("\n\n [%d] %s" , tentativas , "Tente novamente: " );
  scanf(" %d" , &numero2);
  getchar();
}
  else 
  {
    printf("\n\n%s" , "Numero errado!!");
     printf("\n\n [%d] %s" , tentativas , "Tente novamente: " );
    scanf(" %d" , &numero2);
    getchar();
  }
  if(tentativas==3 && ( 0 <= numero && numero <= 10 ) )
  {
    printf("\n%s", "DICA: O número está entre 0 e 10");
  }
   if(tentativas==3 && ( 11 <= numero && numero <= 20 ) )
    {
      printf("\n%s", "DICA: O número está entre 11 e 20");
    }
  
   if(tentativas==3 && ( 21 <= numero && numero <= 30 ) )
    {
      printf("\n%s", "DICA: O número está entre 21 e 30");
    }
  
   if(tentativas==3 && ( 31 <= numero && numero <= 40 ) )
    {
      printf("\n%s", "DICA: O número está entre 31 e 40");
    }

   if(tentativas==3 && ( 41 <= numero && numero <= 50 ) )
    {
      printf("\n%s", "DICA: O número está entre 41 e 50");
    }
  if(tentativas==2 && ( 5 <= numero && numero <= 10 ) )
  {
    printf("\n%s", "DICA: O número está entre 5 e 10");
  }
 
  if(tentativas==2 && ( 15 <= numero && numero <= 20 ) )
    {
      printf("\n%s", "DICA: O número está entre 15 e 20"); }
  if(tentativas==2 && ( 25 <= numero && numero <= 30 ) )
    {
       printf("\n%s", "DICA: O número está entre 25 e 30");
        }
  if(tentativas==4 && ( 35 <= numero && numero <= 40 ) )
        {
          printf("\n%s", "DICA: O número está entre 35 e 40");
        }    
  if(tentativas==2 && ( 45 <= numero && numero <= 50 ) )
        {
          printf("\n%s", "DICA: O número está entre 45 e 50");
        }
       
    tentativas--;
}
  while(numero2 != numero && tentativas != 0); 
}

  
  if(numero2 == numero)
  {
    printf("\n%s" , "Você acertooou!");
  if(tentativas == 4)
  {
    printf("\n%s" , "Sua pontuação foi: 100 pontos");
  }
    if(tentativas == 3)
    {
      printf("\n%s" , "Sua pontuação foi: 80 pontos");
    }
    if(tentativas == 2)
    {
      printf("\n%s" , "Sua pontuação foi: 50 pontos");
    }
    if(tentativas == 1)
    {
      printf("\n%s" , "Sua pontuação foi: 20 pontos");
    }
  }
  else
  {
    printf( "\n%s" , "Tentativas esgotadas!!");
    printf("\n\n%s%d", "O número era: " , numero);
  }

printf("\n\n%s" , "Aperte ENTER para finalizar");
getchar();
  return 0;
}