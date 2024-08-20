int ft_iterative_power(int nb, int power)
{
    int     i;
    int temp;

    temp = 1;
    i = 0;
    if (power < 0)
        return (0);
    while (i < power)
    {
        temp *= nb;
        i++;
    }
    return (temp);
}