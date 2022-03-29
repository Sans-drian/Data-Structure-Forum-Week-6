//Functions were learned from the website credited in the README file.

//------ The function below is the iterative function method example for finding n factorial.

public static int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;

//------- The function below is the recursive function method example for finding n factorial.

public static int factorial(int n){
    if (n == 1)
       return  1;
    else
       return n * factorial(n - 1);
}


