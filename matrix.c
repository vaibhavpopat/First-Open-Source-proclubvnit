#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ADDITION 1
#define SUBTRACTION 2
#define MULTIPLICATION 3
#define TRANSPOSE 4
#define TRACE 5
#define DETERMINANT 6
#define POWER 7
#define ROWS 100
#define COLS 100


void ReadMatrix(int Matrix[][COLS])
{

}
int main(){
    int option,num;
    printf("Enter the number of your choices\n");
    scanf("%d",&num);
    while(num--)
    {

        printf("Enter your choice\n");
        scanf("%d",&option);
        switch(option)
        {
            case ADDITION:
                            AddMatrices();
                            break;
            case SUBTRACTION:
                            SubMatrices();
                            break;
            case MULTIPLICATION:
                            MultMatrices();
                            break;
            case TRANSPOSE:
                            Transpose();
                            break;
            case DETERMINANT:
                            Determinant();
                            break;
            case POWER:
                            Power();
                            break;
        }


    }




    return 0;
}
