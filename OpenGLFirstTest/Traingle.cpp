
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <fstream>
#include <vector>

void display(){
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); //Red
    glVertex2f(-0.5,-0.5);
    glColor3f(0.0f,1.0f,0.0f);//Green 
    glVertex2f(0.5f,-0.5);
    glColor3f(0.0f, 0.0f, 1.0f); //Blue
    glVertex2f(0.0f,0.5f);
    glEnd();
    glFlush();

}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutCreateWindow("Traingle");
    glutInitWindowSize(500,500);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
