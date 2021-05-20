#include <stdio.h>
#include <stdlib.h>

int main()
{
long long int a, b, x, y, z = 1;
scanf("%lld %lld", &a, &b);
if(a == b)
    printf("%lld %lld", a, a);
if(a > b)
{
hi:
y = a * z;
x = (a * z) % b;
if(x == 0){
    printf("%lld %lld", (a * b) / y, y);
}
else{
     z++;
goto hi;
 }
}
if (b > a)
{
    hello:
y = b * z;
x = (b * z) % a;
if(x == 0){
        printf("%lld %lld", (a * b) / y, y);
}
else{
    z++;
    goto hello;

}

}
    return 0;
}
