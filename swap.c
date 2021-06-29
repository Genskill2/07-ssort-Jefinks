//swap max
void swap_max(int h[], int b, int n)
{
    int maxtn = h[n];
    int maxpn = n;
    for (int x = n; x < b; x++)
    {
        if (maxtn < h[x])
        {
            maxtn = h[x];
            maxpn = x;
        }
    }
    h[maxpn] = h[n];
    h[n] = maxtn;
}
//ssort
void ssort(int h[], int a)
{
    for (int i = 0; i < a; i++)
    {
        swap_max(h, a, i);
    }
}
