#include <stdio.h>
#include <string.h>
char* morseCode(char c);
char* alpabest(char *);
void printintxt(char *,char *);
int main() {
    int option;
    do
    {
        char input[100];
        int txtprint;
        char *result;
        char temp[500];
        printf("\n+"); 
        for (int i = 1; i <= 48; i++)
        {
            printf("-");
        }
        printf("+\n");
        printf("| \t Welcome to Morse Code Converter \t |");
        printf("\n+---+"); 
        for (int i = 0; i < 44; i++)
        {
            printf("-");
        }
        printf("+\n");

        printf("| 1 | Convert text to Morse code \t\t |\n");
        printf("| 2 | Convert Morse code to text \t\t |\n");
        printf("| 3 | Exit \t\t\t\t\t |");
        printf("\n+---+"); 
        for (int i = 0; i < 44; i++)
        {
            printf("-");
        }
        printf("+\n");

        printf("\nChoose An Option (1, 2, or 3): "); 
        scanf("%d", &option);

        switch (option) {

            case 1:
                printf("\nEnter Text : ");
                scanf(" %[^\n]", input);
                printf("Morse Code : ");
                for (int i = 0; i < strlen(input); i++) {
                    printf("%s ", morseCode(input[i]));
                }
                printf("\n\nDo you want to print in text format? (1 for yes, 0 for no): ");
                scanf("%d", &txtprint);

                if (txtprint == 1){
                    printintxt(input, temp);
                    printf("\n+");
                    for (int i = 0; i < strlen(" print in text format successfull "); i++)
                    {
                        printf("-");
                    }
                    printf("+\n");
                    printf("| print in text format successfull |");
                    printf("\n+");
                    for (int i = 0; i < strlen(" print in text format successfull "); i++)
                    {
                        printf("-");
                    }
                    printf("+\n");

                }
                else if (txtprint == 0){
                    printf("\n+");
                    for (int i = 0; i < strlen(" You have chosen not to print in text format. "); i++)
                    {
                        printf("-");
                    }
                    printf("+\n");
                    printf("| You have chosen not to print in text format. |");
                    printf("\n+");
                    for (int i = 0; i < strlen(" You have chosen not to print in text format. "); i++)
                    {
                        printf("-");
                    }
                    printf("+\n");
                }
                else{
                    printf("\n+");
                    for (int i = 0; i < strlen(" Invalid option. Printing in text format by default. "); i++)
                    {
                        printf("-");
                    }
                    printf("+\n");
                    printf("| Invalid option. Printing in text format by default. |");
                    printf("\n+");
                    for (int i = 0; i < strlen(" Invalid option. Printing in text format by default. "); i++)
                    {
                        printf("-");
                    }
                    printf("+\n");
                }
                
                break;

            case 2:
                printf("\nEnter Morse Code : ");
                scanf(" %[^\n]", input);
                result = alpabest(input);
                printf("Text : %s \n", result);

                printf("\nDo you want to print in text format? (1 for yes, 0 for no): ");
                scanf("%d", &txtprint);

                if (txtprint == 1){
                    printintxt(result, input);
                    printf("\n+");
                    for (int i = 0; i < strlen(" print in text format successfull "); i++)
                    {
                        printf("-");
                    }
                    printf("+\n");
                    printf("| print in text format successfull |");
                    printf("\n+");
                    for (int i = 0; i < strlen(" print in text format successfull "); i++)
                    {
                        printf("-");
                    }
                    printf("+\n");

                }
                else if (txtprint == 0){
                    printf("\n+");
                    for (int i = 0; i < strlen(" You have chosen not to print in text format. "); i++)
                    {
                        printf("-");
                    }
                    printf("+\n");
                    printf("| You have chosen not to print in text format. |");
                    printf("\n+");
                    for (int i = 0; i < strlen(" You have chosen not to print in text format. "); i++)
                    {
                        printf("-");
                    }
                    printf("+\n");
                }
                else{
                    printf("\n+");
                    for (int i = 0; i < strlen(" Invalid option. Printing in text format by default. "); i++)
                    {
                        printf("-");
                    }
                    printf("+\n");
                    printf("| Invalid option. Printing in text format by default. |");
                    printf("\n+");
                    for (int i = 0; i < strlen(" Invalid option. Printing in text format by default. "); i++)
                    {
                        printf("-");
                    }
                    printf("+\n");
                }
                break;

            case 3:
                printf("\n+");
                for (int i = 1; i < 57; i++)
                {
                    printf("-");
                }
                printf("+\n");
                printf("| \t Thank you for using the Morse Code Converter! \t |\n");
                printf("| \t\t     Have a great day! \t\t\t |\n");
                printf("| \t\t\t Exiting... \t\t\t |");
                printf("\n+");
                for (int i = 1; i < 57; i++)
                {
                    printf("-");
                }
                printf("+\n\n");
                break;

            default:
                printf("\n+");
                for (int i = 0; i < 48; i++)
                {
                    printf("-");
                }
                printf("+\n");
                printf("| \t Invalid option. Please try again. \t |");
                printf("\n+");
                for (int i = 0; i < 48; i++)
                {
                    printf("-");
                }
                printf("+\n");
                break;
        }
    } while (option != 3);
    
    
    return 0;
}

char* morseCode(char c) {
    switch (c) {
        case 'A': return ".-";
        case 'B': return "-...";
        case 'C': return "-.-.";
        case 'D': return "-..";
        case 'E': return ".";
        case 'F': return "..-.";
        case 'G': return "--.";
        case 'H': return "....";
        case 'I': return "..";
        case 'J': return ".---";
        case 'K': return "-.-";
        case 'L': return ".-..";
        case 'M': return "--";
        case 'N': return "-.";
        case 'O': return "---";
        case 'P': return ".--.";
        case 'Q': return "--.-";
        case 'R': return ".-.";
        case 'S': return "...";
        case 'T': return "-";
        case 'U': return "..-";
        case 'V': return "...-";
        case 'W': return ".--";
        case 'X': return "-..-";
        case 'Y': return "-.--";
        case 'Z': return "--..";
        case 'a': return ".-";
        case 'b': return "-...";
        case 'c': return "-.-.";
        case 'd': return "-..";
        case 'e': return ".";
        case 'f': return "..-.";
        case 'g': return "--.";
        case 'h': return "....";
        case 'i': return "..";
        case 'j': return ".---";
        case 'k': return "-.-";
        case 'l': return ".-..";
        case 'm': return "--";
        case 'n': return "-.";
        case 'o': return "---";
        case 'p': return ".--.";
        case 'q': return "--.-";
        case 'r': return ".-.";
        case 's': return "...";
        case 't': return "-";
        case 'u': return "..-";
        case 'v': return "...-";
        case 'w': return ".--";
        case 'x': return "-..-";
        case 'y': return "-.--";
        case 'z': return "--..";
        case '0': return "-----";
        case '1': return ".----";
        case '2': return "..---";
        case '3': return "...--";
        case '4': return "....-";
        case '5': return ".....";
        case '6': return "-....";
        case '7': return "--...";
        case '8': return "---..";
        case '9': return "----.";
        case ' ': return "/";
        default: return "";
    }
}
char* alpabest(char *ptr){
    static char string[100];
    int j=0;

while(*ptr != '\0'){
    char temp[10];
    int i=0;
    while (*ptr != ' ')
    {
        if (*ptr == '\0')
            break;
        temp[i] = *ptr;
        i++;
        ptr++;
    }
    ptr++;
    temp[i] = '\0';
    if (strcmp(temp,".-")==0)
    {
        string[j]='A';
        j++;
    }
    else if (strcmp(temp,"-...")==0)
    {
        string[j]='B';
        j++;
    }
    else if (strcmp(temp,"-.-.")==0)
    {
        string[j]='C';
        j++;
    }
    else if (strcmp(temp,"-..")==0)
    {
        string[j]='D';
        j++;
    }
    else if (strcmp(temp,".")==0)
    {
        string[j]='E';
        j++;
    }
    else if (strcmp(temp,"..-.")==0)
    {
        string[j]='F';
        j++;
    }
    else if (strcmp(temp,"--.")==0)
    {
        string[j]='G';
        j++;
    }
    else if (strcmp(temp,"....")==0)
    {
        string[j]='H';
        j++;
    }
    else if (strcmp(temp,"..")==0)
    {
        string[j]='I';
        j++;
    }
    else if (strcmp(temp,".---")==0)
    {
        string[j]='J';
        j++;
    }
    else if (strcmp(temp,"-.-")==0)
    {
        string[j]='K';
        j++;
    }
    else if (strcmp(temp,".-..")==0)
    {
        string[j]='L';
        j++;
    }
    else if (strcmp(temp,"--")==0)
    {
        string[j]='M';
        j++;
    }
    else if (strcmp(temp,"-.")==0)
    {
        string[j]='N';
        j++;
    }
    else if (strcmp(temp,"---")==0)
    {
        string[j]='O';
        j++;
    }
    else if (strcmp(temp,".--.")==0)
    {
        string[j]='P';
        j++;
    }
    else if (strcmp(temp,"--.-")==0)
    {
        string[j]='Q';
        j++;
    }
    else if (strcmp(temp,".-.")==0)
    {
        string[j]='R';
        j++;
    }
    else if (strcmp(temp,"...")==0)
    {
        string[j]='S';
        j++;
    }
    else if (strcmp(temp,"-")==0)
    {
        string[j]='T';
        j++;
    }
    else if (strcmp(temp,"..-")==0)
    {
        string[j]='U';
        j++;
    }
    else if (strcmp(temp,"...-")==0)
    {
        string[j]='V';
        j++;
    }
    else if (strcmp(temp,".--")==0)
    {
        string[j]='W';
        j++;
    }
    else if (strcmp(temp,"-..-")==0)
    {
        string[j]='X';
        j++;
    }
    else if (strcmp(temp,"-.--")==0)
    {
        string[j]='Y';
        j++;
    }
    else if (strcmp(temp,"--..")==0)
    {
        string[j]='Z';
        j++;
    }
    else if (strcmp(temp,"-----")==0)
    {
        string[j]='0';
        j++;
    }
    else if (strcmp(temp,".----")==0)
    {
        string[j]='1';
        j++;
    }
    else if (strcmp(temp,"..---")==0)
    {
        string[j]='2';
        j++;
    }
    else if (strcmp(temp,"...--")==0)
    {
        string[j]='3';
        j++;
    }
    else if (strcmp(temp,"....-")==0)
    {
        string[j]='4';
        j++;
    }
    else if (strcmp(temp,".....")==0)
    {
        string[j]='5';
        j++;
    }
    else if (strcmp(temp,"-....")==0)
    {
        string[j]='6';
        j++;
    }
    else if (strcmp(temp,"--...")==0)
    {
        string[j]='7';
        j++;
    }
    else if (strcmp(temp,"---..")==0)
    {
        string[j]='8';
        j++;
    }
     else if (strcmp(temp,"----.")==0)
     {
         string[j]='9';
         j++;
     } 
     else if (strcmp(temp,"/")==0)
     {
         string[j]=' ';
         j++;
     }
     else
     {
        
     } 
}
    string[j]='\0';
     return string;
    
}
void printintxt(char *input, char *code) {
    FILE *file = fopen("morse_code.txt", "w");

    fputs("This is The Text :- ", file);
    fputs(input, file);
    fputs("\nThis is The Morse code :- ", file);
    fputs(code, file);

    fclose(file);
}


