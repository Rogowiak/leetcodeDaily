/* The Tribonacci sequence Tn is defined as follows: 
T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.
Given n, return the value of Tn.*/

int results[20] = {0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

int tribonacci(int n){
if(n <= 0)
{return 0;}
if(n < 20 && results[n] != 0)
{
    return results[n];
}
else
{
    int result = tribonacci(n-3) + tribonacci(n-2) + tribonacci(n-1);
    if(n < 20)
    {
        results[n] = result;
        return result;
    }
    return result;
}
return 0;
}
