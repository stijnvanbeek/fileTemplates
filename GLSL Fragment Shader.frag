#version 450 core
uniform UBO
{
	uniform vec3 color;
	uniform float alpha;
} ubo;

out vec4 out_Color;
void main() 
{
    out_Color = vec4(ubo.color, ubo.alpha);
}