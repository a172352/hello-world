#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start,end;

    while(scanf("%d %d", &start, &end)!=EOF)
    {
        printf("%d %d ", start,end);

        if (start>end) swap(&start,&end);

        int counter = 0;
        int max = 0;

        for(int i=start; i<= end; i++ )
        {
            int tempNumber = i;
            counter = 1;
            while(tempNumber!=1)
            {
                counter ++;
                if(tempNumber%2 == 0) tempNumber/=2;
                else tempNumber = 3*tempNumber +1;
            }
            if(counter > max) max = counter;
        }

        printf("%d\n",max);

    }


    return 0;
}

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
