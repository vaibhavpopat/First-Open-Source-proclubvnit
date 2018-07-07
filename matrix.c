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

void PrintMatrix(int Matrix[][COLS])
{
    /*Print the given Matrix here to stdout*/
}
void ReadMatrix(int Matrix[][COLS])
{
    //Scan the matrix in this function from stdin(by default it is keyboard)
}
int main(){
    //Driver Code-Do not make changes here unless too necessary
    int option,num;
    printf("Enter the number of choices\n");
    scanf("%d",&num);
    while(num--)
    {

        printf("Enter your choice\n");
        scanf("%d",&option);//Assume a valid choice
        switch(option)
        {
             /*Read the required number of matrices in each function using ReadMatrix() only for each operation*/
             /*Print the output using PrintMatrix() function only*/
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
                            Power();//ask not only for matrix but also the power to which it should be raised
                            break;
        }


    }

    return 0;//Why do we do this?Any ideas? Do reply.
}
