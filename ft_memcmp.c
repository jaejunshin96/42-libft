#include "libft.h"

/*
ft_memcmp compares the first n bytes of str1, str2.
*/
int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    unsigned char    *temp;
    unsigned char    *temp2;

    temp = (unsigned char *)str1;
    temp2 = (unsigned char *)str2;
    while (n--)
    {
        if ((*temp - *temp2) != 0)
            return (*temp - *temp2);
        temp++;
        temp2++;
    }
    return (0);
}

// int main(void)
// {
//     int result = memcmp("hEllo", "hello", 1);
//     int result2 = ft_memcmp("hEllo", "hello", 1);
//     printf("%d, %d", result, result2);
// }