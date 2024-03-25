#version 450 core
uniform nap
{
	uniform mat4 projectionMatrix;
	uniform mat4 viewMatrix;
	uniform mat4 modelMatrix;
} mvp;

in vec3	in_Position;

void main(void)
{
    gl_Position = mvp.projectionMatrix * mvp.viewMatrix * mvp.modelMatrix * vec4(in_Position, 1.0);
}
