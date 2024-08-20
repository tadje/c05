int ft_sqrt(int nb)
{
    int i;
    i = 0;
    while (i*i < nb)
        i++;
    i--;
    return (i)
}
int ft_is_prime(int nb)
{
    int i;
    i = 0;
    while (i < ft_sqrt(nb))
    {
        if (i*(nb / i) == nb)
            return (0);
    }
    return (1);
int ft_find_next_prime(int nb)
{
    int i;
    i = nb;
    while ( !ft_is_prime(i))
    {
        i++;
    }
    return (i - 1);
}