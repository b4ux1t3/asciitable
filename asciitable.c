#include <stdio.h>

int main()
{
    int initial = '!'; // First printable character
    int value;         // The main iterator
    int final = '~';   // Final character that we want to count to
    int rows = (final - value) / 4;     // Make 4 even columns
    int positions[4];  // Stores the values of the chaarcters in each row
    int iterator;      // An iterator so that I don't have to use c99
    
    for (value = initial; value < initial + rows; value++)
    {
        positions[0] = value;
        positions[1] = value + rows;
        positions[2] = value + (rows * 2);
        positions[3] = value + (rows * 3); 
        for (iterator = 0; iterator < sizeof(positions) / 4; iterator++)
        {
            if (positions[iterator] <= final)
            {
                if (positions[iterator] < 100)
                {
                    printf("| 0%d:\t\t%c |", positions[iterator], (char)positions[iterator]);
                }
                else
                {
                    printf("| %d:\t\t%c |", positions[iterator], (char)positions[iterator]);
                }
            }
        }
        printf("\n");
    }
}
