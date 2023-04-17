/*
* FILE : m1
* PROJECT : PROG1345 - Assignment #1
* PROGRAMMER : Shrey Dharmendrakumar Patel
* FIRST VERSION : 2021-10-01
* DESCRIPTION :
* This program is about displaying character and their averaged values.* */#include <stdio.h>

int main()
{
    //storing string in character array
    char c[20] = "Shrey";
    int i, sum = 0, avg, n = 1;
    for (i = 97; i < 123; i++)
    {
        sum += i;
        //Calculating the average of ascii values 
        avg = (int)(sum / n);
        //comparing the 1st character of the string and the respective alphabet 
        if ((char)(i) == c[0] || (char)(i - 32) == c[0])
        {
            printf("%c\t%d", (char)(i), avg);
        }
        else
        {
            printf("%c\t%c", (char)(i), (char)(avg));
        }
        n++;
        printf("\n");
    }
    return 0;
}