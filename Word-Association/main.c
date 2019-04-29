#include <stdio.h>
#include "histogram.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
	char *parameterPtr = malloc(100);
    int wordLength;
    char *fileName;
    
    readFile(parameterPtr, argv);
    fileName = argv[1];
    fileName = &fileName[4];
    
    readWordLength(fileName);
  
    //determineWordSize(wordLength);
    
	return 0;
}
