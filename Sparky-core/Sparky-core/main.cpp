#include "src\graphics\window.h"
#include "src\maths\maths.h"

int main(){
	using namespace sparky;
	using namespace graphics;
	using namespace maths;

	Window window("Sparky!", 960, 540);
	glClearColor(0.2f, 0.3f, 0.8f, 1.0f);

	vec3 a(1.0f, 2.0f, 5.0f);
	vec3 b(2, 4, 6);

	vec3 c = a + b;

	mat4 position = mat4::translation(vec3(2, 3, 4));

	vec4 colums = position.columns[3];
	std::cout << colums << std::endl;

	while (!window.closed()){
		window.clear();
		double x, y;
		window.getMousePosition(x, y);
		std::cout << c << std::endl;

		glBegin(GL_TRIANGLES);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f( 0.0f,  0.5f);
		glVertex2f( 0.5f, -0.5f);
		glEnd();

		window.update();
	}

	return 0;
}