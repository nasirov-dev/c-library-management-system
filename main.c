#include <stdio.h>
#include <string.h>
#include <windows.h>



typedef struct {

	//
	char book_name[100];
	//
	double book_value;
	//
	char book_pg[100];
	//
	char book_author[100];
	//
	int choice;
	//
	
} Book;



void sound_effect(void){
	
	
	Beep(600, 500);
	Beep(500, 500);
	Beep(400, 500);
}




int main (void){
	
	
	Book book[100];	
	
	int count = 0;
		
	char username[100];
	
	printf("Please enter your name:  ");
	scanf("%s", username);
	
	int choice;
 
    while(1){
    	
    	
    	
    	printf("\n-------- BOOK MANAGEMENT SYSTEM ---------\n");
    	printf("1. Add Book\n");
    	printf("2. List All Books\n");
    	printf("3. Exit\n");
    	
    	
    	
    	printf("Please enter any option:  ");
    	
        if (scanf("%d", &choice) != 1) {
        	
        	
            while (getchar() != '\n');
            
            printf("\nPlease enter a valid number!\n");
            continue;
}
    	
    	
    	switch(choice){
    		
    		
       	  case 1:
    		
    	    if (count >= 100)  {
    	    	
    	    	
    	    	printf("\nBook list is full!\n");
    	    	break;
			}  
			
			
    	    
    	       
    	        
    			printf("\nPlease enter book name: ");
    			scanf(" %99[^\n]", book[count].book_name);
    			
    			
    			printf("\nPlease enter book's author: ");
    			scanf(" %99[^\n]", book[count].book_author);
    			
    			
    			printf("\nPlease enter book value:  ");
    			           
    			if (scanf("%lf", &book[count].book_value) != 1) {
    				
                     while (getchar() != '\n');
                     printf("\nInvalid value! Book was not added.\n");
                     
                   break;
                }
    			Sleep(2000);
    			
	            printf("\nSuccessfully added!\n");
	            sound_effect();
	            
	            count++;
	            break;
		
		  case 2:
	    	
	    	if (count == 0) {
	    		
              
			  printf("\nNo books yet.\n");
			  
			  
            }
            
             for (int i = 0; i < count; i++){
			   
			 printf("\n---------------------------------------\n");
			 
			 
			 printf("\n###########  %d. Chosen Book    ###########\n", i + 1);
	    	  printf("%s\n", book[i].book_name);
              printf("%s\n", book[i].book_author);
              printf("%.2f\n", book[i].book_value);
	         printf("\n---------------------------------------\n");  
	    	    
	          }
	    	    break;
	      	
	      case 3:
	    	
	    	
	    	    printf("\nGoodbye %s, Thank you for choosing us!\n", username);
	    	
	    	    return 0;
	    	
	    	
	      default:
	    	
	    	
	            printf("\nPlease enter a valid number!\n");
	        	break;
	        	
	        	
	        	
	}
	
	
 }

}
	    	
	    	
	    		
	    	
				
 
	    	
