#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define STR0 "\"521\""
#define STR1 "My Dear："
#define STR2 "Never forget how much you are loved" 
int main(void)
{
    int i,j;
    double x,y;
    int p0,p1,p2;
    p0=p1=p2=0;
    for(i=0;i<50;i+=2){
        for(j=0;j<50;j++){
            double s;
            x=j-25;
            y=i-25;
            s=(pow((x>0?x/22:x/-22),2)+
               pow(pow((x>0?x/22:x/-22),
                       (2.0/3))-(-y)/15,2))-1;
            if(s<0.06){
                if(s>-0.06)
                    putchar('*');
                else if(y==-5 && x>=-2 && p0 < sizeof(STR0)-1)
                    putchar(*(STR0+p0++));
                else if(y==-13 && x>=-18 && p1 <  sizeof(STR1)-1)
                    putchar(*(STR1+p1++));
                else if(y==-11 && x>=-16 && p2 < sizeof(STR2)-1)
                    putchar(*(STR2+p2++));
                else
                    putchar('.');
            }
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}

