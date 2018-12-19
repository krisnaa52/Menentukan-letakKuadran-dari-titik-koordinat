#include <stdio.h>
#include <stdlib.h>
int k1(int x, int y);


void main()
{
    int x,y;
    printf("Program Menentukan Koordinat\n");
    printf("Masukan Koordinat X => ");
    scanf("%d",&x);
    printf("Masukan Koordinat Y => ");
    scanf("%d",&y);
    k1(x,y);
}
int k1(x,y)
{
    if(x>=0 && y>=0 );
    {printf("koordinat I");}
    if(x<0 && y>=0){printf("Kuadran II");}
    if(x<0 && y<0){printf("Kuadran III");}
    if(x>=0 && y<0){printf("Kuadran IV");}

}
