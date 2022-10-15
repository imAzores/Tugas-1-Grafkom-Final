#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>
#include <vector>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2;
	float angle = 0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildColoredCube();
	void BuildColoredPlane();
	void DrawColoredCube(int rotate, double positionX, double positionY, double positionZ, double scaleX, double scaleY, double scaleZ);
	void DrawColoredPlane();

	// Color Things
	int cubeColor = 1;
	int planeColor = 0;

	// Move Things
	float speedX = 1;
	float speedY = 1;
	float speedZ = 1;
	double pindahX = 0;
	double pindahY = 0;
	double pindahZ = 0;

	// Camera Things
	double viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ;
	float CAMERA_SPEED, fovy;
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void UpCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();

	// Beziar Curve Things
	void InitPoints();

	double lineX[800] = {};
	double lineZ[800] = {};
	
	float theta[800] = {};
	float angleTemp = 0;

	int totalPoint = 800;
	int i = 0;
	int j = 0;
};

