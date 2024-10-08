char *my_test(char *dest, const char * str, int n)
{
    int i = 0;

    while (str[i] != '\0' && i < n) {
        dest[i] = 'f';
        printf("%c %c\n", dest[i], str[i]);
        i++;
    }
    dest[i] = '\0';
    return dest;
}
gfgcg