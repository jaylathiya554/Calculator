include<stdio.h>
include<conio.h>
include<stdlib.h>

int main_menu();
int sub_1d();
int sub_2d();
int store();
int m1store();

int lcheck();
int mcheck();

int list_analysis();
// sub menu..
int ldisplay();
int repcount();
int notin();
int check_unique();
int unique_list();
int mini_max();
int mini();
int max();
int evenodd();
int odd();
int even();
int update();
int ascending_descending();
int ascending();
int descending();
int sum();
int rev();

//sub menu...
int display();
int arithmatic_matrix();
int maddition();
int msubtraction();
int mmultiplication();
int transpose();
int right_left_diagonal();
int left_diagnoal();
int right_diagnoal();
int sum_of_row();
int matrix_row_column ();
int lower_upper_traingular();
int determinant();
int sparse_matrix();
int euqal_matrix();
int bugs();
int buge();

int range,element;
int pr[100]={-1090};
int tem[100];
int m1pr[20][20]={-1090};
int m2pr[20][20];
int mpr[20][20];
int row,col,te=0;

int main(){
	main_menu();
	return 0;
}

//data entry
int store(){
	system("cls");
	printf("\nHow many elements do you want to insert into the List ? \n=> ");
	scanf("%d",&range);
	printf("\n");
	for (int i=0;i<range;i++)
	{
		printf(" element-%d: ",i);
		scanf("%d",&pr[i]);
	}
	return 0;
}
int m1store(){
	system("cls");
	printf("input row,column:");
	scanf("%d%*c%d",&row,&col);
	printf("\n\nfirst matirx:......\n\n");
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			printf("element-[%d][%d]:",i,j);
			scanf("%d",&m1pr[i][j]);
		}
		printf("\n");
	}
}
int m2store(){
	printf("\n\nsecound matirx:......\n\n");
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			printf("element-[%d][%d]:",i,j);
			scanf("%d",&m2pr[i][j]);
		}
		printf("\n");
	}
}

int lcheck(){
	if(pr[0] != -1090)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int mcheck(){
	if(m1pr[0][0] != -1090)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
//menu
int main_menu(){
	system("cls");
	int A;
	printf("\n(1) Single Dimension\n(2) Double Dimension\n(0) Exit\n");
	printf("\n\nIn which Dimension you would like to work ?\n=> ");
	scanf("%d",&A);
	switch(A)
	{
		case 0:
		exit(0);
		case 1:
		sub_1d();
		main_menu();
		break;
		case 2:
		sub_2d();
		main_menu();
		break;
		default:
		printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t*********** Error:231aXsb3Q *********\n");
		getch();
		main_menu();
		break;	
	}
	return 0;
}
int sub_1d(){
	system("cls");
	int a;
	printf("\n(1) Store \n(2) display\n(3) List Analysis\n(4) Upadate List\n(5) Set in Order\n(6) Sum of List\n(7) Reverse List\n(0) Back to the Main Menu\n");
	printf("\n\nEnter the number which you want to do from the Singal Dimension menu ?\n=> ");
	scanf("%d",&a);
	switch(a)
	{
		case 0:
		main_menu();
		break;
		case 1:
		store();
		sub_1d();
		break;
		case 2:
		ldisplay();
		sub_1d();
		printf("\nits run...\n");
		break;
		case 3:
		list_analysis();
		sub_1d();
		break;
		case 4:
		update();
		sub_1d();
		break;
		case 5:
		ascending_descending();
		sub_1d();
		break;
		case 6:
		sum();
		sub_1d();
		break;
		case 7:
		rev();
		sub_1d();
		break;
		default:
		printf("*********** Error:231aXsb3Q *********\n");
		getch();
		sub_1d();
		break;
	}
	return 0;
}
int sub_2d(){
	system("cls");
	int a;
	printf("\n(1) Store matrix \n(2) display \n(3) Arithmetic Matrix\n(4) Transpose of Matrix\n(5) Sum of Diagonal\n(6) Sum of Row and Column\n(7) Traingular Matrix\n(8) Determinant of Matrix\n(9) Sparse Matrix\n(10) Equal Matrix\n(0) Back to the Main Menu\n");
	printf("\n\nEnter the number which you want to do from the menu ?\n=> ");
	scanf("%d",&a);
	switch(a)
	{
		case 0:
		main_menu();
		break;
		case 1:
		m1store();
		sub_2d();
		break;
		case 2:
		display();
		getch();
		sub_2d();
		break;
		case 3:
		arithmatic_matrix();
		sub_2d();
		break;
		case 4:
		transpose();
		sub_2d();
		break;
		case 5:
		right_left_diagonal();
		sub_2d();
		break;
		case 6:
		matrix_row_column();
		sub_2d();
		break;
		case 7:
		lower_upper_traingular();
		sub_2d();
		break;
		case 8:
		determinant();
		sub_2d();
		break;
		case 9:
		sparse_matrix();
		sub_2d();
		break;
		case 10:
		euqal_matrix();
		sub_2d();
		break;
		default:
		printf("*********** Error:231aXsb3Q *********\n");
		getch();
		sub_2d();
		break;	
	}
	return 0;
}

// Work on 1D list
int ldisplay(){
	system("cls");
	if(lcheck()){
	printf("Your list : ");
	for(int i=0;i<range;i++){
		printf("%4d",pr[i]);
		if(i<range-1) putchar(',');
	}
	getch();
	}
	else{
		printf("\nplease enter your list element from selecting 1 .....\n");
		getch();
	}
	return 0;
}
int list_analysis(){
	system("cls");
	if(lcheck()){
		int c;
		printf("\n(1) Repeation of elements. \n(2) Is in or not. \n(3) Check element is unique or not. \n(4) Get unique List.\n(5) Get Maximum\\minimum element.\n(6) Odd\\Even List.\n(0) Back.\n\nEnter the number which you want to do from the list analysis menu ?\n=> ");
		scanf("%d",&c);
		switch (c){
			case 1:
			repcount();
			list_analysis();
			break;
			case 2:
			notin();
			getch(); 
			list_analysis();
			break;
			case 3:
			check_unique();
			list_analysis();
			break;
			case 4:
			unique_list();
			list_analysis();
			break;
			case 5:
			mini_max();
			list_analysis();
			break;
			case 6:
			evenodd();
			evenodd();
			list_analysis();
			break;
			
			case 0:
			sub_1d();
			break;
			default:
			printf("***********Error:231aXsb3Q*********\nUndifine User input.");
			list_analysis();
		}	
	}
	else{
		printf("please enter your list element from selecting 1 .....\n");
	}
	getch();
	return 0;
}
int update(){
	system("cls");
	if(lcheck())
	{
		int range2=0;
		printf("\n");
		for (int j=0; j<range; j++)
		{
			printf("%3d",pr[j]);
			if(j<range-1)
			{
				putchar(',');
			}
		}
		printf("\n\nHow many elements you want to add:");
		scanf("%d",&range2);
		printf("\nInput %d elements in the list :\n",range2);
		for(int i=range; i<range+range2; i++)
		{
			printf("elements - %d : ",i);
			scanf("%d",&pr[i]);
		}
		range=range+range2;
		printf("\nfinal list:");
		for (int j=0; j<range; j++)
		{
			printf("%3d",pr[j]);
			if(j<range-1)
			{
				putchar(',');
			}
		}
	}
	else
	{
		printf("please enter your list element from selecting 1 .....\n");
	}
	getch();
	return 0;
}
int ascending_descending(){
	system("cls");
	if(lcheck())
	{
		int c;
		printf("\n(1) Ascending\n(2) Descending\n(0) Back.\n\nEnter your selection=>");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
			system("cls");
			ascending();
			getch();
			ascending_descending();
			break;
			case 2:
			system("cls");
			descending();
			getch();
			ascending_descending();
			break;
			case 0:
			sub_1d();
			break;
			default:
			system("cls");
			printf("***********Error:231aXsb3Q*********\nUndifine User input.");
			getch();
			ascending_descending();
		}	
	}
	else
	{
		printf("\nplease enter your list element from selecting 1 .....\n");
		getch();
	}
	return 0;
}
int sum(){
	system("cls");
	if(lcheck())
	{
		int sum=0;
		for (int j=0;j<range;j++)
		{
			sum=sum+pr[j];
		}
		printf("\nSum of all elements stored in the list is :%4d\n",sum);
	}
	else
	{
		printf("\nplease enter your list element from selecting 1 .....\n");
	}
	getch();
	return 0;
}
int rev(){
	system("cls");
	if (lcheck()){
	printf("\nReverse List:");
	for (int j=range-1;j>=0;j--) 
	{
		printf("%3d",pr[j]);
		if(j<range && j!=0)
		{
			putchar(',');
		}
	}
	printf("\n");
	}
	else
	{
		printf("\nplease enter your list element from selecting 1 .....\n");
	}
	getch();
	return 0;
}

//Work on 2D list
int display(){
	system("cls");
    for (int i = 0; i < row; i++)
    {
		printf("|");
        for (int j = 0; j <col; j++)
        {
            printf("%3d", m1pr[i][j]);
        }
        printf(" |\n");
    }
	return 0;
}

int arithmatic_matrix(){
	system("cls");
	if(mcheck())
	{
		int c;
		printf("\n(1) Addition\n(2) Subtraction\n(3) Multiplication \n(0) Back\n\nEnter your selection=>");
		scanf("%d",&c);
		switch (c)
		{
			case 1:
			maddition();
			arithmatic_matrix();
			break;
			case 2:
			msubtraction();
			arithmatic_matrix();
			break;		
			case 3:
			mmultiplication();
			arithmatic_matrix();
			break;	
			
			case 0:
			sub_2d();
			break;		
			default:
			printf("***********Error:231aXsb3Q*********\nUndifine User input.");
			arithmatic_matrix();
		}
	}
	else
	{
		printf("\nplease enter your list element from selecting 1 .....\n");
	}
	getch();
	return 0;
}
int transpose(){
	system("cls");
	if (mcheck())
	{
		int trans[row][col];
		for (int i = 0; i < row; i++){
			for (int j = 0; j < col; j++) {
				trans[j][i] = m1pr[i][j];
			}
		}
		// Displaying the transpose of matrix a
		printf("\nTranspose of the matrix:\n");
		for (int i = 0; i < col; i++)
		{
			printf("|");
			for (int j = 0; j <row; j++) 
			{
				printf("%3d", trans[i][j]);
			}
			printf(" |\n");
		}
		getch();
		return 0;
	}
	else
	{
		printf("\nplease enter your list element from selecting 1 .....\n");
	}
	getch();
	return 0;
}
int right_left_diagonal(){
	system("cls");
	if(mcheck())
	{
		int c;
		printf("\n(1) Right diagonal\n(2) Left diagonal\n(0) Back.\n\nEnter your selection=>");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
			system("cls");
			right_diagnoal();
			right_left_diagonal();
			break;
			case 2:
			system("cls");
			left_diagnoal();
			right_left_diagonal();
			break;
			case 0:
			sub_2d();
			break;
			default:
			system("cls");
			printf("***********Error:231aXsb3Q*********\nUndifine User input.");
			getch();
			right_left_diagonal();
		}
	}
	else
	{
		printf("\nplease enter your list element from selecting 1 .....\n");
	}	
	getch();
	return 0;
}
int matrix_row_column (){
	system("cls");
	if(mcheck()){
		sum_of_row();
	}
	else{
		printf("\nplease enter your list element from selecting 1 .....\n");
	}
	getch();
	return 0;
}
int lower_upper_traingular(){
	system("cls");
	if(mcheck())
	{
		int c;
		printf("\n(1) Lower traingular\n(2) upper traingular\n(0) Back.\n\nEnter your selection=>");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
			system("cls");
			for (int i = 0; i < row; i++){
				printf("|");
				for (int j = 0; j <col; j++){
				if(i>=j){
				printf("%3d", m1pr[i][j]);}
				else{
				printf("%3d",0);}}
				printf(" |\n");}
			getch();
			lower_upper_traingular();
			break;
			case 2:
			system("cls");
			for (int i = 0; i < row; i++){
				printf("|");
				for (int j = 0; j <col; j++){
				if(i<=j){
				printf("%3d", m1pr[i][j]);}
				else{
				printf("%3d",0);}}
				printf(" |\n");}
			getch();
			lower_upper_traingular();
			break;
			case 0:
			sub_2d();
			break;
			default:
			system("cls");
			printf("***********Error:231aXsb3Q*********\nUndifine User input.");
			getch();
			right_left_diagonal();
		}
	}
	else
	{
		printf("\nplease enter your list element from selecting 1 .....\n");
	}
	getch();
	return 0;
}
int determinant(){
	system("cls");
	if(mcheck())
	{
		printf("\nThis feature is not avilable yet\nThis feature comming soon\n");
	}
	else
	{
		printf("\nplease enter your list element from selecting 1 .....\n");
	}
	getch();
	return 0;
}
int sparse_matrix(){
	system("cls");
	if(mcheck())
	{
		int counter=0;
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				if(m1pr[i][j]==0){
					++counter;
				}
			}
		}
		if(counter>((row*col)/2))
		{
			printf("given matrix is sparsh matrix\n");
		}
		else
		{
			printf("given matrix is not sparsh matrix\n");
		}
	}
	else
	{
		printf("\nplease enter your list element from selecting 1 .....\n");
	}
	getch();
	return 0;
}
int euqal_matrix(){
	system("cls");
	if(mcheck()){
	int r1,c1,r2,c2,flag=0;
	r1=row;
	c1=col;
	printf("input row,column:");
	scanf("%d%*c%d",&r2,&c2);
	printf("Input elements in the second matrix :\n");
       for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&m2pr[i][j]);}}
	   if(r1 == r2 && c1 == c2){
		   flag=1;
			for(int i=0; i<r1; i++){
				for(int j=0; j<c2; j++){
				if(m1pr[i][j] != m2pr[i][j]){
					flag = 0;
					break;}}}}
    if(flag == 1 ){
	printf("\nThey are equal.\n\n");}
    else{
	printf("\nThey are not equal\n\n");}
	}
	else{
		printf("\nplease enter your list element from selecting 1 .....\n");}
	getch();
	return 0;
}

//load work

// list_anaylais work load
int repcount(){
	system("cls");
	int flag;
	printf("\n");
	for (int i=0;i<range;i++)
	{
		tem[i]=0;
	}
	printf("\n");
	for (int element=0;element<range;element++)
	{
		flag=0;
		for (int i=0;i<range;i++)
		{
			if(pr[element]==tem[i])
			{
				flag++;
				break;
			}	
		}
		if (flag==0)
		{
			for (int j=element;j<range;j++)
			{
				if (pr[element]==pr[j])
				{
					tem[element]=pr[element];
					flag++;
				}
				if(j==range-1)  
				{
					printf("\t%d is repeated %d times\n",pr[element],flag);
				}
			}
		}
	}
	getch();
	return 0;
}
int notin(){
	system("cls");
	printf("\n\n Which number do you want to check that is in the list or not ?\n=> ");
	scanf("%d",&element);
	int flag1=0;
	for (int j=0;j<range;j++)
	{
		if(element==pr[j])
		{
			flag1++;
		}
	}
	if(flag1>0)
	{
		printf("\n\n=> Element %d is in list %d times\n\n",element,flag1);
		return 1;
	}
	else
	{
		printf("\n\n=> Element %d is not in in list\n\n",element);
		return 0;
	}
	getch();
	return 0;
}
int check_unique(){
	system("cls");
	int flag1=0;
	printf("\n Enter element : ");
	scanf("%d",&element);

	for (int j=0;j<range;j++)
	{
		if(element==pr[j])
		{
			flag1++;
		}
	}
	if(flag1>0)
	{
		if(flag1==1)
		{
			printf("\n\n=> %d is unique number of the list\n\n",element);
		}
		else
		{
			printf("\n\n=> %d is not unique number of the list\n\n",element);
		}
	}
	else
	{
		printf("\n\n\n\t*********** Error : 694aXsb3Q *********\n\tPlease enter those number which is in list\n\n");
		printf("\n\n Your list is :");
		for (int i=0;i<range;i++)
		{
			printf("%d",pr[i]);
			if(i<range-1)
			{
				putchar(',');
			}
		}
	}
	getch();
	return 0;
}
int unique_list(){
	system("cls");
	int unique[100];
	int flag,c=0;
	printf("\n");
	for (int i=0;i<range;i++)
	{
		tem[i]=0;
	}
	printf("\n");
	for (int element=0;element<range;element++)// e=0,range=17 
	{
		flag=0;
		for (int i=0;i<range;i++) // fillter
		{
			if(pr[element]==tem[i])// e=0 ,/, i=0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17
			{
				flag++;
				break;
			}	
		}
		if (flag==0)
		{
			for (int j=element;j<range;j++)
			{
				if (pr[element]==pr[j])
				{
					tem[element]=pr[element];
					flag++;
				}
				if(j==range-1 && flag==1)  
				{
					unique[c++]=pr[element];
				}
			}
		}
	}
	printf("\n Unique elements are :");
	for (int u=0;u<c;u++)
	{
		printf("%3d",unique[u]);
		if(u<c-1){
			putchar(',');
		}
	}
	printf("\n");
	getch();
	return 0;
}
int mini_max(){
	system("cls");
	int c;
	printf("\n(1) Minimum \n(2) Maximum\n(0) Back\n\nEnter the number which you want to do from the menu ?\n=>");
	scanf("%d",&c);
	switch (c)
	{
		case 1:
		mini();
		mini_max();
		break;
		
		case 2:
		max();
		mini_max();
		break;
		
		case 0:
		list_analysis();
		break;
	}
	getch();
	return 0;
}
int evenodd(){
	if(lcheck()){
	system("cls");
	int n=0;
	printf("\n\n 1: Even number\n 2: Odd number\n 0: Back\n\n Your entered number is:- ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			system("cls");
			even();
			getch();
			evenodd();
			break;
		case 2:
			system("cls");
			odd();
			getch();
			evenodd();
			break;
		case 0:
			list_analysis();
			break;
		default:
			printf(" Wrong Input...\n");
			getch();
			evenodd();
	}
	}
	else
	{
		printf("\nplease enter your list element from selecting 1 .....\n");
	}
	return 0;
}
int even(){
	display();
	printf("\n\n\n");
	int flag,count=0;
	for(int i=0;i<range;i++)
	{
		tem[i]=0;
	}
	printf("\n even numbers are: ");
	for(int i=0;i<range;i++)
	{
		flag=0;
		element=pr[i];
		for(int j=0;j<range;j++){
			if(element==tem[j]){
				flag=1;
				break;}
		}
		if(flag==0){
			if(element%2==0)
				{
					if(count>0){ 
					putchar(',');}
					printf("%3d",element);
					tem[i]=element;
					count++;}
				}
	}

	return 0;
}
int odd(){
	display();
	printf("\n\n\n");
	int flag,count=0;
	for(int i=0;i<range;i++)
	{
		tem[i]=0;
	}
	printf("\n Odd numbers are:- ");
	for(int i=0;i<range;i++)
	{
		flag=0;
		element=pr[i];
		for(int j=0;j<range;j++){
			if(element==tem[j]){
				flag=1;
				break;}
		}
		if(flag==0){
			if(element%2!=0)
				{
					if(count>0){ 
					putchar(',');}
					printf("%3d",element);
					tem[i]=element;
					count++;}
				}
	}

	return 0;
}
int ascending(){
	int tem=0;
	for(int i=0;i<range;i++){
		for(int j=i+1;j<range;j++){
			if(pr[j]<pr[i]){
				tem=pr[i];
				pr[i]=pr[j];
				pr[j]=tem;
			}
		}
	}
	printf("\n\nList shorted in Ascending order : \n");
	for(int i=0;i<range;i++){
		printf("%4d",pr[i]);
		if(i<range-1){
			putchar(',');
		}
	}
	return 0;
}
int descending(){
	int tem=0;
	for(int i=0;i<range;i++){
		for(int j=i+1;j<range;j++){
			if(pr[j]>pr[i]){
				tem=pr[i];
				pr[i]=pr[j];
				pr[j]=tem;
			}
		}
	}
	printf("\n\nList shorted in Descending order : \n");
	for(int i=0;i<range;i++){
		printf("%4d",pr[i]);
		if(i<range-1){
			putchar(',');
		}
	}
	return 0;
}

// mini_max work load
int mini(){
	system("cls");
	int mini=0;
	mini=pr[1];
	for(int i=0;i<range;i++)
	{
		if(mini>pr[i])
		{
			mini=pr[i];
		}
	}
	printf("\n Minimum element of list is :%4d\n",mini);
	getch();
	return 0;
}
int max(){
	system("cls");
	int max=pr[1];
	for(int i=0; i<range; i++)
	{
		if(max<pr[i])
		{
			max=pr[i];
		}	
	}
	printf("\n Maximum element of list is :%4d\n",max);
	getch();
	return 0;
}

// arithmatic_matrix
int maddition(){
	system("cls");
	m2store();
	printf("\n\t\t\tMatrix is %dX%d\n\n",row,col);
	for (int i=0;i<row;i++)
	{
		printf("%3c",'|');
		for (int j=0;j<col;j++)
		{
			printf("%3d",m1pr[i][j]);
		}
		printf("%3c",'|');
		if(i==1)
		{
			printf("%3c",'+');
		}
		else
		{ 
			printf("%3c",' ');
		}
		printf("%3c",'|');
		for (int j=0;j<col;j++)
		{
			printf("%3d",m2pr[i][j]);
		}
		printf("%3c",'|');
		if(i==1)
		{
			printf("%3c",'=');
		}
		else
		{ 
			printf("%3c",' ');
		}
		printf("%3c",'|');
		for (int j=0;j<col;j++)
		{
			mpr[i][j]=m1pr[i][j]+m2pr[i][j];
			printf("%3d",mpr[i][j]);
		}
		printf("%3c",'|');
		printf("\n");
	}
	getch();
	return 0;
}
int msubtraction(){
	system("cls");
	m2store();
	printf("\n\t\t\tMatrix is %dX%d\n\n",row,col);
	for (int i=0;i<row;i++)
	{
		printf("%3c",'|');
		for (int j=0;j<col;j++)
		{
			printf("%3d",m1pr[i][j]);
		}
		printf("%3c",'|');
		if(i==1)
		{
			printf("%3c",'-');
		}
		else
		{ 
			printf("%3c",' ');
		}
		printf("%3c",'|');
		for (int j=0;j<col;j++)
		{
			printf("%3d",m2pr[i][j]);
		}
		printf("%3c",'|');
		if(i==1)
		{
			printf("%3c",'=');
		}
		else
		{ 
			printf("%3c",' ');
		}
		printf("%3c",'|');
		for (int j=0;j<col;j++)
		{
			mpr[i][j]=m1pr[i][j]-m2pr[i][j];
			printf("%3d",mpr[i][j]);
		}
		printf("%3c",'|');
		printf("\n");
	}
	getch();
	return 0;
}
int mmultiplication(){
	system("cls");
	int column1=0;
	int row1=0;
	printf("Your first matrix is (%d x %d) . . . \n\n So, your second matrix's column must be same as your first matrix's row\n\n",row,col);
	printf("Enter the number of Row:");
	scanf("%d",&row1);
	printf("Enter the number of Column:");
	scanf("%d",&column1);
	if(row==column1){
		printf("\n\nSecond Matirx:......\n\n");
		for (int i=0;i<row1;i++){
			for (int j=0;j<column1;j++){
				printf("[%d] [%d]:",i,j);
				scanf("%d",&m2pr[i][j]);
			}
			printf("\n");
		}
		for(int i=0; i<row; i++){
		for(int j=0; j<column1; j++){
			int sum=0;
			for(int r=0; r<col; r++){
				sum=sum+(m1pr[i][r]*m2pr[r][j]);
				mpr[i][j]=sum;
			}
		}
	}
	printf("\n\n");
	for(int i=0; i<row; i++){
		for(int j=0; j<column1; j++){
			printf("%3d",mpr[i][j]);
		}
		printf("\n");
	}
	getch();
	}	
	else{
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t*********** Error:231aXsb3Q *********\n");
		getch();
	}
	return 0;
}

//sum of left and right diagoal...
int left_diagnoal(){
	display();
	int sum=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<row;j++)
		{
			if(i==j)
			{
				sum=sum+m1pr[i][j];
				break;
			}
		}
	}
	printf("\n Sum of left_diagnoal is :- %d\n",sum);
	getch();
	return 0;
}
int right_diagnoal(){
	display();
	int sum=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<row;j++)
		{
			if(i+j==row-1)
			{
				sum=sum+m1pr[i][j];
			}
		}
	}
	printf("\n Sum of right_diagnoal is :- %d\n",sum);
	getch();
	return 0;
}

//sum of row and colummn matrix...
int sum_of_row(){
	int rsum[10],csum[10];
	for(int i=0;i<row;i++)
	{
		rsum[i]=0;
		for(int j=0;j<row;j++)
		{
			rsum[i]=rsum[i]+m1pr[i][j];
		}
	}
	for(int i=0;i<row;i++)
	{
		csum[i]=0;
		for(int j=0;j<row;j++)
		{
			csum[i]=csum[i]+m1pr[j][i];
		}
	}
	printf("\n\n Sum of Rows and Cols...\n\n");
	for(int i=0;i<row;i++)
	{
		printf(" |");
		for(int j=0;j<row;j++)
			printf("%3d ",m1pr[i][j]);
		printf(" | ");
		printf("-->%4d",rsum[i]);
		printf("\n");
	}
	for(int j=0;j<row;j++){
		printf("%4s","|");		
		}
	printf("\n");
	for(int j=0;j<row;j++){		
		printf("%4s","V");
		}
	printf("\n");
	for(int j=0;j<row;j++){
		printf("%4d",csum[j]);
		}
	printf("\n");
	return 0;	
}

// time pass work 
int bugs(){
	printf("\n\n********* de-bug start **************\n\n");
}
int buge(){
	printf("\n\n********* de-bug end **************\n\n");
}