#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// prototype
void intro();

int main()
 {
    intro();
    system("\npause");
    system("cls");
  int a,b,c,d,i=1,r,s,t,q;
  // Random number using Time
  srand(time(0));
  // Range
  while (i<2)
    {

  // First player
  printf("\t-----First players turn ----\n\n");
  printf("!!*When the Number is 6 Then you are the Winner*!!\n");

  printf("\nEnter 1 to proceed :\t");
  scanf("%d",&a);
  if(a==1)
    {r=rand()%6+1;
    printf("\n The no is %d",r);}
  else
    break;

  // Second player
   printf("\n\n---Second players turn ------");

  printf("\nEnter 1 to proceed :\t");
  scanf("%d",&b);
  if(b==1)
    {s=rand()%6+1;
    printf("\n The no is %d",s);}
  else
    break;

  // Third player
   printf("\n\n------Third players turn -----");

  printf("\nEnter 1 to proceed :\t");
  scanf("%d",&c);
  if(c==1)
    {t=rand()%6+1;
    printf("\n The no is %d",t);}
  else
    break;

  // Fourth player
   printf("\n\n----Fourth players turn ----");

  printf("\nEnter 1 to proceed :\t");
  scanf("%d",&d);
  if(d==1)
    {q=rand()%6+1;
    printf("\n The no is %d\n\n",q);}
  else
    break;

    i++;}

    // Decision for the Winner
   if(r==6)
    printf("\n**-The  First  is the winner-** \n");
   else
    printf("\n!!-The  First  is the Loser -!!\n");
  if(s==6)
    printf("\n**-The  Second is the winner-** \n");
   else
    printf("\n!!-The  Second is the Loser -!!\n");
  if(t==6)
    printf("\n**-The  Third  is the winner-** \n");
   else
    printf("\n!!-The  Third  is the Loser -!!\n");
  if(q==6)
    printf("\n**-The  Fourth is the winner-** \n");
   else
    printf("\n!!-The  Fourth is the Loser -!!\n");


}
void intro()
{
    printf("\n\n\t     Made By : Saffi Ullah\n\n\n\t      ****Guess Game****\n\t\n\n\n");

}

