#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <math.h>

const float steps = 100;
const float angle = 3.14159265 * 2.f / steps;
int main(void)
{
    GLFWwindow *window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    float xPos = 0;
    float yPos = 0;
    float radius = 1.0f;

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cerr << "Failed to initialize GLAD" << std::endl;
        return -1;
    }
    glViewport(0, 0, 800, 800);
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        float prevX = xPos;
        float prevY = yPos - radius;
        for (int i = 0; i <= steps; i++)
        {
            float newX = radius * sin(angle * i);
            float newY = -radius * cos(angle * i);
            glBegin(GL_TRIANGLES);
            glColor3f(0, 0.5f, 0);
            glVertex3f(0.0f, 0.0f, 0.0f);
            glVertex3f(prevX, prevY, 0.0f);
            glVertex3f(newX, newY, 0.0f);
            glEnd();

            prevX = newX;
            prevY = newY;
        }
        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}