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

int main(void)
{
    char std1[10] = "hello\0";
    char std2[10] = "fdsfss2\0";
    char * std3 = my_test(std2, std1, 4);
    printf("%s\n", std3);
}