#include <stdio.h>

void flush(char chr[], int len){
    fgets(chr, len, stdin); //Takes users input
    int x = 0;
    char ch;
    
    while(x <= len){ //runs loop while x<=len
        if(chr[0]=='\n'){ //Tests intial condition and if it is true breaks loop
        break;
        }
       if(x == (len-1) && chr[x] !='\n'){ //If x = 
            while ((ch = getchar()) != '\n' && ch != EOF);//Clears temporary memory
            break; //Breaks while loops after memory is clear
        }
       if(chr[x]=='\n'){ //If chr[x] = a new line will break the loop
            break;
        }
        x++;
    }
}

int main(int argc, char **argv)
{
    char name[8];
    char name2 [8];
    
    
    printf("Enter first name: \n");
    flush(name, 8);
    
    printf("Enter last name: \n");
    flush(name2, 8);
    
    printf("Your fancy name is: %s %s \n", name2, name); 
    return 0;
}
