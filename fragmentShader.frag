#version 330 core

in vec2 TexCoord;
out vec4 FragColor;

// Texture samplers
uniform sampler2D ourTexture;

uniform bool isCube;

void main()
{
    FragColor = texture(ourTexture, TexCoord);

    //FragColor = texture(ourTexture, TexCoord) * (isCube? vec4(255/255.0f, 0/255.0f, 255/255.0f, 1) : vec4(0/255.0f, 255/255.0f, 0/255.0f, 1));
}