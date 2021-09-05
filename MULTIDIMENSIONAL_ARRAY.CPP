//This code is for 3d array & it takes values from user that how many rows, columns, 2d arrays & values for filling a 3d array
//& it displays out no. of elements, address of every element, & it displays out the how the row major order sequence & column major order seqeunce follows up in an array. 
//After the code, there's an output displayed too!

#include<iostream.h>
#include<conio.h>
void main()
{
 int multi_dim[10][10][10];
 int i,j,k,a,b,c;
 int l,m,n;
 clrscr();
 cout<<"Fill the value for question mark, [?][][]"<<endl;
 cin>>l;
 cout<<"Fill the value for question mark, [][?][]"<<endl;
 cin>>m;
 cout<<"Fill the value for question mark, [][][?]"<<endl;
 cin>>n;
 cout<<"Total number of elements = "<<l*m*n<<endl;
 cout<<"Now, enter the values in 3d array for row major order "<<endl;
 for(i=0;i<l;i++)
 {
 for(j=0;j<m;j++)
 {
 for(k=0;k<n;k++)
 {
  cin>>multi_dim[i][j][k];
  }
  }
  }                                                  cout<<endl;
  cout<<""<<endl;
 cout<<"PRINTING THE ARRAY & ADDRESS OF EVERY ELEMENT"<<endl;
  for(i=0;i<l;i++)
 {
 for(j=0;j<m;j++)
 {
 for(k=0;k<n;k++)
 {
 cout<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<" = "<<multi_dim[i][j][k]<<endl;
 cout<<"Address of "<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<" = "<<&multi_dim[i][j][k]<<endl;
 }}}

 cout<<"Now, enter the same values in 3d array for column major order  "<<endl;
 for(a=0;a<l;a++)
 {
 for(c=0;c<m;c++)
 {
 for(b=0;b<n;b++)
 {
  cin>>multi_dim[a][b][c];
  }
  }
  }                                                  cout<<endl;
  cout<<""<<endl;
 cout<<"PRINTING THE ARRAY & ADDRESS OF EVERY ELEMENT"<<endl;
  for(a=0;a<l;a++)
 {
 for(c=0;c<m;c++)
 {
 for(b=0;b<n;b++)
 {
 cout<<"["<<a<<"]"<<"["<<b<<"]"<<"["<<c<<"]"<<" = "<<multi_dim[a][b][c]<<endl;
 cout<<"Address of "<<"["<<a<<"]"<<"["<<b<<"]"<<"["<<c<<"]"<<" = "<<&multi_dim[a][b][c]<<endl;
 }}}

  getch();
  }

/* OUTPUT
Fill the value for question mark, [?][][]

1

Fill the value for question mark, [][?][]

2

Fill the value for question mark, [][][?]

3

Total number of elements = 6

Now, enter the values in 3d array for row major order 

1

2

3

4

5

6





PRINTING THE ARRAY & ADDRESS OF EVERY ELEMENT

[0][0][0] = 1

Address of [0][0][0] = 0x7ffc15f08900

[0][0][1] = 2

Address of [0][0][1] = 0x7ffc15f08904

[0][0][2] = 3

Address of [0][0][2] = 0x7ffc15f08908

[0][1][0] = 4

Address of [0][1][0] = 0x7ffc15f08928

[0][1][1] = 5

Address of [0][1][1] = 0x7ffc15f0892c

[0][1][2] = 6

Address of [0][1][2] = 0x7ffc15f08930

Now, enter the same values in 3d array for column major order  

1

2

3

4

5

6





PRINTING THE ARRAY & ADDRESS OF EVERY ELEMENT

[0][0][0] = 1

Address of [0][0][0] = 0x7ffc15f08900

[0][1][0] = 2

Address of [0][1][0] = 0x7ffc15f08928

[0][2][0] = 3

Address of [0][2][0] = 0x7ffc15f08950

[0][0][1] = 4

Address of [0][0][1] = 0x7ffc15f08904

[0][1][1] = 5

Address of [0][1][1] = 0x7ffc15f0892c

[0][2][1] = 6

Address of [0][2][1] = 0x7ffc15f08954

*/
