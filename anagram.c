#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void anagram(char input[])
{
	unsigned int count[256] = { 0 };
	unsigned int i;
for(i=0; input[i] != '\0'; i++)
{
	count[(int)(input[i])]++;
}

for(i=0; i<256; i++)
{
	while(count[i]>0)
	{
		if(isspace(i) || ispunct(i)|| isdigit(i))
		{
			count[i]--;
		}
		else
		{
			printf("%c",i);
			count[i]--;
			}
		}
	}	
}






int main(int argc, char** argv)
{
char **array;
char word[100];
array=malloc(sizeof(char*)*(argc+1));

int ani;
for(ani=0; ani<argc; ++ani)
{
	array[ani]=malloc(strlen(*argv)+1);
//	word=malloc(strlen(*argv)+1);
	strcpy(array[ani],*argv);
	++argv;
}



array[ani]=NULL;

strcpy(word,array[1]);
//char temp;:q	
int i;//,j;
//putting to lower case
int slen = strlen(word);
for(i=0; i<slen; i++)
{
word[i]=(tolower(word[i]));
}
// bubble sort into order, call function to order 
//
 /*
for(i=0; i<slen-1; i++)
{
	for(j=slen-1; j>i; j--)
	{
		if(word[j-1]<word[j])
		{
		temp= word[j-1];
		word[j-1]=word[j];
		word[j]=temp;
		}
	}
}
*/
anagram(word);
printf("\n");
//printf("%s \n", word);
//printf("%s \n", array+1);
//printf("%s \n", array[1]);
//printf("%s \n", word);
for(ani=0; ani<argc; ++ani)
{
	free(array[ani]);
}
//free(word);
free(array);
		}		
