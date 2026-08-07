#include <stdio.h>

struct Student{

    char name[50];
    int marks;
    char grade;

};

int main(){

    int n,i;
    FILE* fptr;

    printf("How many Students records are adding? :");
    scanf("%d",&n);

    fptr=fopen("Student_record.txt","a");

    if(fptr==0){
        printf("Failed to open file\n");
        return(0);
    }

    for(i=0;i<n;i++){

        struct Student s;
        printf("\nDeatails of %d Student :\n",i + 1);

        printf("Name :");
        scanf("%s",s.name);

        printf("Mark :");
        scanf("%d",&s.marks);

        //according to marks need to classify grades

        if(s.marks>=90){
            s.grade='A';
        }
        else if(s.marks>=70){
            s.grade='B';
        }
        else if(s.marks>=50){
            s.grade='C';
        }
        else if(s.grade>=35){
            s.grade='D';
        }
        else{
            s.grade='F';
        }

        fprintf(fptr,"Name :%s\nMark :%d\nGrade :%c\n\n",s.name,s.marks,s.grade);
        
    }
    
    fclose(fptr);
    printf("\nAll Students details has been saved \n");

    //To know what inside the file

    printf("The details in file\n");
    fptr=fopen("Student_record.txt","r");

    if(fptr !=NULL){
        char content[10000];
        while(fgets(content,10000,fptr)){
            printf("%s",content);
        }
    }
    else{
        printf("file open unsuccessfully :");
    }
    fclose(fptr);

    return (0);

}