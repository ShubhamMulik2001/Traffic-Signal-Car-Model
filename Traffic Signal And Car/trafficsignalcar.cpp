#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void go();
void stop();
void start();

int main()
{
    int i = 0, j = 0, gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	setcolor(15);
//CAR
	for (j = 0; j <= 150;j++)
    {
        if(j < 65)
        {
            setcolor(15);
            line(0 + i, 300, 210 + i, 300);
            setfillstyle(1,YELLOW);
            rectangle(200 + i, 300, 210 + i, 310);
            floodfill(201 + i, 301, WHITE);
            setfillstyle(1,LIGHTRED);
            rectangle(0 + i, 300, 10 + i, 315);
            floodfill(1 + i, 301, WHITE);
            line(30 + i, 300, 55 + i, 270);
            line(55 + i, 270, 140 + i, 270);
            line(140 + i, 270, 165 + i, 300);
            line(0 + i, 300, 0 + i, 330);
            line(210 + i, 300, 210 + i, 330);
            setcolor(15);
            line(0,345,1500,345);
            line(0,245,1500,245);
            setfillstyle(3, WHITE);
            rectangle(868, 245, 925, 345);
            floodfill(869, 255, WHITE);
            circle(65 + i, 330, 15);
            setfillstyle(1, WHITE);
            circle(65 + i, 330, 3);
            floodfill(67 + i, 332, WHITE);
            circle(145 + i, 330, 15);
            setfillstyle(1, WHITE);
            circle(145 + i, 330, 3);
            floodfill(147 + i, 332, WHITE);
            line(0 + i, 330, 50 + i, 330);
            line(80 + i, 330, 130 + i, 330);
            line(210 + i, 330, 160 + i, 330);
            i = i + 10;
            delay(100);
            cleardevice();
            go();
        }
        else if(j > 65 && j < 80)
        {
            setcolor(15);
            line(0 + i, 300, 210 + i, 300);
            setfillstyle(1,YELLOW);
            rectangle(200 + i, 300, 210 + i, 310);
            floodfill(201 + i, 301, WHITE);
            setfillstyle(1,RED);
            rectangle(0 + i, 300, 10 + i, 315);
            floodfill(1 + i, 301, WHITE);
            line(30 + i, 300, 55 + i, 270);
            line(55 + i, 270, 140 + i, 270);
            line(140 + i, 270, 165 + i, 300);
            line(0 + i, 300, 0 + i, 330);
            line(210 + i, 300, 210 + i, 330);
            setcolor(15);
            line(0,345,1500,345);
            line(0,245,1500,245);
            setfillstyle(3, WHITE);
            rectangle(868, 245, 925, 345);
            floodfill(869, 255, WHITE);
            circle(65 + i, 330, 15);
            setfillstyle(1, WHITE);
            circle(65 + i, 330, 3);
            floodfill(67 + i, 332, WHITE);
            circle(145 + i, 330, 15);
            setfillstyle(1, WHITE);
            circle(145 + i, 330, 3);
            floodfill(147 + i, 332, WHITE);
            line(0 + i, 330, 50 + i, 330);
            line(80 + i, 330, 130 + i, 330);
            line(210 + i, 330, 160 + i, 330);
            //i = i + 10;
            delay(100);
            cleardevice();
            stop();
        }
        else if(j > 80 && j < 100)
        {
            setcolor(15);
            line(0 + i, 300, 210 + i, 300);
            setfillstyle(1,YELLOW);
            rectangle(200 + i, 300, 210 + i, 310);
            floodfill(201 + i, 301, WHITE);
            setfillstyle(1,RED);
            rectangle(0 + i, 300, 10 + i, 315);
            floodfill(1 + i, 301, WHITE);
            line(30 + i, 300, 55 + i, 270);
            line(55 + i, 270, 140 + i, 270);
            line(140 + i, 270, 165 + i, 300);
            line(0 + i, 300, 0 + i, 330);
            line(210 + i, 300, 210 + i, 330);
            setcolor(15);
            line(0,345,1500,345);
            line(0,245,1500,245);
            setfillstyle(3, WHITE);
            rectangle(868, 245, 925, 345);
            floodfill(869, 255, WHITE);
            circle(65 + i, 330, 15);
            setfillstyle(1, WHITE);
            circle(65 + i, 330, 3);
            floodfill(67 + i, 332, WHITE);
            circle(145 + i, 330, 15);
            setfillstyle(1, WHITE);
            circle(145 + i, 330, 3);
            floodfill(147 + i, 332, WHITE);
            line(0 + i, 330, 50 + i, 330);
            line(80 + i, 330, 130 + i, 330);
            line(210 + i, 330, 160 + i, 330);
          //  i = i + 10;
            delay(100);
            cleardevice();
            start();
        }
        else if(j > 100 && j < 150)
        {
            setcolor(15);
            line(0 + i, 300, 210 + i, 300);
            setfillstyle(1,YELLOW);
            rectangle(200 + i, 300, 210 + i, 310);
            floodfill(201 + i, 301, WHITE);
            setfillstyle(1,LIGHTRED);
            rectangle(0 + i, 300, 10 + i, 315);
            floodfill(1 + i, 301, WHITE);
            line(30 + i, 300, 55 + i, 270);
            line(55 + i, 270, 140 + i, 270);
            line(140 + i, 270, 165 + i, 300);
            line(0 + i, 300, 0 + i, 330);
            line(210 + i, 300, 210 + i, 330);
            setcolor(15);
            line(0,345,1500,345);
            line(0,245,1500,245);
            setfillstyle(3, WHITE);
            rectangle(868, 245, 925, 345);
            floodfill(869, 255, WHITE);
            circle(65 + i, 330, 15);
            setfillstyle(1, WHITE);
            circle(65 + i, 330, 3);
            floodfill(67 + i, 332, WHITE);
            circle(145 + i, 330, 15);
            setfillstyle(1, WHITE);
            circle(145 + i, 330, 3);
            floodfill(147 + i, 332, WHITE);
            line(0 + i, 330, 50 + i, 330);
            line(80 + i, 330, 130 + i, 330);
            line(210 + i, 330, 160 + i, 330);
            i = i + 10;
            delay(100);
            cleardevice();
            go();
        }
	}

	getch();

}

void go()
{
    circle(850,100,12);
    circle(850,130,12);
    setfillstyle(1,GREEN);
    circle(850,160,12);
    floodfill(852,162,WHITE);
    //Traccic Signal
    line(850,154,850,165);
    line(850,154,844,158);
    line(850,154,856,158);
    rectangle(870, 80, 890, 90);
    rectangle(830, 80, 870, 175);
    //line(870, 175, 890, 175);
    //line(870, 165, 890, 165);


    //line(890, 80, 910, 80);
    setfillstyle(5, YELLOW);
    rectangle(890, 80, 910, 245);
    floodfill(891, 100, WHITE);
}
void stop()
{
    setfillstyle(1,RED);
    circle(850,100,12);
    floodfill(852,102,WHITE);
    circle(850,130,12);
    circle(850,160,12);
    //Traccic Signal
    line(850,154,850,165);
    line(850,154,844,158);
    line(850,154,856,158);
    rectangle(870, 80, 890, 90);
    rectangle(830, 80, 870, 175);
    //line(870, 175, 890, 175);
    //line(870, 165, 890, 165);


    //line(890, 80, 910, 80);
    setfillstyle(5, YELLOW);
    rectangle(890, 80, 910, 245);
    floodfill(891, 100, WHITE);
}
void start()
{
    circle(850,100,12);
    setfillstyle(1,YELLOW);
    circle(850,130,12);
    floodfill(852,132,WHITE);
    circle(850,160,12);
    //Traccic Signal
    line(850,154,850,165);
    line(850,154,844,158);
    line(850,154,856,158);
    rectangle(870, 80, 890, 90);
    rectangle(830, 80, 870, 175);
    //line(870, 175, 890, 175);
    //line(870, 165, 890, 165);


    //line(890, 80, 910, 80);
    setfillstyle(5, YELLOW);
    rectangle(890, 80, 910, 245);
    floodfill(891, 100, WHITE);
}
