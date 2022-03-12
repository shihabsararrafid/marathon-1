#include <stdio.h>
// atlast done
int main()
{
    const double pie = 3.1415926535897;
    int r;
    double area, circum;
    scanf("%d", &r);
    if (r > 0 && r < 10000)
    {
        area = pie * r * r;
        circum = 2 * pie * r;
        printf("%.6lf %.6lf", area, circum);
    }

    return 0;
}