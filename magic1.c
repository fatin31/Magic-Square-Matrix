#include <stdio.h>
void magic(int, int [10][10]);
int main( )
{
    int size,l;
    int a[10][10];
  for(l=1;;l++)
  {


    printf("Enter size of the matrix: ");
    scanf("%d", &size);
    if(size==0)
    {
        break;
    }
    else if (size % 2 == 0)
    {
        printf("Magic square works for an odd numbered size\n");
    }

    else
    {
        magic(size, a);
    }
  }
    return 0;
}
void magic(int size, int a[10][10])
{
    int sqr = size * size;
    int i = 0, j = size / 2, k;

    for (k = 1; k <= sqr; ++k)
    {
        a[i][j] = k;
        i--;
        j++;

        if (k % size == 0)
        {
            i += 2;
            --j;
        }
        else
        {
            if (j == size)
            {
                j -= size;
            }
            else if (i < 0)
            {
                i += size;
            }
        }
    }
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
