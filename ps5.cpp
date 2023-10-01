#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>

#include "fssimplewindow.h"

// game over
void GameOver(void)
{
    glBegin(GL_LINES);

    glColor3f(0,0,0);
    // G
    glVertex2i(200,200);
    glVertex2i(225,200);

    glVertex2i(200,200);
    glVertex2i(200,250);

    glVertex2i(200,250);
    glVertex2i(225,250);

    glVertex2i(225,250);
    glVertex2i(225,225);

    glVertex2i(225,225);
    glVertex2i(212,225);

    // A
    glVertex2i(235,250);
    glVertex2i(235,200);

    glVertex2i(260,200);
    glVertex2i(260,250);

    glVertex2i(235,225);
    glVertex2i(260,225);

    glVertex2i(235,200);
    glVertex2i(260,200);

    //M
    glVertex2i(270,200);
    glVertex2i(270,250);

    glVertex2i(282,200);
    glVertex2i(282,250);

    glVertex2i(295,200);
    glVertex2i(295,250);

    glVertex2i(270,200);
    glVertex2i(295,200);

    //E
    glVertex2i(305,200);
    glVertex2i(305,250);

    glVertex2i(305,200);
    glVertex2i(330,200);

    glVertex2i(305,225);
    glVertex2i(330,225);

    glVertex2i(305,250);
    glVertex2i(330,250);

    //O
    glVertex2i(355,200);
    glVertex2i(355,250);

    glVertex2i(380,200);
    glVertex2i(380,250);

    glVertex2i(355,200);
    glVertex2i(380,200);

    glVertex2i(355,250);
    glVertex2i(380,250);

    //V
    glVertex2i(390,200);
    glVertex2i(402,250);

    glVertex2i(402,250);
    glVertex2i(415,200);

    //E
    glVertex2i(425,200);
    glVertex2i(425,250);

    glVertex2i(425,200);
    glVertex2i(450,200);

    glVertex2i(425,225);
    glVertex2i(450,225);

    glVertex2i(425,250);
    glVertex2i(450,250);

    //R
    glVertex2i(460,200);
    glVertex2i(460,250);

    glVertex2i(460,200);
    glVertex2i(485,200);

    glVertex2i(485,200);
    glVertex2i(485,225);
    
    glVertex2i(460,225);
    glVertex2i(485,225);

    glVertex2i(460,225);
    glVertex2i(485,250);


    glEnd();

}

// opening credits
void OpenCredits(void)
{
    glBegin(GL_LINES);

    glColor3f(0,0,0);
    // G
    glVertex2i(100,200);
    glVertex2i(125,200);

    glVertex2i(100,200);
    glVertex2i(100,250);

    glVertex2i(100,250);
    glVertex2i(125,250);

    glVertex2i(125,250);
    glVertex2i(125,225);

    glVertex2i(125,225);
    glVertex2i(112,225);

    // A
    glVertex2i(135,250);
    glVertex2i(147,200);

    glVertex2i(147,200);
    glVertex2i(150,250);

    glVertex2i(140,225);
    glVertex2i(147,225);

    glEnd();
}

void DrawCircle(double bx, double by, double rad)
{
    glColor3f(1,1,1);
    glBegin(GL_TRIANGLE_FAN);
    for(int i=0; i<64; ++i)
    {
        double ang=3.14*(double)i/32;
        double s=sin(ang);
        double c=cos(ang);
        double x=bx+rad*c;
        double y=by+rad*s;
        glVertex2d(x,y);
    }
    glEnd();
}

void ShowLevel(int level)
{
    glShadeModel(GL_SMOOTH);

    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA,GL_ONE_MINUS_SRC_ALPHA);

    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0,0,0);
    glVertex2i(0,0);

    glColor3f(1,1,1);
    glVertex2i(800,0);

    glColor3f(0,0,0);
    glVertex2i(800,600);

    glColor3f(1,1,1);
    glVertex2i(0,600);

    glEnd();

        glEnable(GL_LINE_STIPPLE);
    glLineStipple(1,0b1111000011110000);
    glColor3f(0,1,0);

    glBegin(GL_LINES);

    // L
    glVertex2i(300,20);
    glVertex2i(300,50);
    glVertex2i(300,50);
    glVertex2i(320,50);

    // E
    glVertex2i(330,20);
    glVertex2i(330,50);
    glVertex2i(330,50);
    glVertex2i(350,50);
    glVertex2i(330,35);
    glVertex2i(350,35);
    glVertex2i(330,20);
    glVertex2i(350,20);

    // V
    glVertex2i(360,20);
    glVertex2i(370,50);
    glVertex2i(370,50);
    glVertex2i(380,20);

    // E
    glVertex2i(390,20);
    glVertex2i(390,50);
    glVertex2i(390,50);
    glVertex2i(410,50);
    glVertex2i(390,35);
    glVertex2i(410,35);
    glVertex2i(390,20);
    glVertex2i(410,20);

    // L
    glVertex2i(420,20);
    glVertex2i(420,50);
    glVertex2i(420,50);
    glVertex2i(440,50);

        // change number based on level
    if(1==level)
    {
        // 1
        glVertex2i(460,20);
        glVertex2i(460,50);
        glVertex2i(450,50);
        glVertex2i(470,50);
        glVertex2i(460,20);
        glVertex2i(450,27);
    }
    if(2==level)
    {
        // 2
        glVertex2i(450,20);
        glVertex2i(470,20);
        glVertex2i(470,20);
        glVertex2i(470,35);
        glVertex2i(470,35);
        glVertex2i(450,35);
        glVertex2i(450,35);
        glVertex2i(450,50);
        glVertex2i(450,50);
        glVertex2i(470,50);
    }
    if(3==level)
    {
        // 3
        glVertex2i(470,20);
        glVertex2i(470,50);
        glVertex2i(450,20);
        glVertex2i(470,20);
        glVertex2i(450,35);
        glVertex2i(470,35);
        glVertex2i(450,50);
        glVertex2i(470,50);
    }
    if(4==level)
    {
        // 4
        glVertex2i(450,20);
        glVertex2i(450,35);
        glVertex2i(450,35);
        glVertex2i(470,35);
        glVertex2i(470,20);
        glVertex2i(470,50);
    }
    if(5==level)
    {
        //5
        glVertex2i(470,20);
        glVertex2i(450,20);
        glVertex2i(450,20);
        glVertex2i(450,35);
        glVertex2i(450,35);
        glVertex2i(470,35);
        glVertex2i(470,35);
        glVertex2i(470,50);
        glVertex2i(470,50);
        glVertex2i(450,50);
    }
    if(6==level)
    {
        // 6
        glVertex2i(470,20);
        glVertex2i(450,20);
        glVertex2i(450,20);
        glVertex2i(450,50);
        glVertex2i(450,50);
        glVertex2i(470,50);
        glVertex2i(470,50);
        glVertex2i(470,35);
        glVertex2i(470,35);
        glVertex2i(450,35);
    }
    if(7==level)
    {
        // 7
        glVertex2i(450,20);
        glVertex2i(470,20);
        glVertex2i(470,20);
        glVertex2i(450,50);
    }
    if(8==level)
    {
        // 8
        glVertex2i(450,20);
        glVertex2i(450,50);

        glVertex2i(450,50);
        glVertex2i(470,50);

        glVertex2i(470,50);
        glVertex2i(470,20);

        glVertex2i(470,20);
        glVertex2i(450,20);

        glVertex2i(450,35);
        glVertex2i(470,35);
    }
    if(9==level)
    {
        // 9
        glVertex2i(470,35);
        glVertex2i(450,35);

        glVertex2i(450,35);
        glVertex2i(450,20);

        glVertex2i(450,20);
        glVertex2i(470,20);

        glVertex2i(470,20);
        glVertex2i(470,50);

        glVertex2i(470,50);
        glVertex2i(450,50);
    }
    if(10==level)
    {
        // 10
        glVertex2i(460,20);
        glVertex2i(460,50);

        glVertex2i(450,50);
        glVertex2i(470,50);

        glVertex2i(460,20);
        glVertex2i(450,27);

        glVertex2i(480,20);
        glVertex2i(500,20);

        glVertex2i(500,20);
        glVertex2i(500,50);

        glVertex2i(500,50);
        glVertex2i(480,50);

        glVertex2i(480,50);
        glVertex2i(480,20);
    }
    if(11==level)
    {
        glVertex2i(460,20);
        glVertex2i(460,50);

        glVertex2i(450,50);
        glVertex2i(470,50);

        glVertex2i(460,20);
        glVertex2i(450,27);

        glVertex2i(470,20);
        glVertex2i(470,50);

        glVertex2i(460,50);
        glVertex2i(480,50);

        glVertex2i(470,20);
        glVertex2i(460,27);
    }
    glDisable(GL_LINE_STIPPLE);

    glEnd();

    // make the balls
    int nBalls = level;

    for(int i=0; i<nBalls; ++i)
    {
        DrawCircle(50 + 50*i,300,15);
    }
}

const double RgPi = 3.14159;


void DrawPaddle(int x, int y, int w, int h)
{
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex2i(x,y);
    glVertex2i(x+w,y);
    glVertex2i(x+w,y+h);
    glVertex2i(x,y+h);
    glEnd();
}

// draw background
void Background(void)
{
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0,0,0);
    glVertex2i(0,0);
    glVertex2i(800,0);
    glVertex2i(800,600);
    glVertex2i(0,600);
    glEnd();
}

// draw ball
void DrawBall(double x, double y, double rad)
{
   glColor3f(1,1,1);
   glBegin(GL_TRIANGLE_FAN);
   for(int i=0; i<64; ++i)
   {
       double ang = RgPi*(double)i/32;
       double s=sin(ang);
       double c=cos(ang);
       double bx=x+rad*c;
       double by=y+rad*s;
       glVertex2d(bx,by);
   }
   glEnd();
}



int main(void)
{
    int start_time,end_time,total_time;
    // variables for paddle
    int p_x=0;
    int p_y=0;
    int p_w=15;
    int p_h=150;

    // set level to 1, hits to 0
    int level=1;
    int hits=0;

    // variables for ball
    srand(time(NULL));
    int b_x=rand()%400 + 400;
    int b_y=rand()%600;
    int b_r=15;
    int b_vx=3 + .75*level;
    int b_vy=2 + .75*level;

    FsOpenWindow(0,0,800,600,1);
    // opening credits
/*    start_time=time(NULL);
    total_time=0;
    while(total_time<(start_time + 5))
    {
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
        OpenCredits();
        FsSwapBuffers();
        FsSleep(5);
        total_time=time(NULL);
    } */
    // Display first level
    start_time=time(NULL);
    total_time=0;
    while(total_time<(start_time + 5))
    {
        ShowLevel(level);
        FsSwapBuffers();
        FsSleep(5);
        total_time=time(NULL);
    }
    for(;;)
    {
        FsPollDevice();
        auto key=FsInkey();
        if(FSKEY_ESC==key)
        {
            break;
        }

        if(0!=FsGetKeyState(FSKEY_DOWN))
        {
            p_y += 10;
            if(600<(p_y + p_h))
            {
                p_y = 600 - p_h;
            }
        }
        if(0!=FsGetKeyState(FSKEY_UP))
        {
            p_y -= 10;
            if(0>p_y)
            {
                p_y = 0;
            }
        }

        // make sure ball stays in the window
        if(800 < (b_x+b_r) && 0 < b_vx)
        {
            b_vx = -(4 + level);
        }
        if(600 < (b_y+b_r) && 0 < b_vy)
        {
            b_vy = -(5 + .75*level);
        }
        if(0 > (b_y-b_r) && 0 > b_vy)
        {
            b_vy = (5 + .75*level);
        }

        // make ball bounce off paddle
        if((b_x - b_r) < (p_w) && -b_r < (b_x))
        {
            if (b_y > p_y && b_y < (p_y + p_h))
            {
                b_vx = -b_vx;
                b_vy = -b_vy;
                hits += 1;
                // increment level every 5 hits
                if(1 < hits && 0 == hits%5)
                    {
                        level += 1;
                        start_time=time(NULL);
                        total_time=0;
                        while(total_time<(start_time + 5))
                        {
                            ShowLevel(level);
                            FsSwapBuffers();
                            FsSleep(1);
                            total_time=time(NULL);
                        }
                    }
            }
        }

        // ball moves
        b_x = b_x + b_vx;
        b_y = b_y + b_vy;

        

       glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

       if(b_x<-b_r)
        {
            //start_time=time(NULL);
            //total_time=0;
           // while(total_time<(start_time + 5))
            //{
                GameOver();
                FsSwapBuffers();
                FsSleep(50);
               // total_time=time(NULL);
            //}
       }
       else
       {
       Background();

       DrawPaddle(p_x,p_y,p_w,p_h);
       DrawBall(b_x,b_y,b_r);

       FsSwapBuffers();
       FsSleep(5);
        }
    }

    std::cout << "You hit the ball: " << hits << " times" << std::endl;

    std::cout << "You reached level: " << level << std::endl;

    return 0;
}
