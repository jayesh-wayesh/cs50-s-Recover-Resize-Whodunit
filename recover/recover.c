#include <stdio.h>
#include <stdint.h>
#include <cs50.h>

int main (int argc,string argv[])
{
    if (argc != 2)
    {
        fprintf (stderr,"Error! Usage: ./recover image\n");
        return 1;
    }
    
    FILE *fp = fopen(argv[1],"r");
    if (fp == NULL)
    {
        fprintf (stderr,"Error! file %s can't be opened\n",argv[1]);
        return 2;
    }

    FILE* pic = NULL;
    int count = 0;
    unsigned char buffer[512];
}