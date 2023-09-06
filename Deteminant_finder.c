#include<stdio.h>
#include<math.h>
#include<string.h>

    int determinant(int arr[][3] , int n,int m);

    int main() {
        
       int matrix[3][3],deter=0;

       for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            printf("Enter your number for position [%d][%d]", i+1,j+1);
            scanf("%d" ,&matrix[i][j]);
        }
       }

       for(int i=0 ; i<3 ; i++) {
        for(int j=0 ; j<3 ; j++) {
            printf("%5d",matrix[i][j]);
        }
        printf("\n");
       }

       printf("The determinant of the given matrix is : %d\n",determinant(matrix , 3 , 3));

        printf("\n\n-------------------------------------------------------------\n\n");
        main();
        
       return 0;

    }

    int determinant(int arr[][3], int n, int m) {
        
        int pro1=(arr[1][1])*(arr[1][1]);
        int pro2=(arr[2][1])*(arr[1][2]);
        int sub12=pro1-pro2;
        int minor1=(arr[0][0]) * sub12;

        int pro3=(arr[1][0])*(arr[2][2]);
        int pro4=(arr[2][0])*(arr[1][2]);
        int sub34=pro3-pro4;
        int minor2=(arr[0][1]) * sub34;

        int pro5=(arr[1][0])*(arr[2][1]);
        int pro6=(arr[2][0])*(arr[1][1]);
        int sub56=pro5-pro6;
        int minor3=(arr[0][2]) * sub56;

        int deter = minor1 - minor2 + minor3;

        return deter;
    }
