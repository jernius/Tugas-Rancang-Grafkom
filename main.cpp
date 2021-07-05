#include <stdlib.h>
#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
using namespace std;
float xrot = 0;
float yrot = 0;
float xdiff = 0;
float ydiff = 0;
bool mousedown = false;

void init(void);
void display(void);
void keyboard(unsigned char, int, int);
void resize(int, int);
void mouseMove(int x, int y);
void mouseButton(int button, int state, int x, int y);

int is_depth;
void mouseMove(int x, int y) {
    if (mousedown) {
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }
}

void mouseButton(int button, int state, int x, int y) {
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        mousedown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else {
        mousedown = false;
    }
    glutPostRedisplay();
}

void init(void)
{
    glClearColor(0.0, 1.0, 0.906, 0.0);
    glEnable(GL_DEPTH_TEST);
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(6.0f);

}
void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
    glRotatef(xrot, 1, 0, 0);
    glRotatef(yrot, 0, 1, 0);

    glBegin(GL_QUADS);//Jalan halaman Rumah
        glColor3f(0.2f, 0.2f, 0.2f);
        glVertex3f(-80.0, 0.0, -50.0);
        glColor3f(0.4f, 0.4f, 0.4f);
        glVertex3f(-80.0, 0.0, 50.0);
        glColor3f(0.6f, 0.6f, 0.6f);
        glVertex3f(80.0, 0.0, 50.0);
        glColor3f(0.8f, 0.8f, 0.8f);
        glVertex3f(80.0,0.0, -50.0);
    glEnd();
     glBegin(GL_LINE_LOOP);//Garis Halaman rumah
       glColor3f(255.0f, 255.0f, 255.0f);
       glVertex3f(-80.0, 0.0, -50.0);
       glVertex3f(-80.0, 0.0, 50.0);
       glVertex3f(80.0, 0.0, 50.0);
       glVertex3f(80.0,0.0, -50.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-3.0, 0.0, 4.0);
        glVertex3f(3.0, 0.0, 4.0);
        glVertex3f(3.0, 38.0, 4.0);
        glVertex3f(-3.0, 38.0, 4.0);
    glEnd();
 glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(3.0, 0.0, 4.0);
        glVertex3f(3.5, 0.0, 5.0);
        glVertex3f(3.5, 38.0, 5.0);
        glVertex3f(3.0, 38.0, 4.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(3.5, 0.0, 5.0);
        glVertex3f(4.5, 0.0, 5.0);
        glVertex3f(4.5, 38.0, 5.0);
        glVertex3f(3.5, 38.0, 5.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(4.5, 0.0, 5.0);
        glVertex3f(5.0, 0.0, 4.0);
        glVertex3f(5.0, 38.0, 4.0);
        glVertex3f(4.5, 38.0, 5.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(5.0, 0.0, 4.0);
        glVertex3f(5.0, 0.0, 3.0);
        glVertex3f(5.0, 38.0, 3.0);
        glVertex3f(5.0, 38.0, 4.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(5.0, 0.0, 3.0);
        glVertex3f(6.0, 0.0, 3.0);
        glVertex3f(6.0, 38.0, 3.0);
        glVertex3f(5.0, 38.0, 3.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(6.0, 0.0, 3.0);
        glVertex3f(6.0, 0.0, -3.0);
        glVertex3f(6.0, 38.0, -3.0);
        glVertex3f(6.0, 38.0, 3.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(6.0, 0.0, -3.0);
        glVertex3f(5.0, 0.0, -3.0);
        glVertex3f(5.0, 38.0, -3.0);
        glVertex3f(6.0, 38.0, -3.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(5.0, 0.0, -3.0);
        glVertex3f(5.0, 0.0, -4.0);
        glVertex3f(5.0, 38.0, -4.0);
        glVertex3f(5.0, 38.0, -3.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(5.0, 0.0, -4.0);
        glVertex3f(4.0, 0.0, -5.0);
        glVertex3f(4.0, 38.0, -5.0);
        glVertex3f(5.0, 38.0, -4.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(4.0, 0.0, -5.0);
        glVertex3f(-4.0, 0.0, -5.0);
        glVertex3f(-4.0, 38.0, -5.0);
        glVertex3f(4.0, 38.0, -5.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-4.0, 0.0, -5.0);
        glVertex3f(-5.0, 0.0, -4.0);
        glVertex3f(-5.0, 38.0, -4.0);
        glVertex3f(-4.0, 38.0, -5.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-5.0, 0.0, -4.0);
        glVertex3f(-5.0, 0.0, -3.0);
        glVertex3f(-5.0, 38.0, -3.0);
        glVertex3f(-5.0, 38.0, -4.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-5.0, 0.0, -3.0);
        glVertex3f(-6.0, 0.0, -3.0);
        glVertex3f(-6.0, 38.0, -3.0);
        glVertex3f(-5.0, 38.0, -3.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-6.0, 0.0, -3.0);
        glVertex3f(-6.0, 0.0, 3.0);
        glVertex3f(-6.0, 38.0, 3.0);
        glVertex3f(-6.0, 38.0, -3.0);
    glEnd();
glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-6.0, 0.0, 3.0);
        glVertex3f(-5.0, 0.0, 3.0);
        glVertex3f(-5.0, 38.0, 3.0);
        glVertex3f(-6.0, 38.0, 3.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-5.0, 0.0, 3.0);
        glVertex3f(-5.0, 0.0, 4.0);
        glVertex3f(-5.0, 38.0, 4.0);
        glVertex3f(-5.0, 38.0, 3.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-5.0, 0.0, 4.0);
        glVertex3f(-4.5, 0.0, 5.0);
        glVertex3f(-4.5, 38.0, 5.0);
        glVertex3f(-5.0, 38.0, 4.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-4.5, 0.0, 5.0);
        glVertex3f(-3.5, 0.0, 5.0);
        glVertex3f(-3.5, 38.0, 5.0);
        glVertex3f(-4.5, 38.0, 5.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-3.5, 0.0, 5.0);
        glVertex3f(-3.0, 0.0, 4.0);
        glVertex3f(-3.0, 38.0, 4.0);
        glVertex3f(-3.5, 38.0, 5.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-6.0, 0.0, 3.0);
        glVertex3f(-16.0, 0.0, 3.0);
        glVertex3f(-16.0, 20.0, 3.0);
        glVertex3f(-6.0, 20.0, 3.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(6.0, 0.0, 3.0);
        glVertex3f(16.0, 0.0, 3.0);
        glVertex3f(16.0, 20.0, 3.0);
        glVertex3f(6.0, 20.0, 3.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(6.0, 0.0, -3.0);
        glVertex3f(16.0, 0.0, -3.0);
        glVertex3f(16.0, 20.0, -3.0);
        glVertex3f(6.0, 20.0, -3.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-6.0, 0.0, -3.0);
        glVertex3f(-16.0, 0.0, -3.0);
        glVertex3f(-16.0, 20.0, -3.0);
        glVertex3f(-6.0, 20.0, -3.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-16.0, 0.0, 13.0);
        glVertex3f(-16.0, 0.0, -13.0);
        glVertex3f(-16.0, 20.0, -13.0);
        glVertex3f(-16.0, 20.0, 13.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(16.0, 0.0, 13.0);
        glVertex3f(16.0, 0.0, -13.0);
        glVertex3f(16.0, 20.0, -13.0);
        glVertex3f(16.0, 20.0, 13.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(16.0, 0.0, 13.0);
        glVertex3f(17.0, 0.0, 13.0);
        glVertex3f(17.0, 20.0, 13.0);
        glVertex3f(16.0, 20.0, 13.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(17.0, 0.0, 16.0);
        glVertex3f(17.0, 0.0, 13.0);
        glVertex3f(17.0, 20.0, 13.0);
        glVertex3f(17.0, 20.0, 16.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(17.0, 0.0, 16.0);
        glVertex3f(23.0, 0.0, 16.0);
        glVertex3f(23.0, 20.0, 16.0);
        glVertex3f(17.0, 20.0, 16.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(23.0, 0.0, 16.0);
        glVertex3f(23.0, 0.0, 10.0);
        glVertex3f(23.0, 20.0, 10.0);
        glVertex3f(23.0, 20.0, 16.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(22.0, 0.0, 10.0);
        glVertex3f(23.0, 0.0, 10.0);
        glVertex3f(23.0, 20.0, 10.0);
        glVertex3f(22.0, 20.0, 10.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(22.0, 0.0, 10.0);
        glVertex3f(22.0, 0.0, -10.0);
        glVertex3f(22.0, 20.0, -10.0);
        glVertex3f(22.0, 20.0, 10.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(22.0, 0.0, -10.0);
        glVertex3f(23.0, 0.0, -10.0);
        glVertex3f(23.0, 20.0, -10.0);
        glVertex3f(22.0, 20.0, -10.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(16.0, 0.0, -13.0);
        glVertex3f(17.0, 0.0, -13.0);
        glVertex3f(17.0, 20.0, -13.0);
        glVertex3f(16.0, 20.0, -13.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(17.0, 0.0, -16.0);
        glVertex3f(17.0, 0.0, -13.0);
        glVertex3f(17.0, 20.0, -13.0);
        glVertex3f(17.0, 20.0, -16.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(17.0, 0.0, -16.0);
        glVertex3f(23.0, 0.0, -16.0);
        glVertex3f(23.0, 20.0, -16.0);
        glVertex3f(17.0, 20.0, -16.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(23.0, 0.0, -16.0);
        glVertex3f(23.0, 0.0, -10.0);
        glVertex3f(23.0, 20.0, -10.0);
        glVertex3f(23.0, 20.0, -16.0);

    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-16.0, 0.0, 13.0);
        glVertex3f(-17.0, 0.0, 13.0);
        glVertex3f(-17.0, 20.0, 13.0);
        glVertex3f(-16.0, 20.0, 13.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-17.0, 0.0, 16.0);
        glVertex3f(-17.0, 0.0, 13.0);
        glVertex3f(-17.0, 20.0, 13.0);
        glVertex3f(-17.0, 20.0, 16.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-17.0, 0.0, 16.0);
        glVertex3f(-23.0, 0.0, 16.0);
        glVertex3f(-23.0, 20.0, 16.0);
        glVertex3f(-17.0, 20.0, 16.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-23.0, 0.0, 16.0);
        glVertex3f(-23.0, 0.0, 10.0);
        glVertex3f(-23.0, 20.0, 10.0);
        glVertex3f(-23.0, 20.0, 16.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-22.0, 0.0, 10.0);
        glVertex3f(-23.0, 0.0, 10.0);
        glVertex3f(-23.0, 20.0, 10.0);
        glVertex3f(-22.0, 20.0, 10.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-22.0, 0.0, 10.0);
        glVertex3f(-22.0, 0.0, -10.0);
        glVertex3f(-22.0, 20.0, -10.0);
        glVertex3f(-22.0, 20.0, 10.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-22.0, 0.0, -10.0);
        glVertex3f(-23.0, 0.0, -10.0);
        glVertex3f(-23.0, 20.0, -10.0);
        glVertex3f(-22.0, 20.0, -10.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-16.0, 0.0, -13.0);
        glVertex3f(-17.0, 0.0, -13.0);
        glVertex3f(-17.0, 20.0, -13.0);
        glVertex3f(-16.0, 20.0, -13.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-17.0, 0.0, -16.0);
        glVertex3f(-17.0, 0.0, -13.0);
        glVertex3f(-17.0, 20.0, -13.0);
        glVertex3f(-17.0, 20.0, -16.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-17.0, 0.0, -16.0);
        glVertex3f(-23.0, 0.0, -16.0);
        glVertex3f(-23.0, 20.0, -16.0);
        glVertex3f(-17.0, 20.0, -16.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-23.0, 0.0, -16.0);
        glVertex3f(-23.0, 0.0, -10.0);
        glVertex3f(-23.0, 20.0, -10.0);
        glVertex3f(-23.0, 20.0, -16.0);
    glEnd();
    ///////bagian ke 3
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-23.0, 0.0, -15.0);
        glVertex3f(-28.0, 0.0, -15.0);
        glVertex3f(-28.0, 12.0, -15.0);
        glVertex3f(-23.0, 12.0, -15.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-23.0, 0.0, -11.0);
        glVertex3f(-28.0, 0.0, -11.0);
        glVertex3f(-28.0, 12.0, -11.0);
        glVertex3f(-23.0, 12.0, -11.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-23.0, 0.0, 15.0);
        glVertex3f(-28.0, 0.0, 15.0);
        glVertex3f(-28.0, 12.0,15.0);
        glVertex3f(-23.0, 12.0, 15.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-23.0, 0.0, 11.0);
        glVertex3f(-28.0, 0.0, 11.0);
        glVertex3f(-28.0, 12.0, 11.0);
        glVertex3f(-23.0, 12.0, 11.0);
    glEnd();
     glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(23.0, 0.0, -15.0);
        glVertex3f(28.0, 0.0, -15.0);
        glVertex3f(28.0, 12.0, -15.0);
        glVertex3f(23.0, 12.0, -15.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(23.0, 0.0, -11.0);
        glVertex3f(28.0, 0.0, -11.0);
        glVertex3f(28.0, 12.0, -11.0);
        glVertex3f(23.0, 12.0, -11.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(23.0, 0.0, 15.0);
        glVertex3f(28.0, 0.0, 15.0);
        glVertex3f(28.0, 12.0,15.0);
        glVertex3f(23.0, 12.0, 15.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(23.0, 0.0, 11.0);
        glVertex3f(28.0, 0.0, 11.0);
        glVertex3f(28.0, 12.0, 11.0);
        glVertex3f(23.0, 12.0, 11.0);
    glEnd();
    //bagian ke 4
    //bagian 4.1
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(28.0, 0.0, 15.0);
        glVertex3f(28.0, 0.0, 23.0);
        glVertex3f(28.0, 12.0, 23.0);
        glVertex3f(28.0, 12.0, 15.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(48.0, 0.0, 23.0);
        glVertex3f(28.0, 0.0, 23.0);
        glVertex3f(28.0, 12.0, 23.0);
        glVertex3f(48.0, 12.0, 23.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(48.0, 0.0, 23.0);
        glVertex3f(48.0, 0.0, 24.0);
        glVertex3f(48.0, 12.0, 24.0);
        glVertex3f(48.0, 12.0, 23.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(48.0, 0.0, 24.0);
        glVertex3f(56.0, 0.0, 24.0);
        glVertex3f(56.0, 12.0, 24.0);
        glVertex3f(48.0, 12.0, 24.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(56.0, 0.0, 24.0);
        glVertex3f(56.0, 0.0, 16.0);
        glVertex3f(56.0, 12.0, 16.0);
        glVertex3f(56.0, 12.0, 24.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(48.0, 0.0, 16.0);
        glVertex3f(56.0, 0.0, 16.0);
        glVertex3f(56.0, 12.0, 16.0);
        glVertex3f(48.0, 12.0, 16.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(48.0, 0.0, 17.0);
        glVertex3f(48.0, 0.0, 16.0);
        glVertex3f(48.0, 12.0, 16.0);
        glVertex3f(48.0, 12.0, 17.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(48.0, 0.0, 17.0);
        glVertex3f(34.0, 0.0, 17.0);
        glVertex3f(34.0, 12.0, 17.0);
        glVertex3f(48.0, 12.0, 17.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(34.0, 0.0, 17.0);
        glVertex3f(34.0, 0.0, 9.0);
        glVertex3f(34.0, 12.0, 9.0);
        glVertex3f(34.0, 12.0, 17.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(28.0, 0.0, 9.0);
        glVertex3f(34.0, 0.0, 9.0);
        glVertex3f(34.0, 12.0, 9.0);
        glVertex3f(28.0, 12.0, 9.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(28.0, 0.0, 11.0);
        glVertex3f(28.0, 0.0, 9.0);
        glVertex3f(28.0, 12.0, 9.0);
        glVertex3f(28.0, 12.0, 11.0);
    glEnd();
    //bagian 4.2
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-28.0, 0.0, 15.0);
        glVertex3f(-28.0, 0.0, 23.0);
        glVertex3f(-28.0, 12.0, 23.0);
        glVertex3f(-28.0, 12.0, 15.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-48.0, 0.0, 23.0);
        glVertex3f(-28.0, 0.0, 23.0);
        glVertex3f(-28.0, 12.0, 23.0);
        glVertex3f(-48.0, 12.0, 23.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-48.0, 0.0, 23.0);
        glVertex3f(-48.0, 0.0, 24.0);
        glVertex3f(-48.0, 12.0, 24.0);
        glVertex3f(-48.0, 12.0, 23.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-48.0, 0.0, 24.0);
        glVertex3f(-56.0, 0.0, 24.0);
        glVertex3f(-56.0, 12.0, 24.0);
        glVertex3f(-48.0, 12.0, 24.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-56.0, 0.0, 24.0);
        glVertex3f(-56.0, 0.0, 16.0);
        glVertex3f(-56.0, 12.0, 16.0);
        glVertex3f(-56.0, 12.0, 24.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-48.0, 0.0, 16.0);
        glVertex3f(-56.0, 0.0, 16.0);
        glVertex3f(-56.0, 12.0, 16.0);
        glVertex3f(-48.0, 12.0, 16.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-48.0, 0.0, 17.0);
        glVertex3f(-48.0, 0.0, 16.0);
        glVertex3f(-48.0, 12.0, 16.0);
        glVertex3f(-48.0, 12.0, 17.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-48.0, 0.0, 17.0);
        glVertex3f(-34.0, 0.0, 17.0);
        glVertex3f(-34.0, 12.0, 17.0);
        glVertex3f(-48.0, 12.0, 17.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-34.0, 0.0, 17.0);
        glVertex3f(-34.0, 0.0, 9.0);
        glVertex3f(-34.0, 12.0, 9.0);
        glVertex3f(-34.0, 12.0, 17.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-28.0, 0.0, 9.0);
        glVertex3f(-34.0, 0.0, 9.0);
        glVertex3f(-34.0, 12.0, 9.0);
        glVertex3f(-28.0, 12.0, 9.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-28.0, 0.0, 11.0);
        glVertex3f(-28.0, 0.0, 9.0);
        glVertex3f(-28.0, 12.0, 9.0);
        glVertex3f(-28.0, 12.0, 11.0);
    glEnd();
    // bagian 4.3
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(28.0, 0.0, -15.0);
        glVertex3f(28.0, 0.0, -23.0);
        glVertex3f(28.0, 12.0, -23.0);
        glVertex3f(28.0, 12.0, -15.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(48.0, 0.0, -23.0);
        glVertex3f(28.0, 0.0, -23.0);
        glVertex3f(28.0, 12.0, -23.0);
        glVertex3f(48.0, 12.0, -23.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(48.0, 0.0, -23.0);
        glVertex3f(48.0, 0.0, -24.0);
        glVertex3f(48.0, 12.0, -24.0);
        glVertex3f(48.0, 12.0, -23.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(48.0, 0.0, -24.0);
        glVertex3f(56.0, 0.0, -24.0);
        glVertex3f(56.0, 12.0, -24.0);
        glVertex3f(48.0, 12.0, -24.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(56.0, 0.0, -24.0);
        glVertex3f(56.0, 0.0, -16.0);
        glVertex3f(56.0, 12.0, -16.0);
        glVertex3f(56.0, 12.0, -24.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(48.0, 0.0, -16.0);
        glVertex3f(56.0, 0.0, -16.0);
        glVertex3f(56.0, 12.0, -16.0);
        glVertex3f(48.0, 12.0, -16.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(48.0, 0.0, -17.0);
        glVertex3f(48.0, 0.0, -16.0);
        glVertex3f(48.0, 12.0, -16.0);
        glVertex3f(48.0, 12.0, -17.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(48.0, 0.0, -17.0);
        glVertex3f(34.0, 0.0, -17.0);
        glVertex3f(34.0, 12.0, -17.0);
        glVertex3f(48.0, 12.0, -17.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(34.0, 0.0, -17.0);
        glVertex3f(34.0, 0.0, -9.0);
        glVertex3f(34.0, 12.0, -9.0);
        glVertex3f(34.0, 12.0, -17.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(28.0, 0.0, -9.0);
        glVertex3f(34.0, 0.0, -9.0);
        glVertex3f(34.0, 12.0, -9.0);
        glVertex3f(28.0, 12.0, -9.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(28.0, 0.0, -11.0);
        glVertex3f(28.0, 0.0, -9.0);
        glVertex3f(28.0, 12.0, -9.0);
        glVertex3f(28.0, 12.0, -11.0);
    glEnd();
    //bagian 4.4
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-28.0, 0.0, -15.0);
        glVertex3f(-28.0, 0.0, -23.0);
        glVertex3f(-28.0, 12.0, -23.0);
        glVertex3f(-28.0, 12.0, -15.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-48.0, 0.0, -23.0);
        glVertex3f(-28.0, 0.0, -23.0);
        glVertex3f(-28.0, 12.0, -23.0);
        glVertex3f(-48.0, 12.0, -23.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-48.0, 0.0, -23.0);
        glVertex3f(-48.0, 0.0, -24.0);
        glVertex3f(-48.0, 12.0, -24.0);
        glVertex3f(-48.0, 12.0, -23.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-48.0, 0.0, -24.0);
        glVertex3f(-56.0, 0.0, -24.0);
        glVertex3f(-56.0, 12.0, -24.0);
        glVertex3f(-48.0, 12.0, -24.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-56.0, 0.0, -24.0);
        glVertex3f(-56.0, 0.0, -16.0);
        glVertex3f(-56.0, 12.0, -16.0);
        glVertex3f(-56.0, 12.0, -24.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-48.0, 0.0, -16.0);
        glVertex3f(-56.0, 0.0, -16.0);
        glVertex3f(-56.0, 12.0, -16.0);
        glVertex3f(-48.0, 12.0, -16.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-48.0, 0.0, -17.0);
        glVertex3f(-48.0, 0.0, -16.0);
        glVertex3f(-48.0, 12.0, -16.0);
        glVertex3f(-48.0, 12.0, -17.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-48.0, 0.0, -17.0);
        glVertex3f(-34.0, 0.0, -17.0);
        glVertex3f(-34.0, 12.0, -17.0);
        glVertex3f(-48.0, 12.0, -17.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-34.0, 0.0, -17.0);
        glVertex3f(-34.0, 0.0, -9.0);
        glVertex3f(-34.0, 12.0, -9.0);
        glVertex3f(-34.0, 12.0, -17.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-28.0, 0.0, -9.0);
        glVertex3f(-34.0, 0.0, -9.0);
        glVertex3f(-34.0, 12.0, -9.0);
        glVertex3f(-28.0, 12.0, -9.0);
    glEnd();
    glBegin(GL_QUADS);//Bangunan Universitas
        glColor3f(255.0f, 255.0f, 255.0f);
        glVertex3f(-28.0, 0.0, -11.0);
        glVertex3f(-28.0, 0.0, -9.0);
        glVertex3f(-28.0, 12.0, -9.0);
        glVertex3f(-28.0, 12.0, -11.0);
    glEnd();

    glBegin(GL_POLYGON);//Bangunan Universitas
        glColor3f(0.8f,0.8f,0.8f);
        glVertex3f(-3.5, 0.0, 4.0);
        glVertex3f(-3.0, 0.0, 4.0);
        glVertex3f(3.0, 0.0, 4.0);
        glVertex3f(3.5, 0.0, 4.0);
        glVertex3f(3.5, 0.0, 16.0);
        glVertex3f(-3.5, 0.0, 16.0);
    glEnd();

    glBegin(GL_POLYGON);//Bangunan Universitas
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(3.0,6.0,4.0);
    glVertex3f(-3.0,6.0,4.0);
    glVertex3f(-3.0,6.0,16.0);
    glVertex3f(3.0,6.0,16.0);
    glEnd();

    glBegin(GL_POLYGON);//Bangunan Universitas
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(3.0,0.0,4.0);
    glVertex3f(3.0,0.0,16.0);
    glVertex3f(3.0,6.0,16.0);
    glVertex3f(3.0,6.0,4.0);
    glEnd();

    glBegin(GL_POLYGON);//Bangunan Universitas
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-3.0,0.0,4.0);
    glVertex3f(-3.0,0.0,16.0);
    glVertex3f(-3.0,6.0,16.0);
    glVertex3f(-3.0,6.0,4.0);
    glEnd();

    glBegin(GL_POLYGON);//Bangunan Universitas
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-3.0,0.0,16.0);
    glVertex3f(3.0,0.0,16.0);
    glVertex3f(3.0,6.0,16.0);
    glVertex3f(-3.0,6.0,16.0);
    glEnd();

    glBegin(GL_POLYGON);//Bangunan Universitas
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(1.0,4.0,4.5);
    glVertex3f(-1.0,4.0,4.5);
    glVertex3f(-1.0,1.0,4.5);
    glVertex3f(1.0,1.0,4.5);
    glEnd();

    glBegin(GL_POLYGON);//Bangunan Universitas
    glColor3f(0.0f,0.0f,0.0f);
    glVertex3f(1.0,4.0,16.0);
    glVertex3f(-1.0,4.0,16.0);
    glVertex3f(-1.0,1.0,16.0);
    glVertex3f(1.0,1.0,16.0);
    glEnd();

//lantai universitas
    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(23.0,0.0,15.0);
    glVertex3f(28.0,0.0,15.0);
    glVertex3f(28.0,0.0,11.0);
    glVertex3f(23.0,0.0,11.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(28.0,0.0,23.0);
    glVertex3f(28.0,0.0,9.0);
    glVertex3f(34.0,0.0,9.0);
    glVertex3f(34.0,0.0,23.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(34.0,0.0,23.0);
    glVertex3f(48.0,0.0,23.0);
    glVertex3f(48.0,0.0,17.0);
    glVertex3f(34.0,0.0,17.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(48.0,0.0,24.0);
    glVertex3f(56.0,0.0,24.0);
    glVertex3f(56.0,0.0,16.0);
    glVertex3f(48.0,0.0,16.0);
    glEnd();

//lantai universitas 2

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(23.0,0.0,-15.0);
    glVertex3f(28.0,0.0,-15.0);
    glVertex3f(28.0,0.0,-11.0);
    glVertex3f(23.0,0.0,-11.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(28.0,0.0,-23.0);
    glVertex3f(28.0,0.0,-9.0);
    glVertex3f(34.0,0.0,-9.0);
    glVertex3f(34.0,0.0,-23.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(34.0,0.0,-23.0);
    glVertex3f(48.0,0.0,-23.0);
    glVertex3f(48.0,0.0,-17.0);
    glVertex3f(34.0,0.0,-17.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(48.0,0.0,-24.0);
    glVertex3f(56.0,0.0,-24.0);
    glVertex3f(56.0,0.0,-16.0);
    glVertex3f(48.0,0.0,-16.0);
    glEnd();

//lantai universitas 3
    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-23.0,0.0,15.0);
    glVertex3f(-28.0,0.0,15.0);
    glVertex3f(-28.0,0.0,11.0);
    glVertex3f(-23.0,0.0,11.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-28.0,0.0,23.0);
    glVertex3f(-28.0,0.0,9.0);
    glVertex3f(-34.0,0.0,9.0);
    glVertex3f(-34.0,0.0,23.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-34.0,0.0,23.0);
    glVertex3f(-48.0,0.0,23.0);
    glVertex3f(-48.0,0.0,17.0);
    glVertex3f(-34.0,0.0,17.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-48.0,0.0,24.0);
    glVertex3f(-56.0,0.0,24.0);
    glVertex3f(-56.0,0.0,16.0);
    glVertex3f(-48.0,0.0,16.0);
    glEnd();

//lantai universitas 4

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-23.0,0.0,-15.0);
    glVertex3f(-28.0,0.0,-15.0);
    glVertex3f(-28.0,0.0,-11.0);
    glVertex3f(-23.0,0.0,-11.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-28.0,0.0,-23.0);
    glVertex3f(-28.0,0.0,-9.0);
    glVertex3f(-34.0,0.0,-9.0);
    glVertex3f(-34.0,0.0,-23.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-34.0,0.0,-23.0);
    glVertex3f(-48.0,0.0,-23.0);
    glVertex3f(-48.0,0.0,-17.0);
    glVertex3f(-34.0,0.0,-17.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-48.0,0.0,-24.0);
    glVertex3f(-56.0,0.0,-24.0);
    glVertex3f(-56.0,0.0,-16.0);
    glVertex3f(-48.0,0.0,-16.0);
    glEnd();

// kanan tengah

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(17.0,0.0,13.0);
    glVertex3f(23.0,0.0,13.0);
    glVertex3f(23.0,0.0,16.0);
    glVertex3f(17.0,0.0,16.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(23.0,0.0,13.0);
    glVertex3f(23.0,0.0,10.0);
    glVertex3f(22.0,0.0,10.0);
    glVertex3f(22.0,0.0,13.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(17.0,0.0,-13.0);
    glVertex3f(23.0,0.0,-13.0);
    glVertex3f(23.0,0.0,-16.0);
    glVertex3f(17.0,0.0,-16.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(23.0,0.0,-13.0);
    glVertex3f(23.0,0.0,-10.0);
    glVertex3f(22.0,0.0,-10.0);
    glVertex3f(22.0,0.0,-13.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(16.0,0.0,13.0);
    glVertex3f(22.0,0.0,13.0);
    glVertex3f(22.0,0.0,-13.0);
    glVertex3f(16.0,0.0,-13.0);
    glEnd();

// kiri tengah

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-17.0,0.0,13.0);
    glVertex3f(-23.0,0.0,13.0);
    glVertex3f(-23.0,0.0,16.0);
    glVertex3f(-17.0,0.0,16.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-23.0,0.0,13.0);
    glVertex3f(-23.0,0.0,10.0);
    glVertex3f(-22.0,0.0,10.0);
    glVertex3f(-22.0,0.0,13.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-17.0,0.0,-13.0);
    glVertex3f(-23.0,0.0,-13.0);
    glVertex3f(-23.0,0.0,-16.0);
    glVertex3f(-17.0,0.0,-16.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-23.0,0.0,-13.0);
    glVertex3f(-23.0,0.0,-10.0);
    glVertex3f(-22.0,0.0,-10.0);
    glVertex3f(-22.0,0.0,-13.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-16.0,0.0,13.0);
    glVertex3f(-22.0,0.0,13.0);
    glVertex3f(-22.0,0.0,-13.0);
    glVertex3f(-16.0,0.0,-13.0);
    glEnd();

    //kanan hampir tengah
    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(16.0,0.0,3.0);
    glVertex3f(16.0,0.0,-3.0);
    glVertex3f(6.0,0.0,-3.0);
    glVertex3f(6.0,0.0,3.0);
    glEnd();

     //kiri hampir tengah
    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-16.0,0.0,3.0);
    glVertex3f(-16.0,0.0,-3.0);
    glVertex3f(-6.0,0.0,-3.0);
    glVertex3f(-6.0,0.0,3.0);
    glEnd();


    //tengah
    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(6.0,0.0,3.0);
    glVertex3f(6.0,0.0,-3.0);
    glVertex3f(-6.0,0.0,-3.0);
    glVertex3f(-6.0,0.0,3.0);
    glEnd();


     glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(5.0,0.0,-3.0);
    glVertex3f(5.0,0.0,-4.0);
    glVertex3f(4.5,0.0,-5.0);
    glVertex3f(-4.5,0.0,-5.0);
    glVertex3f(-5.0,0.0,-5.0);
    glVertex3f(-5.0,0.0,-3.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(5.0,0.0,3.0);
    glVertex3f(5.0,0.0,4.0);
    glVertex3f(4.5,0.0,5.0);
    glVertex3f(3.5,0.0,5.0);
    glVertex3f(3.0,0.0,4.0);
    glVertex3f(-3.0,0.0,4.0);
    glVertex3f(-3.5,0.0,5.0);
    glVertex3f(-4.5,0.0,5.0);
    glVertex3f(-5.0,0.0,4.0);
    glVertex3f(-5.0,0.0,3.0);

    glEnd();

    //lantai 2 universitas
    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(23.0,5.0,15.0);
    glVertex3f(28.0,5.0,15.0);
    glVertex3f(28.0,5.0,11.0);
    glVertex3f(23.0,5.0,11.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(28.0,5.0,23.0);
    glVertex3f(28.0,5.0,9.0);
    glVertex3f(34.0,5.0,9.0);
    glVertex3f(34.0,5.0,23.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(34.0,5.0,23.0);
    glVertex3f(48.0,5.0,23.0);
    glVertex3f(48.0,5.0,17.0);
    glVertex3f(34.0,5.0,17.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(48.0,5.0,24.0);
    glVertex3f(56.0,5.0,24.0);
    glVertex3f(56.0,5.0,16.0);
    glVertex3f(48.0,5.0,16.0);
    glEnd();

//lantai 2 universitas 2

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(23.0,5.0,-15.0);
    glVertex3f(28.0,5.0,-15.0);
    glVertex3f(28.0,5.0,-11.0);
    glVertex3f(23.0,5.0,-11.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(28.0,5.0,-23.0);
    glVertex3f(28.0,5.0,-9.0);
    glVertex3f(34.0,5.0,-9.0);
    glVertex3f(34.0,5.0,-23.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(34.0,5.0,-23.0);
    glVertex3f(48.0,5.0,-23.0);
    glVertex3f(48.0,5.0,-17.0);
    glVertex3f(34.0,5.0,-17.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(48.0,5.0,-24.0);
    glVertex3f(56.0,5.0,-24.0);
    glVertex3f(56.0,5.0,-16.0);
    glVertex3f(48.0,5.0,-16.0);
    glEnd();

//lantai 2 universitas 3
    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-23.0,5.0,15.0);
    glVertex3f(-28.0,5.0,15.0);
    glVertex3f(-28.0,5.0,11.0);
    glVertex3f(-23.0,5.0,11.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-28.0,5.0,23.0);
    glVertex3f(-28.0,5.0,9.0);
    glVertex3f(-34.0,5.0,9.0);
    glVertex3f(-34.0,5.0,23.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-34.0,5.0,23.0);
    glVertex3f(-48.0,5.0,23.0);
    glVertex3f(-48.0,5.0,17.0);
    glVertex3f(-34.0,5.0,17.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-48.0,5.0,24.0);
    glVertex3f(-56.0,5.0,24.0);
    glVertex3f(-56.0,5.0,16.0);
    glVertex3f(-48.0,5.0,16.0);
    glEnd();

//lantai 2 universitas 4

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-23.0,5.0,-15.0);
    glVertex3f(-28.0,5.0,-15.0);
    glVertex3f(-28.0,5.0,-11.0);
    glVertex3f(-23.0,5.0,-11.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-28.0,5.0,-23.0);
    glVertex3f(-28.0,5.0,-9.0);
    glVertex3f(-34.0,5.0,-9.0);
    glVertex3f(-34.0,5.0,-23.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-34.0,5.0,-23.0);
    glVertex3f(-48.0,5.0,-23.0);
    glVertex3f(-48.0,5.0,-17.0);
    glVertex3f(-34.0,5.0,-17.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-48.0,5.0,-24.0);
    glVertex3f(-56.0,5.0,-24.0);
    glVertex3f(-56.0,5.0,-16.0);
    glVertex3f(-48.0,5.0,-16.0);
    glEnd();

    //lantai 3 universitas
    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(23.0,12.0,15.0);
    glVertex3f(28.0,12.0,15.0);
    glVertex3f(28.0,12.0,11.0);
    glVertex3f(23.0,12.0,11.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(28.0,12.0,23.0);
    glVertex3f(28.0,12.0,9.0);
    glVertex3f(34.0,12.0,9.0);
    glVertex3f(34.0,12.0,23.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(34.0,12.0,23.0);
    glVertex3f(48.0,12.0,23.0);
    glVertex3f(48.0,12.0,17.0);
    glVertex3f(34.0,12.0,17.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(48.0,12.0,24.0);
    glVertex3f(56.0,12.0,24.0);
    glVertex3f(56.0,12.0,16.0);
    glVertex3f(48.0,12.0,16.0);
    glEnd();

//lantai 3 universitas 2

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(23.0,12.0,-15.0);
    glVertex3f(28.0,12.0,-15.0);
    glVertex3f(28.0,12.0,-11.0);
    glVertex3f(23.0,12.0,-11.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(28.0,12.0,-23.0);
    glVertex3f(28.0,12.0,-9.0);
    glVertex3f(34.0,12.0,-9.0);
    glVertex3f(34.0,12.0,-23.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(34.0,12.0,-23.0);
    glVertex3f(48.0,12.0,-23.0);
    glVertex3f(48.0,12.0,-17.0);
    glVertex3f(34.0,12.0,-17.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(48.0,12.0,-24.0);
    glVertex3f(56.0,12.0,-24.0);
    glVertex3f(56.0,12.0,-16.0);
    glVertex3f(48.0,12.0,-16.0);
    glEnd();

//lantai 3 universitas 3
    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-23.0,12.0,15.0);
    glVertex3f(-28.0,12.0,15.0);
    glVertex3f(-28.0,12.0,11.0);
    glVertex3f(-23.0,12.0,11.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-28.0,12.0,23.0);
    glVertex3f(-28.0,12.0,9.0);
    glVertex3f(-34.0,12.0,9.0);
    glVertex3f(-34.0,12.0,23.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-34.0,12.0,23.0);
    glVertex3f(-48.0,12.0,23.0);
    glVertex3f(-48.0,12.0,17.0);
    glVertex3f(-34.0,12.0,17.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-48.0,12.0,24.0);
    glVertex3f(-56.0,12.0,24.0);
    glVertex3f(-56.0,12.0,16.0);
    glVertex3f(-48.0,12.0,16.0);
    glEnd();

//lantai 3 universitas 4

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-23.0,12.0,-15.0);
    glVertex3f(-28.0,12.0,-15.0);
    glVertex3f(-28.0,12.0,-11.0);
    glVertex3f(-23.0,12.0,-11.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-28.0,12.0,-23.0);
    glVertex3f(-28.0,12.0,-9.0);
    glVertex3f(-34.0,12.0,-9.0);
    glVertex3f(-34.0,12.0,-23.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-34.0,12.0,-23.0);
    glVertex3f(-48.0,12.0,-23.0);
    glVertex3f(-48.0,12.0,-17.0);
    glVertex3f(-34.0,12.0,-17.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-48.0,12.0,-24.0);
    glVertex3f(-56.0,12.0,-24.0);
    glVertex3f(-56.0,12.0,-16.0);
    glVertex3f(-48.0,12.0,-16.0);
    glEnd();

// kanan tengah lantai 2

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(17.0,10.0,13.0);
    glVertex3f(23.0,10.0,13.0);
    glVertex3f(23.0,10.0,16.0);
    glVertex3f(17.0,10.0,16.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(23.0,10.0,13.0);
    glVertex3f(23.0,10.0,10.0);
    glVertex3f(22.0,10.0,10.0);
    glVertex3f(22.0,10.0,13.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(17.0,10.0,-13.0);
    glVertex3f(23.0,10.0,-13.0);
    glVertex3f(23.0,10.0,-16.0);
    glVertex3f(17.0,10.0,-16.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(23.0,10.0,-13.0);
    glVertex3f(23.0,10.0,-10.0);
    glVertex3f(22.0,10.0,-10.0);
    glVertex3f(22.0,10.0,-13.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(16.0,10.0,13.0);
    glVertex3f(22.0,10.0,13.0);
    glVertex3f(22.0,10.0,-13.0);
    glVertex3f(16.0,10.0,-13.0);
    glEnd();

// kiri tengah lantai 2*

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-17.0,10.0,13.0);
    glVertex3f(-23.0,10.0,13.0);
    glVertex3f(-23.0,10.0,16.0);
    glVertex3f(-17.0,10.0,16.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-23.0,10.0,13.0);
    glVertex3f(-23.0,10.0,10.0);
    glVertex3f(-22.0,10.0,10.0);
    glVertex3f(-22.0,10.0,13.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-17.0,10.0,-13.0);
    glVertex3f(-23.0,10.0,-13.0);
    glVertex3f(-23.0,10.0,-16.0);
    glVertex3f(-17.0,10.0,-16.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-23.0,10.0,-13.0);
    glVertex3f(-23.0,10.0,-10.0);
    glVertex3f(-22.0,10.0,-10.0);
    glVertex3f(-22.0,10.0,-13.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-16.0,10.0,13.0);
    glVertex3f(-22.0,10.0,13.0);
    glVertex3f(-22.0,10.0,-13.0);
    glVertex3f(-16.0,10.0,-13.0);
    glEnd();

    // kanan tengah lantai 3

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(17.0,20.0,13.0);
    glVertex3f(23.0,20.0,13.0);
    glVertex3f(23.0,20.0,16.0);
    glVertex3f(17.0,20.0,16.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(23.0,20.0,13.0);
    glVertex3f(23.0,20.0,10.0);
    glVertex3f(22.0,20.0,10.0);
    glVertex3f(22.0,20.0,13.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(17.0,20.0,-13.0);
    glVertex3f(23.0,20.0,-13.0);
    glVertex3f(23.0,20.0,-16.0);
    glVertex3f(17.0,20.0,-16.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(23.0,20.0,-13.0);
    glVertex3f(23.0,20.0,-10.0);
    glVertex3f(22.0,20.0,-10.0);
    glVertex3f(22.0,20.0,-13.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(16.0,20.0,13.0);
    glVertex3f(22.0,20.0,13.0);
    glVertex3f(22.0,20.0,-13.0);
    glVertex3f(16.0,20.0,-13.0);
    glEnd();

// kiri tengah lantai 3*

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-17.0,20.0,13.0);
    glVertex3f(-23.0,20.0,13.0);
    glVertex3f(-23.0,20.0,16.0);
    glVertex3f(-17.0,20.0,16.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-23.0,20.0,13.0);
    glVertex3f(-23.0,20.0,10.0);
    glVertex3f(-22.0,20.0,10.0);
    glVertex3f(-22.0,20.0,13.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-17.0,20.0,-13.0);
    glVertex3f(-23.0,20.0,-13.0);
    glVertex3f(-23.0,20.0,-16.0);
    glVertex3f(-17.0,20.0,-16.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-23.0,20.0,-13.0);
    glVertex3f(-23.0,20.0,-10.0);
    glVertex3f(-22.0,20.0,-10.0);
    glVertex3f(-22.0,20.0,-13.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-16.0,20.0,13.0);
    glVertex3f(-22.0,20.0,13.0);
    glVertex3f(-22.0,20.0,-13.0);
    glVertex3f(-16.0,20.0,-13.0);
    glEnd();

    //kanan hampir tengah lantai 2
    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(16.0,10.0,3.0);
    glVertex3f(16.0,10.0,-3.0);
    glVertex3f(6.0,10.0,-3.0);
    glVertex3f(6.0,10.0,3.0);
    glEnd();

     //kiri hampir tengah lantai 2
    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-16.0,10.0,3.0);
    glVertex3f(-16.0,10.0,-3.0);
    glVertex3f(-6.0,10.0,-3.0);
    glVertex3f(-6.0,10.0,3.0);
    glEnd();

    //kanan hampir tengah lantai 3
    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(16.0,20.0,3.0);
    glVertex3f(16.0,20.0,-3.0);
    glVertex3f(6.0,20.0,-3.0);
    glVertex3f(6.0,20.0,3.0);
    glEnd();

     //kiri hampir tengah lantai 3
    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(-16.0,20.0,3.0);
    glVertex3f(-16.0,20.0,-3.0);
    glVertex3f(-6.0,20.0,-3.0);
    glVertex3f(-6.0,20.0,3.0);
    glEnd();

    //tengah lantai 2
    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(6.0,13.0,3.0);
    glVertex3f(6.0,13.0,-3.0);
    glVertex3f(-6.0,13.0,-3.0);
    glVertex3f(-6.0,13.0,3.0);
    glEnd();


     glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(5.0,13.0,-3.0);
    glVertex3f(5.0,13.0,-4.0);
    glVertex3f(4.5,13.0,-5.0);
    glVertex3f(-4.5,13.0,-5.0);
    glVertex3f(-5.0,13.0,-5.0);
    glVertex3f(-5.0,13.0,-3.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(5.0,13.0,3.0);
    glVertex3f(5.0,13.0,4.0);
    glVertex3f(4.5,13.0,5.0);
    glVertex3f(3.5,13.0,5.0);
    glVertex3f(3.0,13.0,4.0);
    glVertex3f(-3.0,13.0,4.0);
    glVertex3f(-3.5,13.0,5.0);
    glVertex3f(-4.5,13.0,5.0);
    glVertex3f(-5.0,13.0,4.0);
    glVertex3f(-5.0,13.0,3.0);

    glEnd();

    //tengah lantai 3
    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(6.0,26.0,3.0);
    glVertex3f(6.0,26.0,-3.0);
    glVertex3f(-6.0,26.0,-3.0);
    glVertex3f(-6.0,26.0,3.0);
    glEnd();


     glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(5.0,26.0,-3.0);
    glVertex3f(5.0,26.0,-4.0);
    glVertex3f(4.5,26.0,-5.0);
    glVertex3f(-4.5,26.0,-5.0);
    glVertex3f(-5.0,26.0,-5.0);
    glVertex3f(-5.0,26.0,-3.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(5.0,26.0,3.0);
    glVertex3f(5.0,26.0,4.0);
    glVertex3f(4.5,26.0,5.0);
    glVertex3f(3.5,26.0,5.0);
    glVertex3f(3.0,26.0,4.0);
    glVertex3f(-3.0,26.0,4.0);
    glVertex3f(-3.5,26.0,5.0);
    glVertex3f(-4.5,26.0,5.0);
    glVertex3f(-5.0,26.0,4.0);
    glVertex3f(-5.0,26.0,3.0);

    glEnd();

    //tengah lantai 4
    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(6.0,38.0,3.0);
    glVertex3f(6.0,38.0,-3.0);
    glVertex3f(-6.0,38.0,-3.0);
    glVertex3f(-6.0,38.0,3.0);
    glEnd();


     glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(5.0,38.0,-3.0);
    glVertex3f(5.0,38.0,-4.0);
    glVertex3f(4.5,38.0,-5.0);
    glVertex3f(-4.5,38.0,-5.0);
    glVertex3f(-5.0,38.0,-5.0);
    glVertex3f(-5.0,38.0,-3.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.8f,0.8f,0.8f);
    glVertex3f(5.0,38.0,3.0);
    glVertex3f(5.0,38.0,4.0);
    glVertex3f(4.5,38.0,5.0);
    glVertex3f(3.5,38.0,5.0);
    glVertex3f(3.0,38.0,4.0);
    glVertex3f(-3.0,38.0,4.0);
    glVertex3f(-3.5,38.0,5.0);
    glVertex3f(-4.5,38.0,5.0);
    glVertex3f(-5.0,38.0,4.0);
    glVertex3f(-5.0,38.0,3.0);
    glEnd();
	
    //puncak tengah
    glBegin(GL_QUADS);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(2.5,38.0,3.0);
    glVertex3f(-2.5,38.0,3.0);
    glVertex3f(-2.5,43.0,3.0);
    glVertex3f(2.5,43.0,3.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(2.5,38.0,-3.0);
    glVertex3f(-2.5,38.0,-3.0);
    glVertex3f(-2.5,43.0,-3.0);
    glVertex3f(2.5,43.0,-3.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(-2.5,38.0,-3.0);
    glVertex3f(-2.5,43.0,-3.0);
    glVertex3f(-2.5,43.0,3.0);
    glVertex3f(-2.5,38.0,3.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(2.5,38.0,-3.0);
    glVertex3f(2.5,43.0,-3.0);
    glVertex3f(2.5,43.0,3.0);
    glVertex3f(2.5,38.0,3.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(2.5,43.0,3.0);
    glVertex3f(2.5,43.0,-3.0);
    glVertex3f(-2.5,43.0,-3.0);
    glVertex3f(-2.5,43.0,3.0);
    glEnd();

   //puncak universitas 1
    glBegin(GL_POLYGON);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(15.0,20.0,8.0);
    glVertex3f(15.0,20.0,18.0);
    glVertex3f(20.0,25.0,13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(15.0,20.0,18.0);
    glVertex3f(25.0,20.0,18.0);
    glVertex3f(20.0,25.0,13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(25.0,20.0,18.0);
    glVertex3f(25.0,20.0,8.0);
    glVertex3f(20.0,25.0,13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(25.0,20.0,8.0);
    glVertex3f(15.0,20.0,8.0);
    glVertex3f(20.0,25.0,13);
    glEnd();

    //puncak universitas 2
    glBegin(GL_POLYGON);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(15.0,20.0,-8.0);
    glVertex3f(15.0,20.0,-18.0);
    glVertex3f(20.0,25.0,-13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(15.0,20.0,-18.0);
    glVertex3f(25.0,20.0,-18.0);
    glVertex3f(20.0,25.0,-13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(25.0,20.0,-18.0);
    glVertex3f(25.0,20.0,-8.0);
    glVertex3f(20.0,25.0,-13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(25.0,20.0,-8.0);
    glVertex3f(15.0,20.0,-8.0);
    glVertex3f(20.0,25.0,-13);
    glEnd();

    //puncak universitas 3
    glBegin(GL_POLYGON);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(-15.0,20.0,8.0);
    glVertex3f(-15.0,20.0,18.0);
    glVertex3f(-20.0,25.0,13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(-15.0,20.0,18.0);
    glVertex3f(-25.0,20.0,18.0);
    glVertex3f(-20.0,25.0,13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(-25.0,20.0,18.0);
    glVertex3f(-25.0,20.0,8.0);
    glVertex3f(-20.0,25.0,13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(-25.0,20.0,8.0);
    glVertex3f(-15.0,20.0,8.0);
    glVertex3f(-20.0,25.0,13);
    glEnd();

    //puncak universitas 4
glBegin(GL_POLYGON);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(-15.0,20.0,-8.0);
    glVertex3f(-15.0,20.0,-18.0);
    glVertex3f(-20.0,25.0,-13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(-15.0,20.0,-18.0);
    glVertex3f(-25.0,20.0,-18.0);
    glVertex3f(-20.0,25.0,-13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(-25.0,20.0,-18.0);
    glVertex3f(-25.0,20.0,-8.0);
    glVertex3f(-20.0,25.0,-13);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(255.0f, 255.0f, 255.0f);
    glVertex3f(-25.0,20.0,-8.0);
    glVertex3f(-15.0,20.0,-8.0);
    glVertex3f(-20.0,25.0,-13);
    glEnd();

    glPopMatrix();
    glutSwapBuffers();
}

/*
tombol pada keyboard:
"a": ke kiri
"d": ke kanan
"w": ke depan
"s": ke belakang
"z" : ke atas
"x" : ke bawah
"i" : rotasi ke bawah terhadap sumbu X
"k" : rotasi ke atas terhadap sumbu X
"j" : rotasi ke kiri terhadap sumbu Y
"l" : rotasi ke kanan terhadap sumbu Y
"m" : rotasi ke kiri terhadap sumbu Z
"n" : rotasi ke kanan terhadap sumbu Z
"Q" : Melihat interior
*/
void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'a':
    case 'A':
        glTranslatef(5.0, 0.0, 0.0);
        break;
    case 'd':
    case 'D':
        glTranslatef(-5.0, 0.0, 0.0);
        break;
    case 'z' :
    case 'Z' :
        glTranslatef(0.0,5.0,0.0);
        break;
    case 'x' :
    case 'X' :
        glTranslatef(0.0,-5.0, 0.0);
        break;
    case 'w':
    case 'W':
        glTranslatef(0.0, 0.0, 5.0);
        break;
    case 's':
    case 'S':
        glTranslatef(0.0, 0.0, -5.0);
        break;
    case 'i':
    case 'I':
        glRotatef(3.0,1.0,0.0,0.0);
        break;
    case 'k':
    case 'K':
        glRotatef(-3.0,1.0,0.0,0.0);
        break;
    case 'j':
    case 'J':
        glRotatef(3.0,0.0,1.0,0.0);
        break;
    case 'l':
    case 'L':
        glRotatef(-3.0,0.0,1.0,0.0);
        break;
    case 'm':
    case 'M':
        glRotatef(3.0,0.0,0.0,1.0);
        break;
    case 'n':
    case 'N':
        glRotatef(-3.0,0.0,0.0,1.0);
        break;
    case 'q':
    case 'Q':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    display();
}
void resize(int width, int height)
{
    if (height == 0) height = 1;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, width / height, 1.0, 400.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(900, 900);
    glutInitWindowPosition(40, 40);
    glutCreateWindow("Lomonosov Moscow State University Rusia");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouseButton);
    glutMotionFunc(mouseMove);
    glutReshapeFunc(resize);
    glutMainLoop();
    return 0;
}
