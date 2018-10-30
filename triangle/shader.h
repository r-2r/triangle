// load, compile, link and use shaders

#pragma once

class CShader
{

// variable

private:
    GLhandleARB hVertex, hFragment;
    GLhandleARB hProgram;

public:
	char caption[100];
    GLcharARB *infolog;

// function

private:
    bool GetInfoLog(GLhandleARB handle, GLenum status);
    bool GetSource(char** pSource, size_t* n, wchar_t* pFile);

public:
    CShader();
    ~CShader();

    bool Create(wchar_t* vertFile, wchar_t* fragFile);
    void Destroy();
    GLhandleARB GetHandle();
};

