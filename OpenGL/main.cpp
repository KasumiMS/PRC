#include <GL/glut.h>

void Display_cb()
{
	glutSwapBuffers();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
	glutInitWindowSize(480, 360);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("PRUEBA TETRIS");
	glutDisplayFunc(Display_cb);
	glutMainLoop();
	return 0;
}