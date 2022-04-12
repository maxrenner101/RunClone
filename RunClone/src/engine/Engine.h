#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include <string>
#include "Shader.h"
#include <time.h>
#include <iostream>

class Engine {
public:
	Engine(int& width, int& height, const char* title);
	int getWidth() { return m_width; }
	int getHeight() { return m_height; }
	void setWidth(int width) {
		m_width = width;
		m_aspect = m_width / m_height;
	}
	void setHeight(int height) {
		m_height = height;
		m_aspect = m_width / m_height;
	}
	void setFPS(int fps) { m_FPS = fps; }
	int getFPS() { return m_FPS; }
	int getUPS() { return m_UPS; }
	long double getDeltaTime() { return m_deltaTime; }
	float getAspectRatio() { return m_aspect; }
	void Render();
	void Update();
private:
	GLFWwindow* m_window;
	int m_width;
	int m_height;
	int m_FPS;
	int m_UPS;
	long double m_deltaTime;
	float m_aspect;
	Shader shader[];
};