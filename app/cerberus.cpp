/* Cerberus - password breaking method for linux etc/shadow, using brute force. 
	@file cerberus.cpp
	@author Protimus
	@date 12/18/16
*/

#include "classes.h"

int main(){
    int continuar=1;

    do
    {
    	printf("\n\t======== Cerberus ========\n\n");
    	printf("1. Cracking passwords\n");
        printf("2. Check to /etc/shadow securty\n");
        printf("3. Make /etc/shadow secure\n");
        printf("0. Quit\n");

        scanf("%d", &continuar);
        system("cls || clear");
        switch(continuar)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 0:
                break;
            default:
                printf("Please provide a valid option!\n");
        }
    } while(continuar);
}
