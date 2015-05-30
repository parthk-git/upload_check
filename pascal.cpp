#include<simplecpp>

int factorial( int n )
{
    if(n == 0)
    return 1;
    else
    {
    int fact = 1;
    for(int i = 1 ; i < n+1; i++)
    fact = fact*i;
     return fact;
    }
}

int permutatn (int n , int k)
{
    int a = factorial(n)/(factorial(k)*factorial(n-k));
    return a;
}

void space (int i , int n)
{
    repeat(n - i)
    cout<<" ";
    return;
}

void p ( int n )
{
    for(int i = 0 ; i < n+1 ; i++)
    {
        space(i,n);
        for(int j = 0 ; j < i + 1 ; j++)
        cout<< permutatn(i , j)<< " ";
        space(i,n);
        cout<<endl;
    }
    return;
}

main_program
{
    int n;
    cin >> n;
    p(n);
}
