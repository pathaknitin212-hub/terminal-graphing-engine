#include<stdio.h>
#include<math.h>
#include<string.h>
#include<time.h>
int z=1, l=0, choose_axis =0, n = 151, graph_type,equation_type;
char arr[151][151];
#define row(j)  (j-(n/2))*z
#define column(i)  (n/2 - i)*z 
int equation();
void axis();
void plot();
void ask1();
void ask1(){
    equation_type = 0;
    while( equation_type != 1 &&  equation_type != 2){
    printf("\x1b[1;33m\n WHICH TYPE OF EQATION YOU WANT TO PLOT: \n\n 1:- NORMAL EQATION \n 2:- IMPLICIT EQATION \n\nENTER THE CHOICE:- \x1b[0m");
    scanf("%d", & equation_type);
    if( equation_type!=1 &&  equation_type!=2){
    printf("\x1b[1;31m\nPLEASE ENTER A VAILED CHOICE...\n\n\x1b[0m");}}
    equation();

    graph_type=0;
    while( graph_type != 1 &&  graph_type != 2){
    printf("\x1b[1;33m\nWHICH GRAPH YOU WANT: \n\n 1:- WHITE GRAPH \n 2:- SIMPLE GRAPH \n\nENTER THE CHOICE:- \x1b[0m");
    scanf("%d", & graph_type);
    if( graph_type==1 ||  graph_type==2)
    plot();
    else{
    printf("\x1b[1;31m\nPLEASE ENTER A VAILED CHOICE...\n\n\x1b[0m");}}
    return;}

void axis(){
    int a=-(48-z), b=-(48-((n/2)*z)), c=-(48-((n/2)*z)),d=-(48-z);
    for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
    if (j==n/2 && i<=n/2)
    {arr[i][j]= b +'0';
    b=b-z;}
    else if(j==n/2 && i>n/2)
    {arr[i][j]=a +'0';
    a=a+z;}
    else if(i==n/2 && j<=n/2){
    arr[i][j]= c +'0';
    c=c-z;}
    else if(i==n/2 && j>n/2)
    {arr[i][j]=d +'0';
    d=d+z;}
    else arr[i][j]=' ';}}
    return;}

int equation(){
    printf("\n\nENTER THE EQATION........................................COMING SOON\n");
    return 0;}

void plot(){
    int x,q,w,y,Grid_size,New_choice=0;          
    if (l==0 || choose_axis ==2){   
    printf("\x1b[1;34m\nWHAT SIZE OF COORDINATE AXIS YOU WANT: \n\n 1:- EXTRA SMALL   \n 2:- SMALL   \n 3:- MEDIUM \n 4:- LARGE  \n\nENTER THE CHOICE:- \x1b[0m");
    scanf("%d",  &Grid_size);
    if(Grid_size ==1) n=15;
    else if(Grid_size == 2) n=31;
    else if(Grid_size == 3) n=71;
    else if (Grid_size == 4) n= 151;
    else{printf("\x1b[1;33m\n\n PRINTING NORMAL SIZE.....\n\n\x1b[0m"); n=51;}
    z=1;
    n=n/z;
    axis();}
    choose_axis = 0;

        if (equation_type==1){
        for(int i=0; i<n; i++){     
        for(int j=0; j<n; j++){
        q= row(j);
        w= column(i);
        for(x=-n; x<=n; x++){
        if(x!=0){
        y = 70*sin(x)/x;                                                       //equation
        if ((q==x) && (w==y) || (w==-y) && (q==x) && (i!=n/2) && (j!=n/2))
        arr[i][j]= '*';}}}}}

    if (equation_type == 2){                              
    for(int i=0; i<n; i++){                
    for(int j=0; j<n; j++){
    x = row(j);
    y = column(i);
    if(x!=0 || y!=0){
    if ( x==y)                                     //equation
    arr[i][j]= '*';}}}}

    if ( graph_type ==1){
    for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
    if (j==n/2 || i==n/2)
    printf("%2d ", arr[i][j]);
    else if(arr[i][j]=='*')
    printf("%c  ", 32);
    else printf("%c  ", 219);}                 
    printf("\n");}}

   else if( graph_type == 2){
   for(int i=0; i<n; i++){
   for(int j=0; j<n; j++){
   if (j==n/2 || i==n/2)
   printf("%2d ", arr[i][j]);
   else if(arr[i][j]=='*')                                                
   printf("%c  ", 219);
   else printf("%c  ", arr[i][j]);}                 
   printf("\n");}}
   l=l+1;
   
    FILE *file;
    int choice;
    time_t now = time(NULL);
    
    printf("\x1b[1;35m\nWould you like to save this graph? \n1:- YES \n2:- NO \nEnter choice: \x1b[0m");
    scanf("%d", &choice);
    if(choice == 1){
    file = fopen("graph.txt", "a");
    if(file == NULL){
    printf("Error: Could not save the graph!\n");} 
    else {
    fprintf(file, "\n--- Plotted at %s ---\n", ctime(&now));
    for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
    fputc(arr[i][j], file);
    fputc(' ', file);}
    fputc('\n', file);}
    fclose(file);
    printf("\x1b[1;35m\n    ===== Your graph has been saved ===== \x1b[0m\n");}}

   while (New_choice !=1 && New_choice !=2){
   printf("\x1b[1;33m\n\n PLEASE ENTER THE CHOICE>>>> \n\n 1:- END THE PROGRAM \n 2:- PLOT ANOTHER GRAPH \n\n ENTER THE CHOICE: \x1b[0m");
   scanf("%d", &New_choice);
   if (New_choice !=1 && New_choice != 2)
   printf("\x1b[1;31m\n\n   PLEASE ENTER A VAILED OPTION>>>>  \n\x1b[0m\n");}
   

   if(New_choice == 2){
   if (choose_axis == 0){
   while (choose_axis !=1 && choose_axis !=2){
   printf("\x1b[1;36m\n\nWould you like to plot next graph on same axis? \n\n 1:- Yes on same axis... \n 2:- No on new axis.....\n PLEASE ENTER THE CHOICE:-  \x1b[0m");
   scanf("%d", &choose_axis);
   if (choose_axis !=1 && choose_axis != 2)
   printf("\x1b[1;31m\n\n   PLEASE ENTER A VAILED OPTION>>>>  \n\x1b[0m\n");}
   ask1();}}
   else
   return;}

int main(){
    printf("\x1b[1;34m\n\n-----------------WELCOME TO THE EQUATION SOLVER AND PATTERN PRINTER PROGRAM---------------------------\n\n\x1b[0m");
    ask1();
    FILE *file;
    int choice;
    char review[500];
    time_t now = time(NULL);
    
    printf("\x1b[1;36m\n\n=== PROGRAM FEEDBACK ===\n");
    printf("\x1b[1;36m\nWould you like to leave a review or suggestion? \n\n 1:- YES \n 2:- NO \n PLEASE ENTER THE CHOICE:-  \x1b[0m");
    scanf("%d", &choice);
    
    if(choice == 1){
    printf("\x1b[1;33mEnter your review/suggestion (max 500 chars):\n\nStar from here >>>>> \x1b[0m");
    scanf(" %[^\n]", review);
        
    file = fopen("review.txt", "a");
    if(file == NULL){
    printf("\x1b[1;31mError: Could not save review!\x1b[0m\n");
    return 0;}
        
    fprintf(file, "\n--- Review at %s ---\n", ctime(&now));
    fprintf(file, "%s\n", review);
        
    fclose(file);
    printf("\x1b[1;32m\nThank you! Your review has been saved.\x1b[0m\n");}

    else printf("\x1b[1;33m\n No problem! Thanks for using the program.\x1b[0m\n");
    return 0;}
