#include "Engine.h"
#include <chrono>

Engine::Engine(int& width, int& height, const char* title) {

	if (!glfwInit())
		return;

	this->m_window = glfwCreateWindow(width, height, title, NULL, NULL);

	glfwMakeContextCurrent(this->m_window);
	glfwSwapInterval(0);


	this->m_FPS = 60;
	this->m_UPS = 60;
	glEnable(GL_DEPTH_TEST);

	while (!glfwWindowShouldClose(this->m_window)) {
		glClearColor(0.0f, 1.0f, 1.0f, 0.5f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glfwPollEvents();

		this->Render();
		this->Update();

		glfwSwapBuffers(this->m_window);
	}
}

void Engine::Render() {
	
}

void Engine::Update() {

}