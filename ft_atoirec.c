#include <unistd.h>
#include <stdio.h>
#include <string.h>

int    ft_atoirec(char* src, int i ,int count, int c)
{  
    
    while(count > 1)
    {
    i = i * 10 + src[c] - '0';
    count--;
    c++;
     i = ft_atoirec(src, i, count, c);
    }
    return(i);
}

int main(int argc, char** argv)
{
    int i = 0;
    int c = 0;
    int count = strlen(argv[1]);
    i = ft_atoirec(argv[1], i, count, c);
    printf("%d\n", i);

    return (0);
}