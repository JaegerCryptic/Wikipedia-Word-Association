#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Global FILE variable
FILE *inputFile; 
 
typedef struct histogram
{
    char *word;
    int count;
    struct histogram *next;
}   List;

void printList(List *start) 
{
    
    List *currentWord = start;
    int count = 0;
    
    while(currentWord != NULL) 
    {
        count++;
        printf("%d      %s\n"
        ,currentWord->count,
        currentWord->word);
        currentWord = currentWord->next;
    }   
    //printf("Total Cars:%d\n",count);
}

void wordOccurance(char word[], int count)
{
    
}
    
List *addWord(char *wordPtr, List *prevWord)
{
    List *newWord = malloc(sizeof(List));
    newWord->word = wordPtr;
    newWord->count = 1;
    // find way to add words from fileStream
    
    if(prevWord != NULL)
    {
        prevWord->next = newWord;
    }
    return newWord;
    
    // find way to increment count when word is identical
}   

int listMain(char *wordPtr)
{
    List *head = NULL;
    List *newWord = NULL;
    
    if(head == NULL)
    {
        head = addWord(wordPtr, NULL);
        newWord = head;
    }
    else
    {
        newWord = addWord(wordPtr, newWord);
    }
    printList(head);
    
    return 0;
}

void readInWord()
{
   // char *wordPtr;
    //int uniqueWordCount = 0;
    //char words[5000][size]; 
   // static int index = 0;
    
    
   // for(int i = 0; i < strlen(word); i++)
   // {
    //    if(isalpha(word[i]) == 0)
     //   {
     //       fail = 1;
       // } else {
       //     temp = 1;
       // }
    //}
      //  if((temp = 1 && fail != 1))
       // {
            //words[index] = word;
            //listMain(wordPtr);
            //printf("%s\n", words[0]);
            //emp = 0;
           // index++;
            
          // for(int i = 0; i < 2; i++)
           // {
              //  //printf("%s\n", words[i]);
            //}
            //printf("%i\n", index);
        
        //}
}
static int readNoOfWords()
{
// count number of words as well as all the unique words 
    
    
// return unique and all
}

void readWordLength()
{
    // Longest word in the English dictionary is 45 characters long
    char word[45];
    int wordLength = 0;
    int noOfWords = 0;
    int noOfUniqueWords = 0;
    
    while(fscanf(inputFile, "%s", word) == 1)
    {
            if(strlen(word) > wordLength && isupper(word[0]))
            {
                int boolFalse = 0;
                int boolTrue = 0;
                
                for(int i = 0; i < strlen(word); i++)
                {
                    if(isalpha(word[i]) == 0)
                    {
                        boolFalse = 1;
                    } else {
                        boolTrue = 1;
                    }
                }
                if((boolTrue = 1 && boolFalse != 1))
                {
                    wordLength = strlen(word);
                    boolTrue = 0;
                }
            }
    }
    //readNoOfWords(noOfWords, NoOfUniqueWords)
    //printf("\n%s processed: %i unique words found.\n", fileName, wordLength); // move once reading stream is completed
}

static void parseCmdLine(char *a ,const char **argv)
{
    argv[1] = a;
}

static void checkForInput(char *a, const char **argv)
{
    // Check length to determine if input = ENTER
    if(strlen(a) <= 1) 
    {
        printf("\nNo input. Using default txt file.\n");
    } else
    {
        char *temp = "txt\\";
        // remove \n from fgets()
        a[strcspn(a, "\n")] = 0;
        printf("\n%s input.\n",a);
        char *location = (char *) malloc(1 + strlen(temp)+ strlen(a)); 
        strcpy(location, temp);
        strcat(location, a);
        parseCmdLine(location, argv);
        
    }
}

static void fileDirectory(char *a, const char **argv)
{
    // Determine file location
    
    printf("Please make sure the file is located in the programs directory in a folder called 'txt', " 
    "\nthen enter the files name Eg: file.txt \n\nOtherwise, press 'ENTER' to use default file\n");
    
    fgets(a, 50, stdin);
    checkForInput(a, argv);
}

void readFile(char *a, const char **argv)
{
    fileDirectory(a, argv); 
    
    //Open chosen file
    inputFile = fopen(argv[1], "r");
    if(inputFile == NULL)
    {
        printf("\nFailed to open %s.\n", argv[1]);
        exit(0);
    }
}    