#include <GL/glut.h>

void display()
{
  glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
  glClear(GL_COLOR_BUFFER_BIT);

  glFlush();
  glutSwapBuffers();
}

void reshape(GLsizei w, GLsizei h)
{

}

int main(int argc, char** argv)
{
  glutInit(&argc, argv);

  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
  glutInitWindowSize(800, 600);
  glutInitWindowPosition(100, 100);

  glutCreateWindow("OpenGL - Landscape");

  glutDisplayFunc(display);
  glutReshapeFunc(reshape);
  glutMainLoop();
  return 0;
}
