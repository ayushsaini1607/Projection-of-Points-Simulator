#include<stdio.h>
#include<process.h>

void quad1();
void quad2();
void quad3();
void quad4();

int main()
{
	int ch;
	printf("\nChoose: ");
	printf("\n1. Point above HP and in front of VP (1st Quadrant) : ");
	printf("\n2. Point above HP and behind VP (2nd Quadrant) :");
	printf("\n3. Point below HP and behind VP (3rd Quadrant) :");
	printf("\n4. Point below HP and in front of VP (4th Quadrant) :");
	printf("\nEnter your choice: ");
	scanf("%d",&ch);
	printf("\n\n\n\nALL DIMENSIONS IN CM AND SINGLE DIGIT DIMENSIONS ONLY!\n\n\n\n");
	switch(ch)
	 {
	 	case 1:
	 		quad1();
	 	    break;
	 	case 2:
	 		quad2();
	 		break;
	 	case 3:
	 		quad3();
	 		break;
	 	case 4:
	 		quad4();
	 		break;
	 	default:
	 		printf("\n Error! Input Mismatch!");
	 		exit(1);
	 }
}

void quad1()
{
	int h,v;
 printf("\n Projections of a point lying in first quadrant: ");
 printf("\n All dimensions in cm(enter only integer values!");
 printf("\n Enter dimensions above HP: ");
 scanf("%d",&h);
 printf("\n Enter dimensions in front of VP: ");
 scanf("%d",&v);
 printf("\n\n\n");
 char arr[h+v+2][150];                  //creation of array to store projections
 int i,j;
 for(i=0;i<(h+v+2);i++)                   //alloting blank spaces to remove garbage input
   for(j=0;j<150;j++)
      arr[i][j]=' ';
 for(i=0;i<(h+v+1);i++)                   //putting null character at the end of each line of array of strings
    arr[i][149]='\0';
 for(i=0;i<149;i++)                     //drawing XY line
     arr[h][i]='_';
 for(i=1;i<(h+v+1);i++)                    //drawing projection
     arr[i][70]='|';
 
 
 //dimensioning above xy

 int temp;
 for(i=1;i<=h;i++)
     arr[i][55]='|';
 temp=h/2;
 if(temp%2!=0)
     temp++;
  arr[temp][55]=h+48;         //assigning ascii value of integer dimensions
  arr[0][55]=94;             //assigning arrowhead ascii value

//dimensioning below xy

 temp=h;
 for(i=h+1;i<=(h+v);i++)
    arr[i][55]='|';
 temp+=v/2;
 if((v/2)%2!=0)
    temp++;
 arr[temp][55]=v+48;       //assigning ascii value of integer dimensions
 arr[h+v+1][55]=94;        //assigning arrowhead ascii value
 
 //assigning top view and front view
 arr[0][70]='a';
 arr[0][71]=39;
 arr[h+v+1][70]='a';
 for(i=0;i<(h+v+2);i++)
  {
   for(j=0;j<150;j++)                       //printing the projection
    {
      printf("%c",arr[i][j]);
    }
   printf("\n");
  }
}

void quad2()
{
	int h,v,k,i,j;
	printf("\n Projections of a point lying in second quadrant: ");
    printf("\n All dimensions in cm(enter only integer values!");
    printf("\n Enter dimensions above HP: ");
    scanf("%d",&h);
    printf("\n Enter dimensions behind VP: ");
    scanf("%d",&v);
    printf("\n\n\n");
    if(h>=v)
      k=h+2;                           //alloting size of array according to maximum dimensions
    else 
      k=v+2;
    char arr[k][150];                  //creation of array to store projection
    for(i=0;i<k;i++)
       for(j=0;j<149;j++)            //alloting blank spaces to remove garbage value
           arr[i][j]=' ';
    for(i=0;i<k;i++)                   //putting null character at the end of each line of array of strings
        arr[i][149]='\0';
    for(i=0;i<149;i++)                     //drawing XY line
        arr[k-1][i]='_';
    for(i=(k-v);i<k;i++)
     {
     	arr[i][50]='|';
     }
    for(i=(k-h);i<k;i++)
      {
      	 arr[i][100]='|';
      }
     
	 int temp; 
    //dimensioning above xy line
    for(i=k-v;i<k;i++)
	   arr[i][40]='|';
	arr[k-v-1][40]=94;
	
	for(i=k-h;i<k;i++)
	   arr[i][110]='|'; 
	arr[k-h-1][110]=94;
	
	
    //alloting top view and front view
    arr[k-v-1][50]='a';
    if(h>=v)
      {
        arr[k-v-2][100]='a';
        arr[k-v-2][101]=39;
        temp=k-(v/2);
        if(v%2!=0)
          temp--;
        arr[temp][40]=v+48;
        temp=k-(h/2);
        if(h%2!=0)
          temp--;
        arr[temp][110]=h+48;
      }
    else
      {
      	arr[k-v][100]='a';
      	arr[k-v][101]=39;
      	temp=k-(h/2);
      	if(v%2!=0)
      	   temp--;
      	arr[temp][40]=v+48;
      	temp=k-(v/2);
      	if(h%2!=0)
		  temp--;
      	arr[temp][110]=h+48;
      }
     for(i=0;i<k;i++)
     {
        for(j=0;j<150;j++)                       //printing the projection
         {
            printf("%c",arr[i][j]);
         }
       printf("\n");
     }
}

void quad3()
{
	int h,v,i,j;
	printf("\n Projections of a point lying in third quadrant: ");
    printf("\n All dimensions in cm(enter only integer values!");
    printf("\n Enter dimensions below HP: ");
    scanf("%d",&h);
    printf("\n Enter dimensions behind VP: ");
    scanf("%d",&v);
    printf("\n\n\n");
    char arr[h+v+2][150];
    for(i=0;i<(h+v+2);i++)                   //alloting blank spaces to remove garbage input
    for(j=0;j<150;j++)
       arr[i][j]=' ';
    for(i=0;i<(h+v+2);i++)                   //putting null character at the end of each line of array of strings
       arr[i][149]='\0';
    if(h>=v)
    {
    for(i=0;i<149;i++)                     //drawing XY line
       arr[v][i]='_';
    for(i=1;i<(h+v+1);i++)                    //drawing projection
       arr[i][70]='|';
       
    //assigning " a' " to the projection
    
	arr[i][70]='a';
    arr[i][71]=39;
    }
    
    else
    {
     for(i=0;i<149;i++)                     //drawing XY line
        arr[h+1][i]='_';
     for(i=0;i<(h+v+1);i++)                    //drawing projection
        arr[i][70]='|';	
        
    //assigning " a' " to the projection
    
     arr[i][70]='a';
     arr[i][71]=39;
    }
    arr[0][70]='a';                            //assigning 'a' to the projection
    
    //dimensioning above xy line
    int temp;
    for(i=1;i<=h;i++)
       arr[i][55]='|';
    temp=v/2;
    if(temp%2!=0)
     temp++;
    arr[temp][55]=v+48;         //assigning ascii value of integer dimensions
    arr[0][55]=94;             //assigning arrowhead ascii value

    //dimensioning below xy

    temp=v;
    for(i=h+1;i<=(h+v);i++)
    arr[i][55]='|';
    temp+=h/2;
    if((v/2)%2!=0)
       temp++;
    arr[temp][55]=h+48;       //assigning ascii value of integer dimensions
    arr[h+v+1][55]=94;        //assigning arrowhead ascii value
    for(i=0;i<(h+v+2);i++)
      {
         for(j=0;j<150;j++)                       //printing the projection
           {
             printf("%c",arr[i][j]);
           }
         printf("\n");
      }
}

void quad4()
{
	int h,v,k,i,j,temp;
	printf("\n Projections of a point lying in fourth quadrant: ");
    printf("\n All dimensions in cm(enter only integer values!");
    printf("\n Enter dimensions below HP: ");
    scanf("%d",&h);
    printf("\n Enter dimensions in front of VP: ");
    scanf("%d",&v);
    printf("\n\n\n");
    if(h>=v)
      k=h+2;                           //alloting size of array according to maximum dimensions
    else 
      k=v+2;
    char arr[k][150];                   //creation of array to store projection
	for(i=0;i<k;i++)
       for(j=0;j<149;j++)            //alloting blank spaces to remove garbage value
           arr[i][j]=' ';
    for(i=0;i<k;i++)                   //putting null character at the end of each line of array of strings
        arr[i][149]='\0';
    for(i=0;i<149;i++)                     //drawing XY line
        arr[0][i]='_'; 
	for(i=1;i<(k-1);i++)
     {
     	arr[i][50]='|';
     }
    if(h==v)
      {
      	for(i=1;i<(k-1);i++)
         {
     	   arr[i][100]='|';
         }
        
        //alloting front and top view if h and v are equal
        arr[k-1][50]='a';
        arr[k-1][100]='a';
        arr[k-1][101]=39;
        
        //dimensioning front and top views
        
        for(i=1;i<k-1;i++)
         {
         	arr[i][40]='|';
         	arr[i][110]='|';
         }
        arr[i][40]=94;
        arr[i][110]=94;
        temp=h/2;
        if(h%2!=0)
          temp++;
        arr[temp][40]=h+48;
        arr[temp][110]=h+48;
        
      }
    else if(h>v)
      {
         for(i=1;i<=v;i++)
          {
     	    arr[i][100]='|';
          }
      }
    else if(v>h)
     {
     	for(i=1;i<=h;i++)
          {
     	    arr[i][100]='|';
          }	
     }
     
     //alloting top view and front view if v and h are different
     if(h!=v)
      {
      	 if(h>v)
      	  {
      	  	arr[v+1][100]='a';	
		    arr[k-1][50]='a';
            arr[k-1][51]=39;
            for(i=1;i<k-1;i++)
               arr[i][40]='|';	
            arr[i][40]=94;
            for(i=1;i<=v;i++)
               arr[i][110]='|';
            arr[i][110]=94;
               
            temp=h/2;
            if(h%2!=0)
               temp++;
            arr[temp][40]=h+48;
            
			temp=v/2;
            if(v%2!=0)
              temp++;
            arr[temp][110]=v+48;  
      	  }
      	  else if(v>h)
      	   {
      	  	arr[h+1][100]='a';
            arr[h+1][101]=39;
            arr[k-1][50]='a';
            for(i=1;i<k-1;i++)
               arr[i][40]='|';	
            arr[i][40]=94;
            for(i=1;i<=h;i++)
               arr[i][110]='|';
            arr[i][110]=94;
               
            temp=v/2;
            if(v%2!=0)
               temp++;
            arr[temp][40]=v+48;
            
			temp=h/2;
            if(h%2!=0)
              temp++;
            arr[temp][110]=h+48;  
      	   }
      	   
      }
     for(i=0;i<k;i++)
     {
        for(j=0;j<150;j++)                       //printing the projection
         {
            printf("%c",arr[i][j]);
         }
       printf("\n");
     }
}

