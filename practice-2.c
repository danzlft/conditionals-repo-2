#include <stdio.h>

int main()
{

    // 8. Write a C program to find the largest of three numbers.
    // Prompt user for 3 inputs.
    // Display 3 numbers user inputted 
    // IF num1> num2 && num3, then print out num1 as output
    // ELSE IF num 2> num1 && num3, then print out num2 as output
    // ELSE IF num3 > num1 && num2, then print out num3 as output
    // ELSE print out n and n are the same values

    int num1, num2, num3;

    printf("\nInput the three numbers to compare: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("1st number: %d, 2nd number: %d, 3rd number: %d", num1, num2, num3);

    // if(num1 > num2 && num3){
    //     printf("\n\nThe 1st number: %d, is the greatest among the three.", num1);
    // }
    // else if(num2 > num1 && num3){
    //     printf("\n\nThe 2nd number: %d, is the greatest among the three.", num2);
    // }
    // else if(num3 > num1 && num2){
    //     printf("\n\nThe 3rd number: %d, is the greatest among the three.", num3);
    // }
    // else{
    //     printf("\n\nThe value of %d, %d, %d are the same.", num1, num2, num3);
    // }

    if(num1 > num2){
        if(num1 > num3)
            printf("\nThe 1st number: %d, is the greatest among the three.", num1);
        
        else
            printf("\nThe 3rd number: %d, is the greatest among the three.", num3);

    else if (num2 > num3)
        printf("\nThe 2nd number: %d, is the greatest among the three.", num2);

    else if(num2 < num3)
        printf("\nThe 3rd number:%d, is the greatest among the three.", num3);
    
    else 
        printf("\nThe three values you put in are the same");
 }
    return 0;    
}