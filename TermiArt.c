#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char file[100];
	if(argc == 1)
	{
	printf("Enter source: ");
	scanf("%s",file);
	}
	else
	{
		strcpy(file,argv[1]);
	}
	FILE *art = fopen(file,"r");
	if (art == NULL)
	{
		printf("\"%s\" does not exist.\n",file);
		return 1;
	}
	int ch;

	while ((ch = fgetc(art)) != EOF)
	{	
		
		if(ch == ' ')
                {
                        printf(" ");
                        continue;
                }
		if(ch == '0')
		{
			printf("\033[47m  \033[0m");
			continue;
		}
		else if(ch == '1')
		{
			printf("\033[40m \033[0m");
			continue;
		}
		else if(ch == '2')
		{
			printf("\033[41m \033[0m");
			continue;
		}
		else if(ch == '3')
                {
                        printf("\033[42m \033[0m");
                        continue;
                }
		else if(ch == '4')
                {
                        printf("\033[43m \033[0m");
                        continue;
                }
		else if(ch == '5')
                {
                        printf("\033[44m \033[0m");
                        continue;
                }
		else if(ch == '6')
                {
                        printf("\033[45m \033[0m");
                        continue;
                }
		else if(ch == '7')
                {
                        printf("\033[46m \033[0m");
                        continue;
                }
		else if(ch == '8')
                {
                        printf("\033[100m \033[0m");
                        continue;
                }


		else if(ch == '\n')
		{
			printf("\n");
			continue;
		}
		else if(ch == '\t')
		{
			printf("\t");
			continue;
		}
		fclose(art);
		printf("\nInvalid: \"%c\"\n",ch);
		return 1;
	}
}
