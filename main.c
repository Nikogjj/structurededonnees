#include <stdio.h>

struct personnage{
  int pv;
  int endurance;
  char* nom;
};

int main()
{
    struct personnage mario;
    mario.endurance = 12;
    mario.pv = 5;
    printf("ENDurance:\t%d\n",mario.endurance);
    printf("PV:\t%d\n",mario.pv);
    mario.pv++;
    mario.pv++;
    mario.endurance--;
    printf("ENDurance:\t%d\n",mario.endurance);
    printf("PV:\t%d\n",mario.pv);
    
    printf("ENDurance:\t%d\n",mario.endurance);
    printf("PV:\t%d\n",mario.pv);
    printf("Calcul:\t%d\n",10+mario.pv/(mario.endurance*100*mario.pv));
    return 0;
}