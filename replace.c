char    *replace(char *w, char *t)
{
        int     i;
        int     j;
        int     l_word;

        i = 0;
        j = 0;
        l_word = 0;
        while (w[l_word] != '\0')
        {
                l_word++;
        }
        while(t[i] != '\0')
        {
                while (w[j] == t[i + j] && w[j] != '\0')
                {
                        j++;
                }
                if(j == l_word)
                {
                        j = 0;
                        while(j < l_word)
                        {
                                t[i + j] = '*';
                                j++;
                        }
                }
                j = 0;
                i++;
        }
        return (t);
}
