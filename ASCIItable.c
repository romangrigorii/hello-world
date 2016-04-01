//PROGRAM COMMENTS
/* This program when run prints a table with decimal values ranging from 33 to
127 and the corresponding ASCII characters of those values. What is printed is a
3 column able, inside each column of which there are two columns with dec
values on the left side and their corresponding ASCII characters on the right.

The program was written by Roman Grigorii on 1/6/16.
*/

//PREPROCESSOR COMMANDS
#include <stdio.h>

//DATATYPE DEFINITIONS
/* none
*/

//GLOBAL VARIABLES
/* none
*/

//HELPER FUNCTIONS PROTOTYPES
/* none (the program is contained in main)
*/

//MAIN FUNCTION

int main(void) {
int i,u,start=33,end=127,NumOfCols=3; //setting the size of the table
int colLen=(end-start)/NumOfCols; // calculating the shortest column length
int curElem; //marks the current element being printed
printf("\n\n\t\tASCII Table\n");
printf("_________________________________________________\n");

for(i=0;i<=colLen;i++){
  for(u=0;u<NumOfCols;u++){
    curElem=i+start+u*(1+colLen);//sets the current element
    if(curElem<=end){ //checks if we haven't listed all the elements
      printf("|%d\t%c\t|",curElem,curElem); //prints the new element
    }
    else{//if we printed all elements, the slot in the table is filled in empty
      printf("|\t\t|");
    };
  };
  printf("\n");
};
printf("_________________________________________________\n");
return 0;
};
