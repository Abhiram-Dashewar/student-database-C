/*
    The database of Govt.Polytechnic College, Nizamabad!!..
*/
#include<stdio.h>
int main(){
    printf("!!..Welcome..!!\n");
    printf("To the Database of Govt.Polytechnic College, Nizamabad...\n");
    FILE *ptr; 
    char name[100];
    int roll;
    int c;
    printf("Choose [1-Entry data, 2-View data, 3-Data update] : ");
    scanf("%d",&c);
    // Data entry
    if(c == 1){
        printf("This is the database of Govt.Polytechnic College, Nizamabad...\n");
        int n;
        printf("Enter the no.of students : ");
        scanf("%d",&n);
        int path;
        printf("Enter branch[CS-1,EC-2,EE-3,ME-4,ES-5,CE-6] path : ");
        scanf("%d",&path);
        if(path == 1){
            ptr = fopen("Data of CS students.txt","w");
            for(int i=1;i<=n;i++){
                printf("Enter name of the student : ");
                scanf("%s",name);
                printf("Enter roll no  : ");
                scanf("%d",&roll);
                fprintf(ptr,"Student name : %s\t",name);
                fprintf(ptr,"Student roll.no : %d\n",roll);
               
            }
        }
        else if(path == 2){
            ptr = fopen("Data of EC students.txt","w");
            for(int i=1;i<=n;i++){
                printf("Enter name of the student : ");
                scanf("%s",name);
                printf("Enter roll no  : ");
                scanf("%d",&roll);
                fprintf(ptr,"Student name : %s\t",name);
                fprintf(ptr,"Student roll.no : %d\n",roll);
            }
        }
        else if(path == 3){
            ptr = fopen("Data of EE students.txt","w");
            for(int i=1;i<=n;i++){
                printf("Enter name of the student : ");
                scanf("%s",name);
                printf("Enter roll no  : ");                   
                scanf("%d",&roll);
                fprintf(ptr,"Student name : %s\t",name);
                (ptr,"Student roll.no : %d\n",roll);
            }
        }
        else if(path == 4){
            ptr = fopen("Data of ME students.txt","w");
            for(int i=1;i<=n;i++){
                printf("Enter name of the student : ");
                scanf("%s",name);
                printf("Enter roll no  : ");                   
                scanf("%d",&roll);
                fprintf(ptr,"Student name : %s\t",name);
                fprintf(ptr,"Student roll.no : %d\n",roll);
            }
        }
        else if(path == 5){
            ptr = fopen("Data of ES students.txt","w");
            for(int i=1;i<=n;i++){
                printf("Enter name of the student : ");
                scanf("%s",name); 
                printf("Enter roll no  : ");
                scanf("%d",&roll);
                fprintf(ptr,"Student name : %s\t",name);
                fprintf(ptr,"Student roll.no : %d\n",roll);
            }
        }
        else if(path == 6){
            ptr = fopen("Data of CE students.txt","w");
            for(int i=1;i<=n;i++){
                printf("Enter name of the student : ");
                scanf("%s",name);
                printf("Enter roll no  : ");
                scanf("%d",&roll);
                fprintf(ptr,"Student name : %s\t",name);
                fprintf(ptr,"Student roll.no : %d\n",roll);
            }
        }
        else if(path > 6){
            printf("Invalid branch!!..");
        }
    printf("Data entered sucessfully..\n");
    printf("Thank you!!..");
    fclose(ptr);
    }
    
    // Data view
    if(c == 2){
        printf("This is the database of Govt.Polytechnic College, Nizamabad...\n");
        int path;
        printf("Enter branch[CS-1,EC-2,EE-3,ME-4,ES-5,CE-6] path : ");
        scanf("%d",&path);
        if(path == 1){
            ptr = fopen("Data of CS students.txt","r");
            char line[1000];
            if (ptr == NULL) {
                printf("Error: Could not open the file.\n");
                return 1;
            }
            while (fgets(line, sizeof(line), ptr) != NULL) {
                printf("%s", line);
            }
        }
        if(path == 2){
            ptr = fopen("Data of EC students.txt","r");
            char line[1000];
            if(ptr == NULL){
                printf("Error: Could not open the file.\n");
                return 1;
            }
            while (fgets(line,sizeof(line),ptr) != NULL){
                printf("%s",line);
            }
        }
        if(path == 3){
            ptr = fopen("Data of EE students.txt","r");
            char line[1000];
            if(ptr == NULL){
                printf("Error: Could not open the file.\n");
                return 1;
            }
            while(fgets(line,sizeof(line),ptr) != NULL){
                printf("%s",line);
            }
        }
        if(path == 4){
            ptr = fopen("Data of ME students.txt","r");
            char line[1000];
            if(ptr == NULL){
                printf("Error: Could not open the file.\n");
                return 1;
            }
            while(fgets(line,sizeof(line),ptr) != NULL){
                printf("%s",line);
            }
        }
        if(path == 5){
            ptr = fopen("Data of ES students.txt","r");
            char line[1000];
            if(ptr == NULL){
                printf("Error: Could not open the file.\n");
                return 1;
            }
            while(fgets(line,sizeof(line),ptr) != NULL){
                printf("%s",line);
            }
        }
        if(path == 6){
            ptr = fopen("Data of CE students.txt","r");
            char line[1000];
            if(ptr == NULL){
                printf("Error: Could not open file.\n");
                return 1;
            }
            while(fgets(line,sizeof(line),ptr) != NULL){
                printf("%s",line);
            }
        }
        if(path > 6){
            printf("Invalid branch!!..");

        }
        printf("Thank you!..");
    }
    fclose(ptr); 
    // Data update
    if(c == 3){
        int path;
        printf("Enter branch[CS-1,EC-2,EE-3,ME-4,ES-5,CE-6] path : ");
        scanf("%d",&path);
        if(path == 1){
            ptr = fopen("Data of CS students.txt","a");
            char data[100];
            if (ptr == NULL) {
                printf("Error: Could not open the file.\n");
                return 1;
            }
            printf("Enter data to append to the file..\n");
            int n;
            printf("Enter no.of students : ");
            scanf("%d",&n);
            for(int i=1;i<=n;i++){
                fgets(data, sizeof(data), stdin);
                printf("Studnet name : ");
                scanf("%s",name);
                printf("Student roll.no : ");
                scanf("%d",&roll);
                fprintf(ptr,"Student name : %s\t",name);
                fprintf(ptr,"Student roll.no : %d",roll);
                fputs(data, ptr);
            }
            fclose(ptr);
            printf("Data appended successfully.\n");
        }
        if(path == 2){
            ptr = fopen("Data of EC students.txt","a");
            char data[100];
            if (ptr == NULL) {
                printf("Error: Could not open the file.\n");
                return 1;
            }
            printf("Enter data to append to the file..\n");
            int n;
            printf("Enter no.of students : ");
            scanf("%d",&n);
            for(int i=1;i<=n;i++){
                fgets(data, sizeof(data), stdin);
                printf("Studnet name : ");
                scanf("%s",name);
                printf("Student roll.no : ");
                scanf("%d",&roll);
                fprintf(ptr,"Student name : %s\t",name);
                fprintf(ptr,"Student roll.no : %d",roll);
                fputs(data, ptr);
            }
            fclose(ptr);
            printf("Data appended successfully.\n");
        }
        if(path == 3){
            ptr = fopen("Data of EE students.txt","a");
            char data[100];
            if (ptr == NULL) {
                printf("Error: Could not open the file.\n");
                return 1;
            }
            printf("Enter data to append to the file..\n");
            int n;
            printf("Enter no.of students : ");
            scanf("%d",&n);
            for(int i=1;i<=n;i++){
                fgets(data, sizeof(data), stdin);
                printf("Studnet name : ");
                scanf("%s",name);
                printf("Student roll.no : ");
                scanf("%d",&roll);
                fprintf(ptr,"Student name : %s\t",name);
                fprintf(ptr,"Student roll.no : %d",roll);
                fputs(data, ptr);
            }
            fclose(ptr);
            printf("Data appended successfully.\n");
        }
        if(path == 4){
            ptr = fopen("Data of ME students.txt","a");
            char data[100];
            if (ptr == NULL) {
                printf("Error: Could not open the file.\n");
                return 1;
            }
            printf("Enter data to append to the file..\n");
            int n;
            printf("Enter no.of students : ");
            scanf("%d",&n);
            for(int i=1;i<=n;i++){
                fgets(data, sizeof(data), stdin);
                printf("Studnet name : ");
                scanf("%s",name);
                printf("Student roll.no : ");
                scanf("%d",&roll);
                fprintf(ptr,"Student name : %s\t",name);
                fprintf(ptr,"Student roll.no : %d",roll);
                fputs(data, ptr);
            }
            fclose(ptr);
            printf("Data appended successfully.\n");
        }
        if(path == 5){
            ptr = fopen("Data of ES students.txt","a");
            char data[100];
            if (ptr == NULL) {
                printf("Error: Could not open the file.\n");
                return 1;
            }
            printf("Enter data to append to the file..\n");
            int n;
            printf("Enter no.of students : ");
            scanf("%d",&n);
            for(int i=1;i<=n;i++){
                fgets(data, sizeof(data), stdin);
                printf("Studnet name : ");
                scanf("%s",name);
                printf("Student roll.no : ");
                scanf("%d",&roll);
                fprintf(ptr,"Student name : %s\t",name);
                fprintf(ptr,"Student roll.no : %d",roll);
                fputs(data, ptr);
            }
            fclose(ptr);
            printf("Data appended successfully.\n");
        }
        if(path == 6){
            ptr = fopen("Data of CE students.txt","a");
            char data[100];
            if (ptr == NULL) {
                printf("Error: Could not open the file.\n");
                return 1;
            }
            printf("Enter data to append to the file..\n");
            int n;
            printf("Enter no.of students : ");
            scanf("%d",&n);
            for(int i=1;i<=n;i++){
                fgets(data, sizeof(data), stdin);
                printf("Studnet name : ");
                scanf("%s",name);
                printf("Student roll.no : ");
                scanf("%d",&roll);
                fprintf(ptr,"Student name : %s\t",name);
                fprintf(ptr,"Student roll.no : %d",roll);
                fputs(data, ptr);
            }
            fclose(ptr);
            printf("Data appended successfully.\n");
        }
        if(path > 6){
            printf("Invalid branch!!..");
        }
        printf("Thnak you!!..");
    }
    return 0;
}