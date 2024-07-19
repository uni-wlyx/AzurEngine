#include "azphc.h"
#include "Buffer.h"
#include "Renderer.h"

#include "Platform/OpenGL/OpenGLBuffer.h"

namespace Azure
{
    VertexBuffer *VertexBuffer::Create(float *vertices, uint32_t size)
    {
        switch (Renderer::GetAPI())
        {
        case RendererAPI::API::OpenGL:  return new OpenGLVertexBuffer(vertices, size);
        case RendererAPI::API::None:    AZ_ASSERT(false, "No Renderer API!!!");return nullptr;
        }

        AZ_ASSERT(false, "UnKonwn Renderer API!!!");
        return nullptr;
    }

    IndexBuffer *IndexBuffer::Create(uint32_t *indices, uint32_t count)
    {
        switch (Renderer::GetAPI())
        {
        case RendererAPI::API::OpenGL:  return new OpenGLIndexBuffer(indices, count);
        case RendererAPI::API::None:    AZ_ASSERT(false, "No Renderer API!!!");return nullptr;
        }

        AZ_ASSERT(false, "UnKonwn Renderer API!!!");
        return nullptr;
    }

}
