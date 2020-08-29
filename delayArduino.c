#include <stdio.h>
#include <windows.h>

void loop(int n)
{
    for (int i = n; i <1000 ; i++)
    {
        n = n + 1;
        printf("%d\n", n);

Sleep(1000);
        
    }
}
void setup()
{
}
int main()
{
    int n1 = 100;
    setup();
    loop(n1);
    return 0;
}