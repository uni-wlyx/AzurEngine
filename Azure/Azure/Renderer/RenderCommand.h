#ifndef RENDERCOMMAND_H
#define RENDERCOMMAND_H

#pragma once

#include "RendererAPI.h"
namespace Azure
{
    class AZURE_API RenderCommand
    {
    public:
        static void Init()
        {
            s_RendererAPI->Init();
        }

        static void DrawIndexed(const Ref<VertexArray> &vertexArray)
        {
            s_RendererAPI->DrawIndexed(vertexArray);
        }

        static void SetClearColor(const glm::vec4 &color)
        {
            s_RendererAPI->SetClearColor(color);
        }

        static void Clear()
        {
            s_RendererAPI->Clear();
        }

        static void ResizeViewport(int width, int height)
        {
            s_RendererAPI->SetViewport(width, height);
        }

    private:
        static Scope<RendererAPI> s_RendererAPI;
    };
} // Azure

#endif