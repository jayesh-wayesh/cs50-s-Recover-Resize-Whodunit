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
    
    while ( fread(buffer, sizeof(unsigned char), 512, fp) == 512) 
    {
        if ((buffer[0] == 0xff) && (buffer[1] == 0xd8) && (buffer[2] == 0xff) && ((buffer[3] & 0xf0) == 0xe0)) 
        {
        
            
        }
    }
    fclose(fp);
}