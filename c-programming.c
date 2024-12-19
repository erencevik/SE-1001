//WEEK-1
/*
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}

 - && = Double Ampersant = AND
 - || = OR
 - !  = NOT
*/



//WEEK-2
/*
include <stdio.h>

int main() {

    
    int number1 = 10;
    int number2 = 3;
    //int number1 = 10, number2 = 2;

    // Comment
    

    int sum = number1 + number2;
    int modulo = number1 % number2;

    printf("Summation : %d, and Modulo : %d\n", sum, modulo);
    printf("Adres int: %d\n " , &sum);
    printf("Adres hex: %x\n " , &sum);

    return 0;
    
    
    
    int number1, number2;
    printf("Number 1 : %d \n", number1);
    printf("Number 2 : %d \n", number2);

    return 0;
    

    int number1, number2;
    printf("Please give me number1: ");
    scanf("%d", &number1);
    printf("Please give me number2: ");
    scanf("%d", &number2);

    int sum = number1 + number2;
    int mod = number1 % number2;

    printf("Summationn: %d, and Modulo : %d\n",sum,mod);

    return 0;


    int a = 5;
    int b = a++;
    int c = ++a;
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);

    

    for(int myVar = 0; myVar <= 10; myVar++) {
        printf("MyVar is : %d\n", myVar );
        printf("MyVar is : %d\n", myVar );}
    return 0;

}
*/



//WEEK-3
/*
#include <stdio.h>

int main() {
    int myVar = 0;
    while(myVar < 10) {
        if(myVar % 2  == 1)
        {
            printf("MyVar : %d\n",myVar);
        }
        else
        {
            break;
        }


        
        myVar++;
    }
    }


FACTORİAL-FOR

#include <stdio.h>

int factorialFor(int number);

int main()
{
    int factorial_5 = factorialFor(6);
    printf("Factorial %d", factorial_5);


    return 0;   
}

int factorialFor(int number)
{
    if(number < 0)
    {
        return 0;
    }
    if (number == 0)
    {
        return 1;
    }
    int result = 1;
    for (int i = 1; i <= number; i++)
    {
        result = result * i;
    }
    return result;

}


FACTORİAL-WHİLE

#include <stdio.h>

int factorialWhile(int number);

int main()
{
    int factorial_5 = factorialWhile(5);
    printf("Factorial %d", factorial_5);


    return 0;   
}

int factorialWhile(int number)
{
    if(number < 0)
    {
        return 0;
    }
    if (number == 0)
    {
        return 1;
    }
    int result = 1;
    if (number > 0)
    {
        while(number > 0)
        {
            result = result*number;
            number--;
        }
    }
    return result;
}


FACTORİAL-RECURSİVE

#include <stdio.h>

int factorialRecursive(int number);

int main()
{
    int factorial_5 = factorialRecursive(17);
    printf("Factorial %d\n", factorial_5);
    return 0;   
}

int factorialRecursive(int number)
{
    //Base Case 
    if ( number == 1 || number == 0)
    {
        return 1;
    }
    return number * factorialRecursive(number-1);
}


FİBONACCİ-FOR

#include <stdio.h>

int fibonacciFor(int number);

int main()
{
    int fibonacci_5 = fibonacciFor(7);
    printf("Fibonacci %d", fibonacci_5);

    return 0;
}

int fibonacciFor(int number)
{
    int first = 1, second = 1, result = 0;
    if (number == 1 || number == 2)
    {
        return 1;
    }
    for(int i = 2; i < number; i++)
    {
        result = first + second;
        first = second;
        second = result;
    }
    return result;
}


FİBONACCİ-WHİLE

#include <stdio.h>

int main()
{
    int first = 0, second = 1, i = 0, next;
    int n = 1;

    while(i<n)
    {
        if(i==0)
        {
            next = 0;
        }
        else if(i==1)
        {
            next = 1;
        }
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        i=i+1;
    }
    printf("%d", next);
    return 0;
}


FİBONACCİ-RECURSİVE

#include <stdio.h>

int fibonacciRecursive(int number);

int main()
{
    int num;
    while (1)
    {
        printf("Please enter a number: ");
        scanf("%d", &num);
        int fibonacci_5 = fibonacciRecursive(num);
        printf("Fibonacci %d\n", fibonacci_5);
        if (num == "")
        {
            break;
        }
    }
    return 0;
}

int fibonacciRecursive(int number)
{
    if(number == 1 || number == 2)
    {
        return 1;
    }
    return fibonacciRecursive(number - 1) + fibonacciRecursive(number - 2);
}

*/



//WEEK-4
/*
#include <stdio.h>

    function declaration.
int multiply(int x, int y);

int main()
{
    int result = multiply(5,3);
    printf("Result: %d\n", result);
    return 0;
}

    function definition.
int multiply(int x, int y)
{
    return x * y;
}
*/



//WEEK-5
/*
#include <stdio.h>

int main()
{
    int i = 0;

    do
    {
        printf("%d\n", i);
        i++;
    }
    while (i<=5);
    return 0;
}
*/



//WEEK-6
/*
#include <stdio.h>
#include <math.h>


int main()
{
    int myArray[10] = {1,2,3,4,5};

    myArray[5] = 5;
    for(int i = 0; i < 10; i++)
    {
        printf("%d\n",myArray[i]);
    }

    int multiArray[3][4];
    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", multiArray[i][0]);
    }

    return 0;
}



int main(){

    int matrix[3][3] = {
                    {1,2,3},
                    {4,5,6},
                    {7,8,9},
    };

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(j != 2)
            {
                printf("%d, ", matrix[i][j]);
            }
            else
            {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
*/



