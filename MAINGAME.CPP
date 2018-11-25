/////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
/////////////////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
//THE FOLLOWING PROJECT HAS BEEN DONE FOR THE BOARD EXAMINATION OF 2013-14//
////////////////////////////^^^^&&^^^^^/////////////////////////////////////
////////////////////////////^^^^&&^^^^^/////////////////////////////////////
////////////////////////////^^^^&&^^^^^//////////////////////////////////////
/*THE USER MUST CLICK ON THE GAMES TILE OF THE START SCREEN TO ENTER THE GAME
/////////////////////////////FOOTBALL GAME/////////////////////////////////////////
THE FOLLOWING FOOTBALL PENALTIES GAME TAKES IN THE USER AS THE MANAGER OF
THE ENGLISH FOOTBALL CLUB "MANCHESTER UNITED" AND WELCOMES HIM TO THE CLUB.
THE MANAGER MUST THEN SELECT 5 OF HIS PLAYERS TO TAKE THE PENALTY SHOTS
AFTER DECIDING THE DIFFICULTY LEVEL.AFTER THE SHOTS, THE NO. OF GOALS IS
DISPLAYED ALONG WITH A WORD OF ENCOURAGEMENT.THE USER THEN GOES BACK TO THE
START SCREEN.TO EXIT,THE USER MUST USE THE CORNER FUNCTION AND SHUTDOWN. */
////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
////////////////////////////PROGRAM CODE////////////////////////////////////


#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<string.h>
#include<dos.h>
#include<process.h>
#include<stdlib.h>
#include<ctype.h>
#include<mouse.h>

void walk(int x,int y,int number)
 { switch(number)
      { case 1:
		     {  setcolor(14);
			circle(x+15,y+10,5);
			line(x+15,y+15,x+5,y+25);
			line(x+15,y+15,x+25,y+25);
			line(x+15,y+15,x+15,y+35);
			line(x+15,y+35,x+5,y+45);
			line(x+15,y+35,x+25,y+45);
			putpixel(x+13,y+8,WHITE);
			putpixel(x+17,y+8,WHITE);
			 setcolor(RED);
			fillellipse(x+15,y+12,2,1);
			    break;
		       }
		  case 2:
		  case 4:
		     { setcolor(14);
		       circle(x+15,y+10,5);
		       line(x+15,y+15,x+10,y+30);
		       line(x+15,y+15,x+20,y+30);
		       line(x+15,y+15,x+15,y+35);
		       line(x+15,y+35,x+10,y+45);
		       line(x+15,y+35,x+20,y+45);
		       putpixel(x+13,y+8,WHITE);
		       putpixel(x+17,y+8,WHITE);
			setcolor(RED);
		       fillellipse(x+15,y+12,2,1);
			    break;
		      }
		  case 3:
		     { setcolor(14);
		       ellipse(x+15,y+10,0,360,3,5);
		       line(x+15,y+15,x+15,y+45);
		       putpixel(x+15,y+8,WHITE);
		       putpixel(x+15,y+12,RED);
		       putpixel(x+16,y+12,RED);
			  break;
		     }
		  default:
		  break;
	       }

 }

void start(void);

void corner()
{ int x=639;
  hidemouse();

  for( ;x>=580;x--)
  { setcolor(LIGHTBLUE);
    line(x,0,x,480);
    delay(5);
    setfillstyle(1,BLACK);
    floodfill(640,10,LIGHTBLUE);   }
   setcolor(BLACK);
   circle(610,240,10);
   circle(610,240,12);
   circle(610,240,11);
   setcolor(LIGHTBLUE);
   arc(610,240,65,115,10);
   arc(610,240,65,115,12);
   arc(610,240,65,115,11);
   setcolor(BLACK);
   line(610,223,610,237);
   line(609,223,609,237);
   line(611,223,611,237);
   showmouse();

 }

 void decorner()
 { hidemouse();
   for(int x=580;x<=639;x++)
    { setcolor(BLUE);
      line(x,0,x,480);
      delay(8);
      setfillstyle(1,BLACK);
      floodfill(639,50,BLUE);       }
      showmouse();
  }

  void start()
  {  setcolor(WHITE);
     setbkcolor(BLUE);
     rectangle(10,70,180,140);             //  GMAIL TILE
     setfillstyle(1,GREEN);
     floodfill(165,105,WHITE);

     setcolor(RED);
     rectangle(60,90,130,127);
     setfillstyle(1,WHITE);         	// GMAIL ICON
     floodfill(120,100,RED);
     setcolor(WHITE);
     rectangle(60,90,130,127);

     setcolor(GREEN);
     line(60,90,95,110);
     line(60,91,95,111);
     line(95,110,130,90);
     line(95,111,130,91);
     setcolor(WHITE);


     rectangle(10,145,180,215);
     setfillstyle(1,MAGENTA);              //  CALENDAR TILE
     floodfill(165,200,WHITE);

     rectangle(65,155,125,205);
     rectangle(64,154,126,206);

     line(75,155,75,205);
     line(85,155,85,205);                 // CALENDAR ICON
     line(95,155,95,205);
     line(105,155,105,205);
     line(115,155,115,205);

     line(65,165,125,165);
     line(65,175,125,175);
     line(65,185,125,185);
     line(65,195,125,195);



     rectangle(10,220,180,290);
     setfillstyle(1,CYAN);                 // MESSAGING TILE
     floodfill(165,260,WHITE);

     rectangle(72,235,118,260);           // MESSAGING ICON
     rectangle(71,234,119,261);

  setcolor(CYAN);
  line(85,260,105,260);
  line(71,261,119,261);

  setcolor(WHITE);
  line(85,260,112,277);
  line(85,261,112,278);
  line(105,260,112,277);
  line(105,261,112,278);
  setfillstyle(1,LIGHTRED);
  floodfill(100,250,WHITE);


  rectangle(10,295,180,365);
  setfillstyle(1,YELLOW);               // DESKTOP TILE
  floodfill(165,300,WHITE);

  setcolor(MAGENTA);
  settextstyle(8,0,3);
  outtextxy(40,305,"DESKTOP");


  setcolor(WHITE);
  rectangle(195,70,275,140);           // I.E TILE
  setfillstyle(1,LIGHTBLUE);
  floodfill(230,100,WHITE);

  settextstyle(10,0,5);
  outtextxy(222,48,"e");
  setcolor(YELLOW);
  arc(250,123,87,168,35);
  arc(250,123,87,168,34);

  setcolor(BLUE);
  rectangle(280,70,350,140);          // STORE TILE

  setcolor(BLUE);
  line(303,95,325,92);
  line(303,96,325,93);
  line(303,95,303,112);
  line(302,95,302,112);
  line(303,112,325,115);
  line(303,113,325,116);
  line(325,115,325,92);
  line(326,115,326,93);

  setfillstyle(1,LIGHTBLUE);
  floodfill(320,100,BLUE);

  setfillstyle(1,WHITE);
  floodfill(290,80,BLUE);

  setcolor(WHITE);
  rectangle(280,70,350,140);

  line(312,94,312,114);
  line(302,104,326,104);


  rectangle(195,145,275,215);          // CAMERA TILE
  setfillstyle(1,BROWN);
  floodfill(200,150,WHITE);


  rectangle(212,173,257,200);          //  CAMERA ICON
  setcolor(RED);
  circle(242,190,6.8);
  setfillstyle(1,WHITE);
  floodfill(242,190,RED);

  setcolor(WHITE);
  circle(242,190,6.8);

  setcolor(RED);
  circle(252,178,1.8);
  setfillstyle(1,WHITE);
  floodfill(252,178,RED);
   setcolor(WHITE);
  circle(252,178,1.8);
  line(215,173,215,169);
  line(215,169,219,169);
  line(219,169,219,173);

  rectangle(195,220,355,290);           // GAMES TILE

  setfillstyle(6,RED);
  floodfill(300,250,WHITE);
  setcolor(YELLOW);
  settextstyle(4,0,5);
  outtextxy(200,227,"GAMES");


  setcolor(WHITE);
  rectangle(195,295,355,365);          // WEATHER TILE
  setfillstyle(1,LIGHTRED);
  floodfill(350,300,WHITE);
  setcolor(RED);
  circle(272,329,11);
  setfillstyle(1,WHITE);
  floodfill(272,329,RED);
  setcolor(WHITE);
  circle(272,329,11);
  line(272,308,272,350);
  line(271,308,271,350);
  line(251,329,293,329);
  line(251,330,293,330);
  line(259.5,316.5,284.5,342.5);
  line(259.5,317.5,284.5,341.5);
  line(259.5,341.5,284.5,316.5);
  line(259.5,342.5,284.5,317.5);
  setcolor(LIGHTRED);
  circle(272,329,12);
  circle(272,329,13);


  setcolor(WHITE);
  rectangle(390,70,560,140);               // EBAY TILE
  setfillstyle(1,LIGHTMAGENTA);
  floodfill(500,100,WHITE);
  settextstyle(1,0,5);
  setcolor(RED);
  outtextxy(420,75,"e");
  setcolor(BLUE);
  outtextxy(440,75,"b");
  setcolor(YELLOW);
  outtextxy(466.5,75,"a");
  setcolor(LIGHTGREEN);
  outtextxy(487,75,"y");
  setcolor(WHITE);
  settextstyle(1,0,2);
  outtextxy(510,95,".in");


  rectangle(390,145,560,215);          // VIDEOS TILE
  setfillstyle(1,LIGHTGREEN);
  floodfill(500,180,WHITE);

  rectangle(440,154,510,204);          // VIDEOS ICON
  rectangle(441,153,509,203);
  setcolor(RED);
  rectangle(439,152,511,205);
  setcolor(WHITE);
  setfillstyle(1,RED);
  floodfill(475,180,WHITE);
  circle(475,179,12);
  circle(475,179,10);
  circle(475,179,11);
  setcolor(YELLOW);
  line(473,176,473,182);
  line(473,176,479,179);
  line(473,182,479,179);
  setfillstyle(1,WHITE);
  floodfill(475,179,YELLOW);
  setcolor(WHITE);
  line(473,176,473,182);
  line(473,176,479,179);
  line(473,182,479,179);



  rectangle(480,220,560,290);       // CHROME TILE
  setfillstyle(1,DARKGRAY);
  floodfill(485,225,WHITE);
  circle(520,255,23);               // CHROME SYMBOL

  circle(520,255,9);
  setfillstyle(1,BLUE);
  floodfill(520,255,WHITE);

  line(501,241,511,258);
  line(520,246,539,245);
  line(526,263,518,278);

  setfillstyle(1,YELLOW);
  floodfill(525,270,WHITE);
  setfillstyle(1,RED);
  floodfill(525,240,WHITE);
  setfillstyle(1,GREEN);
  floodfill(505,265,WHITE);
  setcolor(BLUE);
  circle(520,255,9);


  setcolor(WHITE);
  rectangle(390,295,560,365);
  setfillstyle(1,WHITE);
  floodfill(400,300,WHITE);
  setcolor(RED);
  settextstyle(7,0,2);
  outtextxy(395,315,"Support Center");
  }

 void shutdown()
 {  hidemouse();
    cleardevice();
    setbkcolor(BLUE);
    setcolor(WHITE);
    settextstyle(7,0,1);
    outtextxy(230,220,"shutting down . . .");
    settextstyle(2,0,6);

   for(int count=0;count<=2;count++)

    for(int i=0,j=640,del=0;i<640 && j>0;i++,j--)
    {
       if(i<160 || i>240)
	  del=1;
       if(i>160 && i<240)
	  del=8;
       setcolor(WHITE);
       outtextxy(i,100,".");
       outtextxy(i,100,"   .");
       outtextxy(i,100,"      .");
       outtextxy(i,100,"         .");
       outtextxy(j,380,".");
       outtextxy(j,380,"   .");
       outtextxy(j,380,"      .");
       outtextxy(j,380,"         .");
       delay(del);
       setcolor(0);
       outtextxy(i,100,".");
       outtextxy(i,100,"   .");
       outtextxy(i,100,"      .");
       outtextxy(i,100,"         .");
       outtextxy(j,380,".");
       outtextxy(j,380,"   .");
       outtextxy(j,380,"      .");
       outtextxy(j,380,"         .");
     }

    delay(200);
    exit(0);
 }


class team
 {  private:

       int selected;
       char name[25];

    public:
       int choose;

       void manager(char *str)
       {  strcpy(name,str);  }

       void zero()
       { selected=0; }

       void one()
       { selected=1; }

       int check()
       { if(selected==1)
	    return 1;
	 else
	   return 0;
       }
       void entername(char *str)
       {  strcpy(name,str); }

       char* pname()
       {  return name;     }
  };



 main()
{ int gd,gm,i,x=1,y=1,a=195,b=184,p=1,k=1,q,goals=0,z,c=0,count=0,num1,num2,num3,num4,num5,asd=0,as=0;
  char str[100],player[5][20];
  gd=DETECT;
  initgraph(&gd,&gm,"c:\\tc\\BGI");
   setmouselimit();
   setbkcolor(BLUE);
   changemouse(9);
//////////////////////////////WINDOWS 8//////////////////////////////////////
   setbkcolor(BLUE);
   setcolor(RED);
   settextstyle(10,0,1);
   outtextxy(240,190,"windows 8");
   setfillstyle(1,WHITE);
   floodfill(245,220,RED);
   floodfill(265,220,RED);
   floodfill(273,214,RED);
   floodfill(299,223,RED);
   floodfill(311,210,RED);
   floodfill(332,214,RED);
   floodfill(350,224,RED);
   floodfill(377,214,RED);
   floodfill(265,203,RED);
   setcolor(WHITE);
   outtextxy(240,190,"windows 8");
   delay(5000);
   cleardevice();
//////////////////////////////START SCREEN///////////////////////////////////
   label:

     start();

     if(count>0)
       { for(i=0;i<3;i++)
	 { setcolor(WHITE);
	   settextstyle(1,0,1);
	   outtextxy(120,30,"Go to top right corner to exit");
	   delay(300);
	   setcolor(0);
	   settextstyle(1,0,1);
	   outtextxy(120,30,"Go to top right corner to exit");
	   delay(300);
	 }
       }

  while(1)
 { showmouse();
   getstatus();
   if(bx==1)
     if(cx>=195 && dx>=220 && cx<=355 && dx<=290 )
	 break;
   else if(cx>=600 && dx>=230 && cx<=620 && dx<=250)
	  shutdown();

    if(cx>=630 && dx<=5 && c==0)
      { corner();
	c++;       }

   if(cx<=580 && c==1)
     {  decorner();
	c=0;       }
   }
   hidemouse();
/////////////////////////////////////////////////////////////////////////////
  setcolor(RED);
  strcpy(str,"");
  cleardevice();
  while( !strcmp(str,"") )
  {
     settextstyle(1,0,3);
     outtextxy(100,100,"Enter your name");
     gotoxy(1,1);
     gets(str);
     cout<<"Sorry,please enter your name";
     cleardevice();
  }

    team pl[11];

    pl[0].entername("Wayne Rooney");
    pl[1].entername("R.Van Persie");
    pl[2].entername("Hernandez");
    pl[3].entername("Park Ji-Sung");
    pl[4].entername("Andy Carrick");
    pl[5].entername("Nani");
    pl[6].entername("Patrice Evra");
    pl[7].entername("N. Vidic");
    pl[8].entername("Ferdinand");
    pl[9].entername("Valencia");
    pl[10].entername("Dea Gea");

  cleardevice();
////////////////////////////////MUFC/////////////////////////////////////////
setbkcolor(0);

for(i=0;i<25000;i++)
   { x=random(640);
     y=random(480);
     setcolor(i);
     circle(x,y,1.5);
     if(i>20000)
     delay(1);   }

  delay(100);
  setcolor(RED);
  settextstyle(DEFAULT_FONT,0,14);
  outtextxy(80,170,"MUFC");
  getch();
  cleardevice();
  for(i=0;i<25000;i++)
   { x=random(640);
     y=random(480);
     setcolor(i);
     circle(x,y,1.5);  }
  setbkcolor(0);
  setcolor(BLACK);

  for(i=208;i<=240;i++)
     line(0,i,640,i);

   delay(500);

  settextstyle(1,0,3);
  for(i=1;i<15;i++)
   { setcolor(i);
     outtextxy(70,210,"Welcome SIR ,to MANCHESTER UNITED club.\n");
     delay(100); }
     getch();

////////////////////////////LEVEL CHOOSE/////////////////////////////////////
   cleardevice();
   setcolor(RED);
   settextstyle(1,0,5);
   setbkcolor(10);
   for(i=10;i<450;i++)
   { setcolor(i+1);
     outtextxy(160,i,"LEVEL CHOOSE");
     delay(3);
     setcolor(0);
     outtextxy(160,i,"LEVEL CHOOSE");
   }

   cleardevice();
   setcolor(WHITE);
   setbkcolor(BLUE);
   rectangle(180,130,420,200);
   rectangle(180,220,420,290);
   rectangle(180,310,420,380);
   setcolor(RED);
   settextstyle(4,0,6);
   outtextxy(243,120,"easy");
   outtextxy(220,215,"medium");
   outtextxy(243,305,"hard");
   showmouse();
   while(1)
   { getstatus();

     if(cx>=180 && dx>=130 && cx<=420 && dx<=200)
       {  for( int w=0;w<10;w++)
	     { setcolor(w);
	       rectangle(180,130,420,200);
	       delay(50);  }
	       setcolor(WHITE);
	       rectangle(180,130,420,200);
	 }
     if(cx>=180 && dx>=220 && cx<=420 && dx<=290)
       {  for( int w=0;w<10;w++)
	     { setcolor(w);
	       rectangle(180,220,420,290);
	       delay(50);  }
	       setcolor(WHITE);
	       rectangle(180,220,420,290);
	 }
     if(cx>=180 && dx>=310 && cx<=420 && dx<=380)
       {  for( int w=0;w<10;w++)
	     { setcolor(w);
	       rectangle(180,310,420,380);
	       delay(50);  }
	       setcolor(WHITE);
	       rectangle(180,310,420,380);
	 }

   if(bx==1)
   {  if(cx>=180 && dx>=130 && cx<=420 && dx<=200)
	{ z=225;
	   break; }
      if(cx>=180 && dx>=220 && cx<=420 && dx<=290)
	{ z=125;
	  break;  }
      if(cx>=180 && dx>=310 && cx<=420 && dx<=380)
	{ z=75;
	  break;  }

     }

   }
 hidemouse();
 cleardevice();
 //////////////////////////player select//////////////////////////////////////
 settextstyle(3,0,3);
 outtextxy(50,100,"Select 5 players to take the shots");
 delay(800);

 ///////////////////////////////TEAM//////////////////////////////////////////
 while(1)
 { cleardevice();
 setcolor(YELLOW);
 settextstyle(8,0,3);
 outtextxy(50,40,"1.");
 outtextxy(80,40,pl[0].pname());
 outtextxy(50,80,"2.");
 outtextxy(80,80,pl[1].pname());
 outtextxy(50,120,"3.");
 outtextxy(80,120,pl[2].pname());
 outtextxy(50,160,"4.");
 outtextxy(80,160,pl[3].pname());
 outtextxy(50,200,"5.");
 outtextxy(80,200,pl[4].pname());
 outtextxy(50,240,"6.");
 outtextxy(80,240,pl[5].pname());
 outtextxy(50,280,"7.");
 outtextxy(80,280,pl[6].pname());
 outtextxy(50,320,"8.");
 outtextxy(80,320,pl[7].pname());
 outtextxy(50,360,"9.");
 outtextxy(80,360,pl[8].pname());
 outtextxy(40,400,"10.");
 outtextxy(80,400,pl[9].pname());
 outtextxy(40,440,"11.");
 outtextxy(80,440,pl[10].pname());

 for(i=0;str[i]!='\0';i++)
  toupper(str[i]);

 setcolor(GREEN);
 settextstyle(1,0,3);
 outtextxy(340,40,"MANAGER:");
 outtextxy(425,80,str);

 delay(2000);
 setcolor(RED);
 settextstyle(8,0,3.8);
 outtextxy(320,140,"Select the players");
 outtextxy(320,190,"Enter their numbers");
 cin>>num1>>num2>>num3>>num4>>num5;
  if(num1>10 || num1<=0 || num2>10 || num2<=0 || num3>10 || num3<=0 || num4>10 || num4<=0 || num5>10 || num5<=0 || num1==num2 || num1==num3 || num1==num4 || num1==num5 || num2==num3 || num2==num4 || num2==num5 || num3==num4 || num3==num5 || num4==num5)
   { cleardevice();
     gotoxy(1,1);
     cout<<"Sorry! Re-enter the values";
     delay(1000);
   }
  else
     break;
 }
  for(i=0;i<11;i++)
     pl[i].zero();

  pl[num1-1].one();
  pl[num2-1].one();
  pl[num3-1].one();
  pl[num4-1].one();
  pl[num5-1].one();


   for(i=0;i<11;i++)
     { if(pl[i].check())
	 { strcpy(player[asd++],pl[i].pname());
	   pl[i].zero();
	 }
     }
  ////////////////////////////SELECTED PLAYERS///////////////////////////////
  cleardevice();
  setbkcolor(WHITE);
  setcolor(RED);
  settextstyle(1,0,5);
  outtextxy(150,150,"Selected players");
  delay(2000);
  cleardevice();
 ////////////////////////////////WALK/////////////////////////////////////////
 x=240;asd=0;
 setbkcolor(BLUE);
for(int j=0;j<5;j++,asd++)
 { while(x<=400)
   {
    walk(x,200,1);
    x+=5;
    if(x<230 || x>330)
       delay(50);
    else
      delay(120);
    cleardevice();
   walk(x,200,2);
    x+=5;
    if(x<230 || x>330)
       delay(50);
    else
      delay(120);
    cleardevice();
   walk(x,200,3);
    x+=5;
    if(x<230 || x>330)
       delay(50);
    else
      delay(120);
    cleardevice();
    walk(x,200,2);
    x+=5;
    if(x<230 || x>330)
       delay(50);
    else
      delay(120);
    cleardevice();
   if(x>=230)
   { setcolor(RED);
     settextstyle(1,0,5);
     outtextxy(160,150,player[asd]);   }
   if(x>=330)
   { setcolor(BLUE);
     settextstyle(1,0,5);
     outtextxy(160,150,player[asd]);   }
  }
 x=0;
 }
 /////////////////////////////////GAME///////////////////////////////////////

 for(q=0;q<5;q++)
 {  c=0;
   cleardevice();
   setbkcolor(BLACK);
   setcolor(WHITE);
   line(119,25,119,200);
   line(120,25,120,200);       //left post
   line(121,25,121,200);

   line(449,25,449,200);
   line(450,25,450,200);       //right post
   line(451,25,451,200);

   line(119,25,449,25);
   line(120,25,450,25);       //top post
   line(121,25,451,25);
   line(122,25,452,25);

   line(0,200,639,200);              //GOAL LINE
   setfillstyle(1,GREEN);            //GRASS
   floodfill(300,300,WHITE);

   setfillstyle(1,BLUE);            //BEHIND GOAL
   floodfill(50,100,WHITE);

   sleep(1);

   x=290,y=400;
   circle(x,y,25);
   setfillstyle(5,RED); 	   //FOOTBALL
   floodfill(x,y,WHITE);

   setcolor(LIGHTRED);

   circle(285,110,20);
   circle(285,110,19);         //face

   circle(275,105,2);         //eyes
   circle(295,105,2);

   arc(285,110,220,320,13);

   line(285,130,285,170);
   line(284,130,284,170);      //body

   line(285,170,265,200);
   line(284,170,264,200);      //legs          //GOALKEEPER
   line(285,170,305,200);
   line(284,170,304,200);

   line(285,140,265,160);
   line(284,140,264,160);             // hands
   line(285,140,305,160);
   line(284,140,304,160);

  circle(200,356,17);        //SHOOTER
  circle(200,356,16);
  line(200,375,200,415);     //body
  line(200,374,200,414);

  line(200,385,180,399);      //hands
  line(200,384,180,398);
  line(200,385,220,399);
  line(200,384,220,398);

  line(200,415,219,435);
  line(200,416,219,436);
  line(200,415,181,435);
  line(200,416,181,436);


   for(int ab=0,qw=10;ab<=6;ab++,qw+=20)
   {  for(int yw=10;yw<=115;yw+=20)       //FANS LEFT
      { setcolor(random(14)+1);
	circle(yw,qw,10);
	circle(yw-3,qw-2,1);
	circle(yw+3,qw-2,1);
	arc(yw,qw,240,310,7);  }
   }

   for(ab=0,qw=10;ab<=6;ab++,qw+=20)        //FANS RIGHT
   {   for(int yw=460;yw<=640;yw+=20)
	 { setcolor(random(14)+1);
	   circle(yw,qw,10);
	   circle(yw-3,qw-2,1);
	   circle(yw+3,qw-2,1);
	   arc(yw,qw,240,310,7); }
   }

   for(int yw=125;yw<=450;yw+=20)          //FANS CENTRE
      { setcolor(random(14)+1);
	circle(yw,10,10);
	circle(yw-3,8,1);
	circle(yw+3,8,1);
	arc(yw,10,240,310,7);  }

   setcolor(WHITE);
   line(0,140,120,140);                    //billboard line
   line(0,141,120,141);
   line(450,140,640,140);
   line(450,141,640,141);

   asd=35;
   if(q!=0)
     asd=20;
   for(int col=1;col<=asd;col++)
   {  if(col%14==0)
	continue;
      setcolor(col);
      settextstyle(1,0,5);               //BILLBOARD
      outtextxy(2,145,"E P L");
      outtextxy(452,145," E P L");
      delay(200);	}


  setcolor(RED);
  settextstyle(1,0,5);
  outtextxy(2,145,"E P L");
  outtextxy(452,145," E P L");


  settextstyle(1,0,4);
  for(int j=0;j<3;j++)
 { setcolor(MAGENTA);
   outtextxy(50,300,player[as]);        //SHOOTER NAME
   delay(250);
   setcolor(GREEN);
   outtextxy(50,300,player[as]);
   delay(250);
 }
   as++;

  setcolor(WHITE);
  arc(290,400,20,160,28);             // pointer
  arc(290,400,27,153,32);

  line(262,392,260,387);
  line(317,390,318,386);

  line(277,376,276,371);
  line(300,374,303,371);

  while(1)
{ setfillstyle(1,RED);
  floodfill(266,381,WHITE);
  delay(z);
  if(kbhit())
   { getch();
     c++;
     break; }
  setfillstyle(1,GREEN);
  floodfill(266,381,WHITE);               //DIRECTION CHOOSE

  setfillstyle(1,RED);
  floodfill(290,370,WHITE);
  delay(z);
  if(kbhit())
   { getch();
     c+=3;
     break; }
  setfillstyle(1,GREEN);
  floodfill(290,370,WHITE);

  setfillstyle(1,RED);
  floodfill(310,378,WHITE);
  delay(z);
  if(kbhit())
   { c+=2;
     getch();
     break; }
  setfillstyle(1,GREEN);
  floodfill(310,378,WHITE);

  }

  setcolor(GREEN);

  arc(290,400,20,160,28);             //pointer
  arc(290,400,27,153,32);

  line(262,392,260,387);
  line(317,390,318,386);

  line(277,376,276,371);
  line(300,374,303,371);

  setcolor(WHITE);
  hidemouse();

  if(c==1)
{
    for(  ;y>=110 && x>=120;y-=2,x--)
   {  setcolor(WHITE);
      circle(x,y,25);                          //BALL MOVING
      if(k==1)
	setfillstyle(5,RED);
      else
	setfillstyle(4,RED);

      floodfill(x,y,WHITE);
      delay(8);
      if(y>180)
      { setfillstyle(1,GREEN);
	floodfill(x,y,WHITE);
	setcolor(GREEN);
	circle(x,y,25);       }
      else
      { setfillstyle(1,BLACK);
	floodfill(x,y,WHITE);
	setcolor(BLACK);
	circle(x,y,25);       }

      if(y<=200)
	k=-1;
      if(x<=153)
	x+=2;
      if(y==220)
   {  setcolor(BLACK);
      circle(285,110,20);
      circle(285,110,19);         //face
      circle(275,105,2);         //eyes
      circle(295,105,2);
      arc(285,110,220,320,13);
      line(285,130,285,170);
      line(284,130,284,170);     //body

      line(285,170,265,200);
      line(284,170,264,200);      //legs          //GOALKEEPER
      line(285,170,305,200);
      line(284,170,304,200);

      line(285,140,265,160);
      line(284,140,264,160);      //hands
      line(285,140,305,160);
      line(284,140,304,160);

      setcolor(LIGHTRED);
      circle(205,150,20);
      circle(205,150,19);         //face

      circle(200,140,2);         //eyes
      circle(200,160,2);

      arc(205,150,310,410,13);

      line(225,150,265,150);                      //DIVE.............
      line(224,150,264,150);      //body

      line(265,150,290,125);
      line(264,150,289,125);      //legs          //GOALKEEPER
      line(265,150,290,175);
      line(264,150,289,175);

      line(240,150,210,120);
      line(239,150,209,120);      //hands
      line(240,150,210,180);
      line(239,150,209,180);   }
    if(y==160)
    { setcolor(BLACK);
      circle(205,150,20);
      circle(205,150,19);         //face

      circle(200,140,2);         //eyes
      circle(200,160,2);

      arc(205,150,310,410,13);

      line(225,150,265,150);                      //DIVE.............
      line(224,150,264,150);      //body

      line(265,150,290,125);
      line(264,150,289,125);      //legs          //GOALKEEPER
      line(265,150,290,175);
      line(264,150,289,175);

      line(240,150,210,120);
      line(239,150,209,120);      //hands
      line(240,150,210,180);
      line(239,150,209,180);   }
    if(y==110)
    { setcolor(LIGHTRED);
      circle(175,180,20);
      circle(175,180,19);         //face

      circle(170,170,2);         //eyes
      circle(170,190,2);

      arc(175,180,310,410,13);

      line(195,180,235,180);                      //DIVE.............
      line(194,180,234,180);      //body

      line(235,180,260,155);
      line(234,180,259,155);      //legs          //GOALKEEPER
      line(235,180,260,205);
      line(234,180,259,205);

      line(210,180,180,150);
      line(209,180,179,150);      //hands
      line(210,180,180,210);
      line(209,180,179,210);
      sleep(1);           }



 }

   showmouse();

  for(i=0;i<3;i++,a+=15)
{  setcolor(WHITE);
   circle(a,b,15);                       //cover up for black
   setfillstyle(1,BLACK);
   floodfill(a,b,WHITE);
   setcolor(BLACK);
   circle(a,b,15);
}

   a=150,b=190;
 for(i=0;i<8;i++,a+=10)
 {  setcolor(WHITE);
    circle(a,b,10);                       //cover up for black
    setfillstyle(1,BLACK);
    floodfill(a,b,WHITE);
    setcolor(BLACK);
    circle(a,b,10);
 }

  a=140,b=205;
 for(i=0;i<20;i++,a+=5)
 { setcolor(WHITE);
   circle(a,b,5);                        //cover up for green
   setfillstyle(1,GREEN);
   floodfill(a,b,WHITE);
   setcolor(GREEN);
   circle(a,b,5);
  }
      setcolor(BLACK);
      circle(175,180,20);
      circle(175,180,19);         //face

      circle(170,170,2);         //eyes
      circle(170,190,2);

      arc(175,180,310,410,13);

      line(195,180,235,180);                      //DIVE.............
      line(194,180,234,180);      //body

      line(235,180,260,155);
      line(234,180,259,155);      //legs          //GOALKEEPER
      line(235,180,260,205);
      line(234,180,259,205);

      line(210,180,180,150);
      line(209,180,179,150);      //hands
      line(210,180,180,210);
      line(209,180,179,210);

      a=170;b=210;
   for(i=0;i<80;i++,a+=8)
 { setcolor(WHITE);
   circle(a,b,10);                        //cover up for green
   setfillstyle(1,GREEN);
   floodfill(a,b,WHITE);
   setcolor(GREEN);
   circle(a,b,10);
  }

   hidemouse();
   setcolor(BLACK);
   circle(285,250,25);
   setfillstyle(5,RED); 	         //football
   floodfill(285,250,BLACK);

  setcolor(WHITE);

  for(i=0;i<3;i++)
  {
  setcolor(GREEN);
   circle(200,356,17);	      //SHOOTER
  circle(200,356,16);
  line(200,375,200,415);     //BODY
  line(200,374,200,414);

  line(200,385,180,399);      //HANDS
  line(200,384,180,398);
  line(200,385,220,399);
  line(200,384,220,398);

  line(200,415,219,435);
  line(200,416,219,436);
  line(200,415,181,435);
  line(200,416,181,436);

  //////jump
  setcolor(LIGHTRED);
  circle(200,336,17);	      //SHOOTER
  circle(200,336,16);
  line(200,355,200,395);     //BODY
  line(200,354,200,394);

  line(200,365,180,351);      //HANDS
  line(200,364,180,350);
  line(200,365,220,351);
  line(200,364,220,350);
			       //legs
  line(200,395,219,415);
  line(200,396,219,416);
  line(200,395,181,415);
  line(200,396,181,416);

  delay(300);
  setcolor(GREEN);
  circle(200,336,17);	      //SHOOTER
  circle(200,336,16);
  line(200,355,200,395);     //BODY
  line(200,354,200,394);

  line(200,365,180,351);      //HANDS
  line(200,364,180,350);
  line(200,365,220,351);
  line(200,364,220,350);
			       //legs
  line(200,395,219,415);
  line(200,396,219,416);
  line(200,395,181,415);
  line(200,396,181,416);


  setcolor(LIGHTRED);
  circle(200,356,17);	      //SHOOTER
  circle(200,356,16);
  line(200,375,200,415);     //BODY
  line(200,374,200,414);

  line(200,385,180,399);      //HANDS
  line(200,384,180,398);
  line(200,385,220,399);
  line(200,384,220,398);

  line(200,415,219,435);
  line(200,416,219,436);
  line(200,415,181,435);
  line(200,416,181,436);

  delay(300);

 }

  for(i=1;i<=60;i++)
  {  setcolor(i);
     settextstyle(GOTHIC_FONT,0,5);       //GOAL!!!!!
     outtextxy(207,95,"GOAL !!!");

   line(0,200,639,200);
   line(119,25,119,200);
   line(120,25,120,200);
   line(121,25,121,200);

   line(449,25,449,200);
   line(450,25,450,200);
   line(451,25,451,200);

   line(119,25,449,25);
   line(120,25,450,25);
   line(121,25,451,25);
   line(122,25,452,25);

   setfillstyle(1,i+5);            //BEHIND GOAL
   floodfill(50,100,i);
     delay(70);    }
   goals++;

   delay(800);
   setcolor(WHITE);

   line(0,200,639,200);
   line(119,25,119,200);
   line(120,25,120,200);
   line(121,25,121,200);
				     //back to normal
   line(449,25,449,200);
   line(450,25,450,200);
   line(451,25,451,200);

   line(119,25,449,25);
   line(120,25,450,25);
   line(121,25,451,25);
   line(122,25,452,25);

   setfillstyle(1,BLACK);
   floodfill(280,80,WHITE);
 }




 ///////////////////////////RIGHT SIDE GOAL//////////////////////////////////

   if(c==2)
    { setcolor(BLACK);
      line(350,25,350,200);
      line(220,25,220,200);
      setcolor(WHITE);			     // AREA SELECT
      hidemouse();

      for(  ;y>=165 && x<=330;y-=2,p*=-1)
   {  setcolor(WHITE);
      circle(x,y,25);                          //BALL MOVING
      if(k==1)
	setfillstyle(5,RED);
      else
	setfillstyle(4,RED);

      floodfill(x,y,WHITE);
      delay(8);
      if(y>180)
      { setfillstyle(1,GREEN);
	floodfill(x,y,WHITE);
	setcolor(GREEN);
	circle(x,y,25);       }
      else
      { setfillstyle(1,BLACK);
	floodfill(x,y,WHITE);
	setcolor(BLACK);
	circle(x,y,25);       }

      if(y<=200)
	 k=-1;
      if(p==1)
	 x++;
      if(y<=250)
	 x++;         }

      int a=330,b=188;
  for(i=0;i<10;i++,a+=5)
{  setcolor(WHITE);
   circle(a,b,12);                       //cover up  for black
   setfillstyle(1,BLACK);
   floodfill(a,b,WHITE);
   setcolor(BLACK);
   circle(a,b,12);
		    }

  setcolor(WHITE);
   circle(350,170,12);                       //cover up for black
   setfillstyle(1,BLACK);
   floodfill(350,170,WHITE);
   setcolor(BLACK);
   circle(350,170,12);


  a=355,b=205;
 for(i=0;i<15;i++,a+=5)
 { setcolor(WHITE);
   circle(a,b,5);                        //cover up for green
   setfillstyle(1,GREEN);
   floodfill(a,b,WHITE);
   setcolor(GREEN);
   circle(a,b,5);
  }
  setcolor(WHITE);
  line(120,200,450,200);
  setfillstyle(1,GREEN);
  floodfill(324,202,WHITE);

  setfillstyle(1,BLACK);
  floodfill(250,150,WHITE);

    setcolor(LIGHTRED);
   circle(365,130,20);        //face
   circle(365,130,19);

   circle(365,119,2);         //eyes
   circle(375,134,2);

   arc(365,130,165,262,13);

   line(345,135,313,147);     //body
   line(345,134,313,146);                       //DIVE....ri8

   line(332,139,350,102);
   line(332,140,350,103);     //hands
   line(332,139,366,161);
   line(332,140,366,162);

   line(313,146,277,130);     //legs
   line(313,147,277,131);
   line(313,147,291,179);
   line(313,148,291,180);


  delay(100);
  setfillstyle(1,BLACK);
  floodfill(250,150,WHITE);

  setcolor(LIGHTRED);              //FALLEN GOALKEEPER
  circle(385,180,20);    //face
  circle(385,180,19);

  circle(390,171,2);
  circle(391,186,2);      //eyes
  arc(385,180,135,225,12);

  line(365,180,325,180);     //body
  line(365,181,325,181);

  line(352,180,372,160);
  line(352,179,372,159);    //hands
  line(351,180,371,200);
  line(351,179,371,199);

  line(325,180,302,162);
  line(325,179,301,161);
  line(325,180,302,200);
  line(325,179,302,199);


  for(x=330,y=165,k=1;x<=600 && y<=400;x+=1,y+=2,k*=-1)
  { setcolor(WHITE);
      circle(x,y,25);                          //BALL MOVING
      if(k==1)
	setfillstyle(5,RED);
      else
	setfillstyle(4,RED);

      floodfill(x,y,WHITE);
      delay(8);
      if(y>225)
      { setfillstyle(1,GREEN);
	floodfill(x,y,WHITE);
	setcolor(GREEN);
	circle(x,y,25);       }
      else
      { setfillstyle(1,BLACK);
	floodfill(x,y,WHITE);
	setcolor(BLACK);
	circle(x,y,25);       }
    if(y==205)
    {   setcolor(LIGHTRED);              //FALLEN GOALKEEPER
	circle(385,180,20);    //face
	circle(385,180,19);

	circle(390,171,2);
	circle(391,186,2);      //eyes
	arc(385,180,135,225,12);

	line(365,180,325,180);     //body
	line(365,181,325,181);

	line(352,180,372,160);
	line(352,179,372,159);    //hands
	line(351,180,371,200);
	line(351,179,371,199);

	line(325,180,302,162);
	line(325,179,301,161);
	line(325,180,302,200);
	line(325,179,302,199);
	}
	if(y==215)
    {   setcolor(LIGHTRED);              //FALLEN GOALKEEPER
	circle(385,180,20);    //face
	circle(385,180,19);

	circle(390,171,2);
	circle(391,186,2);      //eyes
	arc(385,180,135,225,12);

	line(365,180,325,180);     //body
	line(365,181,325,181);

	line(352,180,372,160);
	line(352,179,372,159);    //hands
	line(351,180,371,200);
	line(351,179,371,199);

	line(325,180,302,162);
	line(325,179,301,161);
	line(325,180,302,200);
	line(325,179,302,199);
	}
      if(y==251)
      { setcolor(WHITE);
	line(0,200,639,200);
	setfillstyle(1,GREEN);
	floodfill(330,210,WHITE);   }
  }

      setcolor(0);              //FALLEN GOALKEEPER
	circle(385,180,20);    //face
	circle(385,180,19);

	circle(390,171,2);
	circle(391,186,2);      //eyes
	arc(385,180,135,225,12);

	line(365,180,325,180);     //body
	line(365,181,325,181);

	line(352,180,372,160);
	line(352,179,372,159);    //hands
	line(351,180,371,200);
	line(351,179,371,199);

	line(325,180,302,162);
	line(325,179,301,161);
	line(325,180,302,200);
	line(325,179,302,199);

   setcolor(RED);
   settextstyle(GOTHIC_FONT,0,5);                //NOT GOAL
   outtextxy(132,95,"YOU MISSED!!!");
   delay(2000);
   setcolor(0);
   settextstyle(GOTHIC_FONT,0,5);                //NOT GOAL
   outtextxy(132,95,"YOU MISSED!!!");



 }
////////////////////////////////NOT GOAL/////////////////////////////////////

 else if(c==3)
 {
	for(  ;y>=225 && x<=420;y-=2)
	{  setcolor(WHITE);
	   circle(x,y,25);                          //BALL MOVING
	  if(k==1)
	   setfillstyle(5,RED);
       else
	  setfillstyle(4,RED);

	  floodfill(x,y,WHITE);
	  delay(8);
	  if(y>180)
	   { setfillstyle(1,GREEN);
	     floodfill(x,y,WHITE);
	      setcolor(GREEN);
	      circle(x,y,25);       }
	 else
	  { setfillstyle(1,BLACK);
	    floodfill(x,y,WHITE);
	    setcolor(BLACK);
	    circle(x,y,25);       }

	   if(y<=200)
	      k=-1;
	}


    for(  ;y<=400 && x<=420;y+=2,x+=2)
   {  setcolor(WHITE);
      circle(x,y,25);                          //BALL MOVING
      if(k==1)
	setfillstyle(5,RED);
      else
	setfillstyle(4,RED);

      floodfill(x,y,WHITE);
      delay(8);

       setfillstyle(1,GREEN);
	floodfill(x,y,WHITE);
	setcolor(GREEN);
	circle(x,y,25);

     }
   setcolor(WHITE);
   line(0,200,639,200);

				  //goalie celebrations
   for(i=0;i<7;i++)
 {  setcolor(LIGHTRED);

    circle(285,110,20);
    circle(285,110,19);         //face

    circle(275,105,2);         //eyes
    circle(295,105,2);

    arc(285,110,220,320,13);

    line(285,130,285,170);
    line(284,130,284,170);      //body

    line(285,170,265,200);
    line(284,170,264,200);      //legs          ////////GOALKEEPER
    line(285,170,305,200);
    line(284,170,304,200);

    line(285,140,265,160);
    line(284,140,264,160);      //hands
    line(285,140,305,160);
    line(284,140,304,160);
    delay(250);

    setcolor(BLACK);

    circle(285,110,20);
    circle(285,110,19);

   circle(275,105,2);
   circle(295,105,2);

   arc(285,110,220,320,13);

   line(285,130,285,170);
   line(284,130,284,170);

   line(285,170,265,200);
   line(284,170,264,200);
   line(285,170,305,200);
   line(284,170,304,200);

   line(285,140,265,160);
   line(284,140,264,160);
   line(285,140,305,160);
   line(284,140,304,160);

    setcolor(LIGHTRED);
    circle(285,100,20);
    circle(285,100,19);

    circle(275,95,2);
    circle(295,95,2);

    arc(285,100,220,320,13);

    line(285,120,285,160);
    line(284,120,284,160);

    line(285,160,265,190);
    line(284,160,264,190);
    line(285,160,305,190);
    line(284,160,304,190);

    line(285,130,265,110);
    line(284,130,264,110);
    line(285,130,305,110);
    line(284,130,304,110);

    delay(250);
    setcolor(BLACK);
    circle(285,100,20);
    circle(285,100,19);

    circle(275,95,2);
    circle(295,95,2);

    arc(285,100,220,320,13);             //GOALIE CELEBRATIONS

    line(285,120,285,160);
    line(284,120,284,160);

    line(285,160,265,190);
    line(284,160,264,190);
    line(285,160,305,190);
    line(284,160,304,190);

    line(285,130,265,110);
    line(284,130,264,110);
    line(285,130,305,110);
    line(284,130,304,110);


   }
     delay(200);
     setcolor(LIGHTRED);
     circle(295,180,15);
     circle(295,180,14);         //face

     circle(290,187,2);         //eyes
     circle(300,187,2);

     arc(295,180,50,130,8);

     line(295,165,295,125);
     line(294,165,294,125);      //body

     line(295,125,270,110);
     line(294,125,271,110);      //legs           //GOALKEEPER
     line(295,125,320,110);
     line(294,125,321,110);

     line(295,150,276,186);
     line(294,150,275,186);      //hands
     line(295,150,315,186);
     line(294,150,314,186);

     delay(200);

     setcolor(BLACK);
     circle(295,180,15);
     circle(295,180,14);         //face

     circle(290,187,2);         //eyes
     circle(300,187,2);

     arc(295,180,50,130,8);

     line(295,165,295,125);
     line(294,165,294,125);      //body

     line(295,125,270,110);
     line(294,125,271,110);      //legs           //GOALKEEPER
     line(295,125,320,110);
     line(294,125,321,110);

     line(295,150,276,186);
     line(294,150,275,186);      //hands
     line(295,150,315,186);
     line(294,150,314,186);

     delay(200);
     setcolor(LIGHTRED);
     circle(305,100,20);
     circle(305,100,19);

     circle(295,95,2);
     circle(315,95,2);

     arc(305,100,220,320,13);             //GOALIE CARTWHEEL

     line(305,120,305,160);
     line(304,120,304,160);

     line(305,160,285,190);
     line(304,160,284,190);
     line(305,160,325,190);
     line(304,160,324,190);

     line(305,130,285,110);
     line(304,130,284,110);
     line(305,130,325,110);
     line(304,130,324,110);

     delay(400);
     setcolor(BLACK);
     circle(305,100,20);
     circle(305,100,19);

     circle(295,95,2);
     circle(315,95,2);

     arc(305,100,220,320,13);             //GOALIE CARTWHEEL

     line(305,120,305,160);
     line(304,120,304,160);

     line(305,160,285,190);
     line(304,160,284,190);
     line(305,160,325,190);
     line(304,160,324,190);

     line(305,130,285,110);
     line(304,130,284,110);
     line(305,130,325,110);
     line(304,130,324,110);



   setcolor(YELLOW);
   settextstyle(GOTHIC_FONT,0,5);                //NOT GOAL
   outtextxy(132,95,"YOU FAILED!!!");
   sleep(1);
   setcolor(BLACK);
   settextstyle(GOTHIC_FONT,0,5);
   outtextxy(132,95,"YOU FAILED!!!");
  }


}
 cleardevice();
 delay(1000);
 if(goals==5)
  { setcolor(RED);
    setbkcolor(LIGHTBLUE);
    settextstyle(TRIPLEX_FONT,0,5);
    outtextxy(132,200,"GOALS SCORED:5");
    sleep(1);
    cleardevice();
    setcolor(LIGHTGREEN);
    outtextxy(180,200,"AWESOME !!!");
   }

  else if(goals==4)
  { setcolor(RED);
    setbkcolor(LIGHTBLUE);
    settextstyle(TRIPLEX_FONT,0,5);
    outtextxy(132,200,"GOALS SCORED:4");
    sleep(2);
    cleardevice();
    setcolor(LIGHTGREEN);
    outtextxy(180,200,"GR8 PLAY !!!");
   }

   else if(goals==3)
  { setcolor(RED);
    setbkcolor(LIGHTBLUE);
    settextstyle(TRIPLEX_FONT,0,5);
    outtextxy(132,200,"GOALS SCORED:3");
    sleep(2);
    cleardevice();
    setcolor(LIGHTGREEN);
    outtextxy(180,200,"GOOD WORK !!!");
   }

   else if(goals==2)
  { setcolor(RED);
    setbkcolor(LIGHTBLUE);
    settextstyle(TRIPLEX_FONT,0,5);
    outtextxy(132,200,"GOALS SCORED:2");
    sleep(2);
    cleardevice();
    setcolor(LIGHTGREEN);
    outtextxy(180,200,"FINE TRY !!!");
   }

   else if(goals==1)
  { setcolor(RED);
    setbkcolor(LIGHTBLUE);
    settextstyle(TRIPLEX_FONT,0,5);
    outtextxy(132,200,"GOALS SCORED:1");
    sleep(2);
    cleardevice();
    setcolor(LIGHTGREEN);
    outtextxy(180,200,"TRY AGAIN !!!");
   }

   else if(goals==0)
  { setcolor(RED);
    setbkcolor(LIGHTBLUE);
    settextstyle(TRIPLEX_FONT,0,5);
    outtextxy(132,200,"GOALS SCORED:0");
    sleep(2);
    cleardevice();
    setcolor(LIGHTGREEN);
    outtextxy(180,200,"WORK HARDER !!!");
   }
  delay(1500);
  cleardevice();
  count++;
  goto label;
}