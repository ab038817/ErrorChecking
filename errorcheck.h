#ifndef ERRORCHECK_H_INCLUDED
#define ERRORCHECK_H_INCLUDED

#define OK 1
#define NO 0


//Prototypes :
//return name (parameters)
 int errorCheck(char grade);


 int errorCheck(char grade)
 {
     //Initialize assuming the data is wrong.
     int returnVal = NO;


     char correctInput[10] = {'A','a','B','b','C','c','D','d','F','f'};

    //iterate through the correct input characters
    //and see if what the user entered is in the list.

    int i;

    for (i = 0; i < 10; i++)
    {
       if ( grade == correctInput[i] )
       {
           //We found what we're looking, so stop here.
           returnVal = OK;
           break;
       }
    }
  return returnVal;
 }



#endif // ERRORCHECK_H_INCLUDED
