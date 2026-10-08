#include <stdio.h>
#include <string.h>
#include <windows.h>



typedef struct {
	//
	char username[100];
	//
	char book_name[100];
	//
	double book_value;
	//
	char book_pg[100];
	//
	char book_author[40];
	//
	int choice;
	//
} Data;




void sound_effect(void){
	
	
	Beep(600, 500);
	Beep(500, 500);
	Beep(400, 500);
}




int main (void){
	
	
	Data User;
	
	printf("Please enter your name:  ");
	scanf("%s", User.username);
	
 
    while(1){
    	
    	
    	
    	printf("\n-------- BOOK MANAGEMENT SYSTEM ---------\n");
    	printf("1. Add Book\n");
    	printf("2. List All Books\n");
    	printf("3. Exit\n");
    	
    	
    	
    	printf("Please enter any option:  ");
    	scanf("%d", &User.choice);
    	
    	
    	switch(User.choice){
    		
    		
       	  case 1:
    		
    	        
    	        
    	        
    	        
    			printf("\nPlease enter book name: ");
    			scanf("%s", User.book_name);
    			
    			
    			printf("\nPlease enter book's author: ");
    			scanf("%s", User.book_author);
    			
    			
    			printf("\nPlease enter book value:  ");
    			scanf("%.2f\n", User.book_value);
    			break;
	    
		
		  case 2:
	    	
	    	
	    	
	    	    printf(User.book_name);
	    	    break;
	      	
	      case 3:
	    	
	    	
	    	    printf("\nGoodbye %s, Thank you for choosing us!\n", User.username);
	    	
	    	    return 0;
	    	
	    	
	      default:
	    	
	    	
	            printf("\nPlease enter a valid number!\n");
	        	break;
	        	
	        	
	        	
	}
	
	
 }

}
	    	
	    	
	    		
	    	
				
 
	    	
