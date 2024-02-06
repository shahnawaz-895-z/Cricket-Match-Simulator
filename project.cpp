#include<iostream>
#include<fstream>
#include<string>
#include<ctime>
using namespace std;

/*
#include<iostream>

#include<fstream>
using namespace std;
int main()
{ int a;
  cin >>a;
  fstream file;
  file.open("myfile.txt");
  if(!file)
  {
  
    cout<<"Due to error file is not created "<<endl;
    return 0;
  }
  
  
  file<<a;  
  file.close();
   return 0;
   }


*/



void task( string pakistan [], string india [] , int x) ///function for task
{ 

 int s=11;


  
 cin.get();
 system("clear");
 
 
 if (x==0)
 {
 cout<<"____________________________________________________________________________|"<<endl;

 cout<<"\t\t\tResult of task is : "<<x<<endl;
 cout<<"\t\t\tpakistan bat first : "<<endl;
 cout<<"____________________________________________________________________________|"<<endl;
 
  cout<<endl<<"\t\t\tPlayers of batting team are ::: "<<endl<<endl;
 for (int i=0 ; i<s ;  i++)
  { 
   cout<<pakistan[i]<<"\t\t";
   }
    cin.get();
   system("clear");
   }
if (x==1)
 {
   cout<<"\t\t\tResult of task is : "<<x<<endl;
   cout<<"\t\t\tPlayer of indian bat first "<<endl;
   
    cout<<endl<<"\t\t\tPlayers of batting team  are  :::"<<endl<<endl;;  
 for (int i=0 ; i<s ;  i++)
  { 
   cout<<india[i]<<"\t\t";
   
   }
    cin.get();
   system("clear");
   
 }
 }
 
 void balling(string bowler[], int bsize)
{//cout << "bowler  are : "<<endl;
 for( int i=0 ; i< bsize ; i++)
 {
  cout<<"\t"<<bowler[i]<<"\t";
  }
  cout<<endl;
}
  
 
 void drawBatingboad(string selection[], int score, int total_score[],int ball_face[],int ball_miss[],int four[],int six[],float strike_rate[],int i )//for bating board
{ // int a=-1;
     cout<<selection[i]<<"\t";
     string n="out";
        if (score == -1)  
	{
	 cout<<n ;
	}
     else if(ball_face[i]==0 )
	{
	cout<<"NA";
	}
	else
	 {
	 cout<<score;
	 }
	cout<<"\t"<<total_score[i]<<"\t"<<ball_face[i]<<"\t";
	cout<<ball_miss[i]<<"\t"<<four[i]<<"\t"<<six[i];
	if(total_score[i]==0)
	strike_rate[i]=0;
	else
	strike_rate[i]= ((total_score[i]*1.0) / (ball_face[i]*1.0)*100);
	cout<<"\t"<<strike_rate[i];
	cout<<endl;

}

int total_target(int total_score[],int i)//function for calculating total targets
{
	int a=0;
	a+=total_score[i];
	return a;

}
float run_rate(int ovr,int *runs)         //total run rate 
{
 float x=0.0;
 x=((*runs)*1.0)/ovr;
 return x;
}
int wicket(int score)   /// live wicket 

{
static int a=0;
 if(score==-1)
  {
  a++;
  } return a;
}
  
  int wicket1(int score)   /// live wicket for second team

{
static int a=0;
 if(score==-1)
  {
  a++;
  }
   return a;
}
  int livescore(int score)   // live total score 
  {  
   static  int live=0;
   if(score==-1)
     {}
     else 
     live += score;
     return live;
  }
  
  int livescore1(int score)   // live total score  for second team
  {  
   static  int live=0;
   if(score==-1)
     {}
     else 
     live += score;
     return live;
  }
  
float liveover(int curntover )    // live over 
{
               int rem=0,div=0;
		float over=0.0;
		div=curntover/6;
		rem=curntover%6;
		
		over=rem*0.1+div; 
                return over;


}

float liverunrate(int curntover , int score)  //live run rate 
{
 static int runrate=0;

   if(score==-1)
     {
     runrate  += 0;
     }
   else 
    {
    runrate  += score;
    }
    int rem=0,div=0;
	float over=0.0;
	div=curntover/6;
	rem=curntover%6;
	over=(rem*0.1)+div; 
	float rate=0.0;
	rate=(runrate)/over;
	return rate;
}



float liverunrate1(int curntover , int score)  //live run rate for second team
{
 static int runrate=0;

   if(score==-1)
     {
     runrate  += 0;
     }
   else 
    {
    runrate  += score;
    }
    int rem=0,div=0;
	float over=0.0;
	div=curntover/6;
	rem=curntover%6;
	over=(rem*0.1)+div; 
	float rate=0.0;
	rate=(runrate)/over;
	return rate;
}






//void drawblrboad(string bowler[],float overs , int missball,int ruuns, a )
void drawblrboad(string bowler[],int bowlerruns[],int bowlerover[],int bowlerwicket[],int g)
{
 cout<<bowler[g]<<"\t\t"<<bowlerruns[g]<<"\t\t"<<bowlerover[g]<<"\t\t"<<bowlerwicket[g]<<endl;
 
 
 
 }





int main()
{

 fstream file;
 file.open("myfile.txt");

 if(!file)
 {
  cout<<"File is not open "<<endl;
  return 0;
  }
  int total_over =0;
  file>>total_over; //over from file
  cout<<"Total over of the match  :"<<total_over<<endl;
  file.close();
  

int size=11;

string                   pakistan[size]={"Babar","Rizwan","Malik","Fakhar","Asif","Hassan","Rauf","Irfan","Shaheen","Waseem","Asif"};
string india[size]={"Kohli","Rohit","Jadeja","Rahul","Dhoni","Hardic","Bumrah","Shami","Chahal","Kumar","Yadav"}; 






cout<<"---------------------------------------------------------------------------------|"<<endl;
cout<<"---------------------------------------------------------------------------------|"<<endl;
cout<<"_____<<<<<<<<<________MATCH IS GOING TO START_________>>>>>>>>___________________|"<<endl;
cout<<"---------------------------------------------------------------------------------|"<<endl;
cout<<"---------------------------------------------------------------------------------|"<<endl;
cout<<"\t\tPAKISYAN  \t\t  INDIA"<<endl;
cout<<"---------------------------------------------------------------------------------|"<<endl;

for(int i=0; i<size  ;i++)
{cout<<"\t\t"<<pakistan[i]<<"\t\t\t"<<india[i]<<endl;
}
cout<<endl<<endl;

srand(time(NULL));
int total_score[size]={0};
int score=0;	
int ball_face[size]={0};
int ball_miss[size]={0};
int four[size]={0};
int six[size]={0};
float strike_rate[size]={0.0};
int totalover=0;
//int total=0;
int posibelover=0;//for total over
posibelover=total_over*6;//
int curntover=0; // total balls of inings 
int rem=0,div=0,q;
int livewicket=0; //for live wickets
float ovr=0.0; ///total over 
int g=0; // index for bowler
int bsize=5;
string bowler[bsize];	
int bowlerruns[bsize]={0}; // each bowler run
int bowlerover[bsize]={0};//bowler over
int bowlerwicket[bsize]={0};


float lrunrate=0.0; //variable for storing live runrate
int lwicket=0;//variable for storing live wicket
int lscore=0;//variable for storing live lscore
float lover;//variable for storing live over


int maxscore=0; //for maximum score 
int maxwicket=0;//for maximum wicket
string msname; //for storing the name of the player that make maximum score
string mwname; //for storing the name of bowler which take the makimmum wickets 


string team1; //for assignig team name
string team2;//for assigning team name



	
	int x=rand()%2; //genrating random number for task
	
	string selection[size];
	if (x==0)
	{
	
	for (int i=0 ;i<size ;i++)//loop for assigning the toss wining team to string 
	 {
	  selection[i]=pakistan[i];
	  
	  }
	  team1="Pakistan";
	}
	if(x==1)
	{
	 
	for (int i=0 ;i<size;i++)
	
	  {
	   selection[i]=india[i];	
	  }
	team1="India";
	}
	
cout <<"\t\t\tPress enter for toss : "<<endl;
task(pakistan,india,x); //function for task
	

	
	
	if (x==0)
	{
	int p=0;
	p=0;
	 for (int j=size-1 ; j>bsize ; j--)//for assigning the last five player as a bowler
	  {
	   for (int k=1 ; k>0 ; k--) 
	  {
            bowler[p]=india[j];
	  
	   p++;
	   }
	  }
	}
	  if (x==1)
	{
	int p=0;
	p=0;
	
	 for (int j=size-1 ; j>bsize; j--)//for assigning the last five player as a bowler
	  {
	   for (int k=1 ; k>0 ; k--) 
	  {
            bowler[p]=pakistan[j];
	  
	   }
	   p++;
	   }
          	
	}
cout<<"____________________________________________________________________________|"<<endl;

cout<<"-----------------------------BOWLER ARE ------------------------------------|"<<endl;
cout<<"____________________________________________________________________________|"<<endl;
cout<<"____________________________________________________________________________|"<<endl;
	balling( bowler, bsize);
cout<<"____________________________________________________________________________|"<<endl;
	cout<<endl<<endl;
	
	
	
	
	
	
curntover=0;


//stating of looopp 
	
for(int i=0; i<size-1 && curntover<posibelover ; i++)		
	{ 
	bool p1=true,p2=false;
	score=0;
while (score!=-1)
{
	cout<<"batting\t   \tR\tB\tM\t4s\t6s\tSR"<<endl;
       	score = (rand()%7) - 1;
	  	    int probability= 0;
	  	   probability= rand()%10;
	  	    if(score==-1 && i<5 && probability>0)  // condition for probability   
	  	     {
	  	      
	  	       score +=1 ;
	  	      
	  	      }
	  	     
      				 livewicket=wicket(score);
                                 if(score== -1)
	   			  {
	   			   bowlerwicket[g]+=1;
	   			   }
	   			   else
	   			   {
	   			   bowlerwicket[g]+=0;
	   			   }
	   			   if(bowlerwicket[g]>maxwicket)//player take maximum wicket
	   			   {
	   			   maxwicket=bowlerwicket[g];
	   			   mwname=bowler[g];
	   			   }
	   			   
	   			  
	   			    
	   			 
       	
	if(p1==true){
		
		if(score==0 ||score==2 ||score==4 ||score==6 )
		{ 
			 	 total_score[i] += score;
			 	if(total_score[i] > maxscore)//player make maximum score
	  	         	{
	  	         	 maxscore=total_score[i] ;
	  	         	 msname=selection[i];
	  	         	 }
			 	ball_face[i]+=1;
			 	curntover++;
			 	bowlerruns[g]+= score;
			 	/*/prob=total_score[i];
			 	if (score == -1)
			 	{
	   			if (i<5 && prob<30 )
	   			{
	   			 score=1;
	   			 }
	   			 }*/
			 //cout<<"OVER : "<<liveover(curntover);	
			       if(curntover==posibelover)
			       break;		
	                      if(score==0)
	              	       {
	           	       ball_miss[i]+=1;
	  
	   			}
	   			if (score==4)
	   			{
	   			four[i]+=1;
	   			
	   			}
	   			if(score==6)
	   			{
	   			six[i]+=1;
	   			}
	   			
	   			 if(curntover%6==0 )//for changing of bowler
	   			 {
	   			 bowlerover[g]+=1;
	   			 g++;
	   			 }
	   			 if(g==bsize)
	   			 {
	   			  g=0;
	   			  }
	   			
	   			 
	   			 
	   			
			 	      drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,i);//calling function
	 cout<<endl<<endl<<endl;
		
cout<<"____________________________________________________________________________|"<<endl;			 	   
lrunrate=liverunrate(curntover, score);//calling function
lwicket=livewicket;//calling function
lscore=livescore(score);//calling function
lover=liveover(curntover);//calling function



  
 	cout<<"live score : "<<lscore<<endl;  
	cout<<"OVER : "<<lover;	 
	cout<<"\t\t\tOUT :"<<lwicket<<endl;
	cout<<"Live runrate : "<<lrunrate<<endl;
cout<<"____________________________________________________________________________|"<<endl;
cout<<"bowler\t\truns\t\tover\t\twickets"<<endl;		
       drawblrboad(bowler ,bowlerruns,bowlerover,bowlerwicket, g );	//calling function 	      
		}
		else if(score==1 || score==3 || score==5 )
			{ 
			 
	  	         	total_score[i] += score;
	  	         	if(total_score[i] > maxscore)//player make maximum score
	  	         	{
	  	         	 maxscore=total_score[i] ;
	  	         	 msname=selection[i];
	  	         	 }
	  	         	ball_face[i]+=1;
	  	         	curntover++;
	  	         	bowlerruns[g]+= score;
	  	         	/*prob=total_score[i];
	  	         	if (score == -1)
			 	{
	   			if (i<5 && prob<30 )
	   			{
	   			 score=1;
	   			 }
	   			 }*/
	   			 
			        if(curntover==posibelover)
			        break;	
	   			if(curntover%6==0 )//for changing of bowler and assigning over
	   			 {
	   			 bowlerover[g]+=1;
	   			 g++;
	   			 }
	   			 if(g==bsize)
	   			 {
	   			  g=0;
	   			  }
	   			 /* if(score == -1)
	   			  {
	   			   bowlerwicket[g]+=1;
	   			   }
	   			   else
	   			   {
	   			   bowlerwicket[g]+=0;
	   			   }*/
	   			 
	   			 	
	drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,i);//calling function
	 cout<<endl<<endl<<endl;
cout<<"____________________________________________________________________________|"<<endl;
 lrunrate=liverunrate(curntover, score);//calling function
lwicket=livewicket;//calling function
lscore=livescore(score);//calling function
lover=liveover(curntover);//calling function



  
 	cout<<"live score : "<<lscore<<endl;  
	cout<<"OVER : "<<lover;	 
	cout<<"\t\t\tOUT :"<<lwicket<<endl;
	cout<<"Live runrate : "<<lrunrate<<endl;
cout<<"____________________________________________________________________________|"<<endl;
      cout<<"bowler\t\truns\t\tover\t\twickets"<<endl;		

       drawblrboad(bowler ,bowlerruns,bowlerover,bowlerwicket, g);//calling function
				
				p1=false;
				p2=true;
				
		       }
		       	
			if((curntover%6)==0)
				{
				p1=true;
				p2=false;
				}
			cin.get();
			system("clear");
			
			}
			
			if(curntover==posibelover) //condition for braking loop on over
			break;		
	       else if(p2==true){
		cout<<"batting\t   \tR\tB\tM\t4s\t6s\tSR"<<endl;

		
		if(score==0 ||score==2 ||score==4 ||score==6 )
		{ 
			 	total_score[i+1] += score;
			 	if(total_score[i+1] > maxscore)//player make maximum score
	  	         	{
	  	         	 maxscore=total_score[i+1] ;
	  	         	 msname=selection[i+1];
	  	         	 }
			 	ball_face[i+1]+=1;
			 	curntover++;
			 	bowlerruns[g]+= score;
			 
			if(curntover==posibelover)
			break;		
			 if(score==0) ///for miss balll
	          	 {
	           	 ball_miss[i+1]+=1;
	  
	   			}
	   			if (score==4) // for 4s 
	   			{
	   			four[i+1]+=1;
	   			}
	   			if(score==6) // for 6s
	   			{
	   			six[i+1]+=1;
	   			}
	   			
	   			if(curntover%6==0 )  //for changing of bowler and assigning over
	   			 {
	   			 bowlerover[g]+=1;
	   			 g++;
	   			 }
	   			 if(g==bsize)
	   			 {
	   			  g=0;
	   			 }
	   			 
	   			/* if(score== -1)
	   			  {
	   			   bowlerwicket[g]+=1;
	   			   }
	   			   else
	   			   {
	   			   bowlerwicket[g]+=0;
	   			   }*/
			       		
			       		
       drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,i+1);
       cout<<endl<<endl<<endl;
cout<<"____________________________________________________________________________|"<<endl;
        lrunrate=liverunrate(curntover, score);
lwicket=livewicket;
lscore=livescore(score);
lover=liveover(curntover);



  
 	cout<<"live score : "<<lscore<<endl;  
	cout<<"OVER : "<<lover;	 
	cout<<"\t\t\tOUT :"<<lwicket<<endl;
	cout<<"Live runrate : "<<lrunrate<<endl;
cout<<"____________________________________________________________________________|"<<endl;	
      cout<<"bowler\t\truns\t\tover\t\twickets"<<endl;		
  
       drawblrboad(bowler ,bowlerruns,bowlerover,bowlerwicket, g);
		}
		else if(score==1 || score==3 || score==5 ||(curntover%6)==0)
			{  
			 
	  	         	total_score[i+1] += score;
	  	         	if(total_score[i+1] > maxscore)
	  	         	{
	  	         	 maxscore=total_score[i+1] ;
	  	         	 msname=selection[i+1];
	  	         	 }
	  	         	ball_face[i+1]+=1;
	  	         	curntover++;
	  	         	bowlerruns[g]+= score;
	  	         
	   			 
	   			 
	   			 if(curntover%6==0 )  //for changing of bowler and assigning over
	   			 {
	   			 bowlerover[g]+=1;
	   			 g++;
	   			 }
	   			 if(g==bsize)
	   			 {
	   			  g=0;
	   			 }
	   			 
	   			
	   			  
			if(curntover==posibelover)
			break;		
      drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,i+1);
       cout<<endl<<endl<<endl;
     cout<<"____________________________________________________________________________"<<endl;
     lrunrate=liverunrate(curntover, score);
lwicket=livewicket;
lscore=livescore(score);
lover=liveover(curntover);



  
 	cout<<"live score : "<<lscore<<endl;  
	cout<<"OVER : "<<lover;	 
	cout<<"\t\t\tOUT :"<<lwicket<<endl;
	cout<<"Live runrate : "<<lrunrate<<endl;
      cout<<"___________________________________________________________________________"<<endl;
      cout<<"bowler\t\truns\t\tover\t\twickets"<<endl;		

       drawblrboad(bowler ,bowlerruns,bowlerover,bowlerwicket, g);
				p1=true;
				p2=false;
		       }
		       if((curntover%6)==0)
				{
				p2=true;
				p1=false;
				}	
			
				cin.get();
				system("clear");
		if(curntover==posibelover)
		break;
			
			}
		
		} //whiel loop ended
		cout<<"batting\t   \tR\tB\tM\t4s\t6s\tSR"<<endl<<endl;
		switch (i) //showing the boad after each wicket
		{
		case 11: {       

   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,11);		        
		                 }
		                 
		                 
		                 
		                 case 10: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,10);		        
		                 }
		                 
		                 
		                 
		                 
		                 case 9: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,9);		        
		                 }
		                 
		                 
		                 
		                 case 8: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,8);		        
		                 }
		                 
		                 
		                 case 7: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,7);		        
		                 }
		                 
		                 
		                 case 6: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,6);		        
		                 }
		                 
		                 
		                 case 5: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,5);		        
		                 }
		                 
		                 
		                 case 4: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,4);		        
		                 }
		                 
		                 
		                 case 3: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,3);		        
		                 }
		                 
		                 
		                 case 2: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,2);		        
		                 }
		                 
		                 
		                 case 1: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,1);		        
		                 }
		                 
		                 case 0: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,0);		        
		                 }
		                 }
		                 
		                 
		if(score==-1)                
		        
		{
		cout<<"🏏️ 🏏️🏏️ 🏏️WICKET🏏️ 🏏️🏏️ 🏏️"<<endl;
		cout<<"Detail is of player is "<<endl;
     drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,i);
     
     }
     cout<<"______________________________________________________________________________"<<endl;

		 if(score== -1)
	   			   {
	   			    
	   cout<<"("<<bowler[g]<<") take the wicket of ("<<selection[i]<<")"<<endl;
	   			    
	   			    }
     
     
     		
cout<<"______________________________________________________________________________"<<endl;

lrunrate=liverunrate(curntover, score);
lwicket=livewicket;
lscore=livescore(score);
lover=liveover(curntover);



  
 	cout<<"live score : "<<lscore<<endl;  
	cout<<"OVER : "<<lover;	 
	cout<<"\t\t\tOUT :"<<lwicket<<endl;
	cout<<"Live runrate : "<<lrunrate<<endl;
cout<<"______________________________________________________________________________"<<endl<<endl;

			 
}		
cin.get();
system("clear");
cout<<"Total over of the match_______________________🏏️ 🏏️("<<total_over<<")"<<endl<<endl;

cout<<"___________________________________________________________________________|"<<endl;
cout<<"_____________________________BATTING BOARD_________________________________|"<<endl;
cout<<"___________________________________________________________________________|"<<endl;
cout<<"batting\t   \tR\tB\tM\t4s\t6s\tSR"<<endl<<endl;
		int *runs = new int;
		
		*runs = 0;
      for(int i=0; i<size-1 ; i++)		
	{ 

	
	drawBatingboad(selection,score,total_score ,ball_face,ball_miss,four,six,strike_rate,i);
	
		
		*runs += total_target(total_score,i);
		
		totalover +=ball_face[i];
		
	     
        }
		rem=0,div=0;
		 ovr=0.0;
		div=totalover/6;
		rem=totalover%6;
		
		ovr=rem*0.1+div;
		
cout<<"_____________________________________________________________________________|"<<endl;		
	cout<<endl<<"TEAM TOTAL SCORE : "<<*runs<<"/"<<livewicket<<endl;
 cout<<"____________________________________________________________________________|"<<endl;
 cout<<"____________________________________________________________________________|"<<endl;
  	
	cout<<"TOTAL OVER : "<<ovr;
	float rate=run_rate(ovr,runs);
	cout<<"\t\t\tTOTLA RUN RATE IS 😁️ 🏏️  "<<rate<<endl;
 cout<<"____________________________________________________________________________"<<endl;

	cout<<msname<<" make maximum score "<<maxscore<<endl;
 cout<<"____________________________________________________________________________"<<endl;

	

cout<<"___________________________________________________________________________|"<<endl<<endl;
cout<<"___________________________________________________________________________|"<<endl;
cout<<"_____________________________BOWLING BOARDD________________________________|"<<endl;
cout<<"___________________________________________________________________________|"<<endl;

cout<<" \t\t⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️"<<endl;
	cout<<"bowler\t\truns\t\tover\t\twickets"<<endl<<endl;		
for (int g=0; g<bsize ; g++)
{ 
  drawblrboad(bowler ,bowlerruns,bowlerover,bowlerwicket, g );

}
int RUNS=0;
RUNS=*runs;
int TARGET =*runs+1;  ///total target for next team 
float Rrate=(TARGET+0.0)/total_over;








cin.get();
system("clear");













score=0;
for(int i=0 ;i<size ; i++)
{	
 total_score[i]=0;
 ball_face[i]=0;
ball_miss[i]=0;
four[i]=0;
six[i]=0;
strike_rate[i]=0.0;
}
totalover=0;
//int total=0;
posibelover=0;//for total over
posibelover=total_over*6;//
curntover=0; // total balls of inings 
rem=0,div=0,q;
livewicket=0; //for live wickets
ovr=0.0; ///total over 
g=0; // index for bowler
bsize=5;

bowler[bsize];	
for(int i=0; i<bsize ; i++)
{
bowlerruns[i]=0; // each bowler run
bowlerover[i]=0;//bowler over
bowlerwicket[i]=0;

}




lrunrate=0.0;
 lwicket=0;
lscore=0;





cout<<"_________________________________________________________________________________|"<<endl;
cout<<"________________________TARGEDT IS =="<<TARGET<<"________________________________________"<<endl;
cout<<"_________________________________________________________________________________|"<<endl;
cout<<"________________________REQIRED RUN RATE =="<<Rrate<<"____________________________________"<<endl;
cout<<"_________________________________________________________________________________|"<<endl;

cout<<"\n\n\n";
	int p=0;
 
 //now assigning the next team to the bating      
      if (x==1)
  
	{
	
	for (int i=0 ;i<size ;i++)
	 {
	  selection[i]=pakistan[i];
	  
	  }
	  team2="Pakistan";
	}
	if(x==0)
	{
	 
	for (int i=0 ;i<size;i++)
	
	  {
	   selection[i]=india[i];	
	  }
	 
	team2="India";
	}
	
	
	if (x==1)
	{
	p=0;
	 for (int j=size-1 ; j>bsize ; j--)//for assigning the last five player as a bowler
	  {
	   for (int k=1 ; k>0 ; k--) 
	  {
            bowler[p]=india[j];
	  
	   p++;
	   }
	  }
	 
	}
	  if (x==0)
	{
	//int p=0;
	p=0;
	
	 for (int j=size-1 ; j>bsize; j--)//for assigning the last five player as a bowler
	  {
	   for (int k=1 ; k>0 ; k--) 
	  {
            bowler[p]=pakistan[j];
	  
	   }
	   p++;
	   }
	   
          	
	}
	
	
cout<<"____________________________________________________________________________|"<<endl;

cout<<"-----------------------------Next team--------------------------------------|"<<endl;
cout<<"____________________________________________________________________________|"<<endl;
cout<<"____________________________________________________________________________|"<<endl;
	 
	for(int i=0 ;i<size ; i++)
	{
	 cout<<"\t"<<selection[i]<<"\t";
	 }
	 cout<<"\n\n";
cout<<"____________________________________________________________________________|"<<endl;
	
	 cout<<"____________________________________________________________________________|"<<endl;
cout<<"____________________________________________________________________________|"<<endl;

cout<<"-----------------------------BOWLER ARE ------------------------------------|"<<endl;
cout<<"____________________________________________________________________________|"<<endl;
cout<<"____________________________________________________________________________|"<<endl;
	 
	 for(int i=0 ; i <bsize ; i++)
	 {
	  cout <<bowler[i]<<"\t";
	  }
	  cout<<"\n\n\n";
	  












curntover=0;
	
for(int i=0; i<size-1 && curntover<posibelover &&  lscore<TARGET ; i++)		
	{ 
	bool p1=true,p2=false;
	score=0;
while (score!=-1)
{
	cout<<"batting\t   \tR\tB\tM\t4s\t6s\tSR"<<endl;
       	score = (rand()%7) - 1;
	  	    int probability= 0;
	  	   probability= rand()%10;
	  	    if(score==-1 && i<5 && probability>0)  // condition for probability   
	  	     {
	  	      
	  	       score +=1 ;
	  	      
	  	      }
	  	     
      				 livewicket=wicket1(score);
                                 if(score== -1)
	   			  {
	   			   bowlerwicket[g]+=1;
	   			   }
	   			   else
	   			   {
	   			   bowlerwicket[g]+=0;
	   			   }
	   			   
	   			   if(bowlerwicket[g]>maxwicket)
	   			   {
	   			   maxwicket=bowlerwicket[g];
	   			   mwname=bowler[g];
	   			   }
	   			   
	   			   
	   			 
       	
	if(p1==true){
		
		if(score==0 ||score==2 ||score==4 ||score==6 )
		{ 
			 	total_score[i] += score;
			 	if(total_score[i] >= maxscore)//player make maximum score
	  	         	{
	  	         	 maxscore=total_score[i] ;
	  	         	 msname=selection[i];
	  	         	 }
			 	ball_face[i]+=1;
			 	curntover++;
			 	bowlerruns[g]+= score;
			 	/*/prob=total_score[i];
			 	if (score == -1)
			 	{
	   			if (i<5 && prob<30 )
	   			{
	   			 score=1;
	   			 }
	   			 }*/
			 //cout<<"OVER : "<<liveover(curntover);	
			       if(curntover==posibelover)
			       break;		
	                      if(score==0)
	              	       {
	           	       ball_miss[i]+=1;
	  
	   			}
	   			if (score==4)
	   			{
	   			four[i]+=1;
	   			
	   			}
	   			if(score==6)
	   			{
	   			six[i]+=1;
	   			}
	   			
	   			 if(curntover%6==0 )//for changing of bowler and assigning over
	   			 {
	   			 bowlerover[g]+=1;
	   			 g++;
	   			 }
	   			 if(g==bsize)
	   			 {
	   			  g=0;
	   			  }
	   			 
	   			 
	   			 
	   			
			 	      drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,i);//calling function
	 cout<<endl<<endl<<endl;
		
cout<<"____________________________________________________________________________"<<endl;			 	     
lrunrate=liverunrate1(curntover, score);//calling function
lwicket=livewicket;//calling function
lscore=livescore1(score);//calling function
lover=liveover(curntover);//calling function




  
 	cout<<"live score : "<<lscore<<"\t\t\t TARGET ="<<TARGET<<endl;  
	cout<<"OVER : "<<lover;	 
	cout<<"\t\t\t  OUT :"<<lwicket<<endl;
	cout<<"Live runrate : "<<lrunrate<<endl;
cout<<"____________________________________________________________________________"<<endl;
if(lscore>TARGET)
break;
cout<<"bowler\t\truns\t\tover\t\twickets"<<endl;		
       drawblrboad(bowler ,bowlerruns,bowlerover,bowlerwicket, g );	 	//calling function      
		}
		else if(score==1 || score==3 || score==5 )
			{ 
			 
	  	              total_score[i] += score;
	  	         	if(total_score[i] > maxscore)//player make maximum score
	  	         	{
	  	         	 maxscore=total_score[i] ;
	  	         	 msname=selection[i];
	  	         	 }
	  	         	ball_face[i]+=1;
	  	         	curntover++;
	  	         	bowlerruns[g]+= score;
	  	         	
	   			 
			        if(curntover==posibelover)//over ending
			        break;	
	   			if(curntover%6==0 )//for changing of bowler and assigning over
	   			 {
	   			 bowlerover[g]+=1;
	   			 g++;
	   			 }
	   			 if(g==bsize)
	   			 {
	   			  g=0;
	   			  }
	   			 
	   			 
	   			 	
	drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,i);//calling function
	 cout<<endl<<endl<<endl;
cout<<"____________________________________________________________________________"<<endl;
 lrunrate=liverunrate1(curntover, score);
lwicket=livewicket;
lscore=livescore1(score);
lover=liveover(curntover);




  
 	cout<<"live score : "<<lscore<<"\t\t\t TARGET ="<<TARGET<<endl;  
	cout<<"OVER : "<<lover;	 
	cout<<"\t\t\t   OUT :"<<lwicket<<endl;
	cout<<"Live runrate : "<<lrunrate<<endl;
cout<<"____________________________________________________________________________"<<endl;
if(lscore>TARGET)
break;
      cout<<"bowler\t\truns\t\tover\t\twickets"<<endl;		

       drawblrboad(bowler ,bowlerruns,bowlerover,bowlerwicket, g);//calling function
				
				p1=false;
				p2=true;
				
			if((curntover%6)==0)
				{
				p1=true;
				p2=false;
				}
		       }
		       	
			cin.get();
			system("clear");
			
			}
			
			if(curntover==posibelover) //condition for braking loop on over
			break;		
	else if(p2==true){
		cout<<"batting\t   \tR\tB\tM\t4s\t6s\tSR"<<endl;

		
		if(score==0 ||score==2 ||score==4 ||score==6 )
		{ 
			 	total_score[i+1] += score;
			 	if(total_score[i+1] > maxscore)//player make maximum score
	  	         	{
	  	         	 maxscore=total_score[i+1] ;
	  	         	 msname=selection[i+1];
	  	         	 }
			 	ball_face[i+1]+=1;
			 	curntover++;
			 	bowlerruns[g]+= score;
			
			if(curntover==posibelover)
			break;		
			 if(score==0) ///for miss balll
	          	 {
	           	 ball_miss[i+1]+=1;
	  
	   			}
	   			if (score==4) // for 4s 
	   			{
	   			four[i+1]+=1;
	   			}
	   			if(score==6) // for 6s
	   			{
	   			six[i+1]+=1;
	   			}
	   			
	   			if(curntover%6==0 )  //for changing of bowler and assigning over
	   			 {
	   			 bowlerover[g]+=1;
	   			 g++;
	   			 }
	   			 if(g==bsize)
	   			 {
	   			  g=0;
	   			 }
	   			 
	   			
			       		
			       		
       drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,i+1);//calling function
       cout<<endl<<endl<<endl;
        cout<<"____________________________________________________________________________"<<endl;
lrunrate=liverunrate1(curntover, score);//calling function
lwicket=livewicket;//calling function
lscore=livescore1(score);//calling function
lover=liveover(curntover);//calling function



  
 	cout<<"live score : "<<lscore<<"\t\t\t TARGET ="<<TARGET<<endl;  
	cout<<"OVER : "<<lover;	 
	cout<<"\t\t\tOUT :"<<lwicket<<endl;
	cout<<"Live runrate : "<<lrunrate<<endl;
      cout<<"_____________________________________________________________________"<<endl;	
      if(lscore>TARGET)
break;
      cout<<"bowler\t\truns\t\tover\t\twickets"<<endl;		
  
       drawblrboad(bowler ,bowlerruns,bowlerover,bowlerwicket, g);//calling function
		}
		else if(score==1 || score==3 || score==5 ||(curntover%6)==0)
			{  
			 
	  	         	total_score[i+1] += score;
	  	         	if(total_score[i+1] > maxscore)//player make maximum score
	  	         	{
	  	         	 maxscore=total_score[i+1] ;
	  	         	 msname=selection[i+1];
	  	         	 }
	  	         	ball_face[i+1]+=1;
	  	         	curntover++;
	  	         	bowlerruns[g]+= score;
	  	         
	   			 
	   			 
	   			 if(curntover%6==0 ) //for changing of bowler and assigning over
	   			 {
	   			 bowlerover[g]+=1;
	   			 g++;
	   			 }
	   			 if(g==bsize)
	   			 {
	   			  g=0;
	   			 }
	   			 
	   			
	   			  
			if(curntover==posibelover)//if over end
			break;		
      drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,i+1);//calling function
       cout<<endl<<endl<<endl;

     cout<<"____________________________________________________________________________"<<endl;
     //live score etc
lrunrate=liverunrate1(curntover, score);//calling function
lwicket=livewicket;//calling function
lscore=livescore1(score);//calling function
lover=liveover(curntover);//calling function



  
 	cout<<"live score : "<<lscore<<"\t\t\t TARGET ="<<TARGET<<endl;  
	cout<<"OVER : "<<lover;	 
	cout<<"\t\t\t  OUT :"<<lwicket<<endl;
	cout<<"Live runrate : "<<lrunrate<<endl;
      cout<<"___________________________________________________________________________"<<endl<<endl;
      if(lscore>TARGET)//if score rach the target 
break;
      cout<<"bowler\t\truns\t\tover\t\twickets"<<endl;		

       drawblrboad(bowler ,bowlerruns,bowlerover,bowlerwicket, g);//calling function
				p1=true;
				p2=false;
		       if((curntover%6)==0)
				{
				p2=true;
				p1=false;
				}	
		       }
			
				cin.get();
				system("clear");
		if(curntover==posibelover)
		break;
			
			}
		
		} //whiel loop ended
		
		
		cout<<"batting\t   \tR\tB\tM\t4s\t6s\tSR"<<endl<<endl;
		switch (i) //showing the boad after each acording to wicket
		{
		case 11: {       

   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,11);//calling function		        
		                 }
		                 
		                 
		                 
		                 case 10: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,10);//calling function		        
		                 }
		                 
		                 
		                 
		                 
		                 case 9: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,9);//calling function		        
		                 }
		                 
		                 
		                 
		                 case 8: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,8);//calling function		        
		                 }
		                 
		                 
		                 case 7: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,7);//calling function		        
		                 }
		                 
		                 
		                 case 6: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,6);//calling function		        
		                 }
		                 
		                 
		                 case 5: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,5);//calling function		        
		                 }
		                 
		                 
		                 case 4: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,4);		 //calling function       
		                 }
		                 
		                 
		                 case 3: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,3);		 //calling function       
		                 }
		                 
		                 
		                 case 2: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,2);		 //calling function       
		                 }
		                 
		                 
		                 case 1: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,1);		 //calling function       
		                 }
		                 
		                 case 0: {       
   drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,0);	//calling function	        
		                 }
		                 }
		                 
		                 
		        if(score== -1)         
		        
		{cout<<"🏏️ 🏏️🏏️ 🏏️WICKET🏏️ 🏏️🏏️ 🏏️"<<endl;
		cout<<"\t\t\t\tDetail  of player is "<<endl;
     drawBatingboad(selection,score,total_score,ball_face,ball_miss,four,six,strike_rate,i);//calling function
     }
     		
cout<<"______________________________________________________________________________"<<endl;

		 if(score== -1)
	   			   {//which boler take the wicket of wchich player
	   			    
	   cout<<"("<<bowler[g]<<") take the wicket of ("<<selection[i]<<")"<<endl;
	   			    
	   			    }
	   			    
	   			    //showing  live things
cout<<"______________________________________________________________________________"<<endl;
	   			    
lrunrate=liverunrate1(curntover, score);//calling function
lwicket=livewicket;//calling function
lscore=livescore1(score);//calling function
lover=liveover(curntover);//calling function



  
 	cout<<"live score : "<<lscore<<"\t\t\t TARGET ="<<TARGET<<endl;  
	cout<<"OVER : "<<lover;	 
	cout<<"\t\t\t  OUT :"<<lwicket<<endl;
	cout<<"Live runrate : "<<lrunrate<<endl;
cout<<"______________________________________________________________________________"<<endl<<endl;			 
	}
	
cin.get();
system("clear");
cout<<"Total over of the match🏏️ 🏏️ =_______________________("<<total_over<<")"<<endl<<endl;

cout<<"___________________________________________________________________________|"<<endl;
cout<<"_____________________________BATTING BOARDD________________________________|"<<endl;
cout<<"___________________________________________________________________________|"<<endl;

cout<<"batting\t   \tR\tB\tM\t4s\t6s\tSR"<<endl<<endl;
		 *runs=0;
		 totalover=0;
      for(int i=0; i<size-1 ; i++)		
	{ 

	
	drawBatingboad(selection,score,total_score ,ball_face,ball_miss,four,six,strike_rate,i);//calling function
	
		
		*runs += total_target(total_score,i); //calculaing total runs
		
		totalover +=ball_face[i];
		
	     
        }
		rem=0,div=0;
		 ovr=0.0;
		div=totalover/6;
		rem=totalover%6;
		
		ovr=rem*0.1+div;
		
cout<<"___________________________________________________________________________|"<<endl;		
	cout<<endl<<endl<<"TEAM TOTAL SCORE : "<<*runs<<"/"<<livewicket<<endl;
cout<<"___________________________________________________________________________|"<<endl;
cout<<"___________________________________________________________________________|"<<endl;
  	
	cout<<"TOTAL OVER : "<<ovr;
	cout<<"\t\t\tTOTLA RUN RATE IS 🏏️ = "<<run_rate(ovr,runs)<<endl;
	cout<<"____________________________________________________________________________"<<endl;

	cout<<msname<<" make maximum score ="<<maxscore<<endl;//player make maximum score
	cout<<mwname<<" take maximum wicket = "<<maxwicket<<endl;//player take maximum wicket
cout<<"____________________________________________________________________________|"<<endl;
	
cout<<"____________________________________________________________________________|"<<endl<<endl;

cout<<"____________________________________________________________________________|"<<endl;
cout<<"_____________________________BOWLING BOARDD_________________________________|"<<endl;
cout<<"____________________________________________________________________________|"<<endl;
cout<<" \t\t⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️ ⚾️"<<endl;
	cout<<"bowler\t\truns\t\tover\t\twickets"<<endl<<endl;		
for (int g=0; g<bsize ; g++)//loop for showing bowler boad
{ 
  drawblrboad(bowler ,bowlerruns,bowlerover,bowlerwicket, g );//calling function

}





cout<<"____________________________________________________________________________|"<<endl;
cout<<"____________________________________________________________________________|"<<endl;

cout<<"-----------------------------Summary----------------------------------------|"<<endl;
cout<<"____________________________________________________________________________|"<<endl;
cout<<"____________________________________________________________________________|"<<endl;
		if(*runs>RUNS)//condition for result
		{
		cout<<team2<<" won the match";
		}
		else
		{
		cout<<team1<<"  won the match";
		}
		cout<<endl<<endl;
        cout<<"MAN OF THE MATCH : \t";
       cout<<msname<<" ="<<maxscore<<"(runs)"<<endl;
       cout<<"BEST BOWLER OF MATCH : \t";
	cout<<mwname<<" = "<<maxwicket<<"(wicket)"<<endl;
delete runs;

return 0;
 }
