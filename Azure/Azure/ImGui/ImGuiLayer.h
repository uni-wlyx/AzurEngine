
#ifndef IMGUILAYER_H
#define IMGUILAYER_H

#include "Azure/Core/Layer.h"
#include "Azure/Events/MouseEvent.h"
#include "Azure/Events/KeyEvent.h"
#include "Azure/Events/ApplicationEvent.h"

#include <imgui.h>
#include <imgui_impl_glfw.h>
#include <imgui_impl_opengl3.h>

namespace Azure {

    class AZURE_API ImGuiLayer : public Layer {
    public:
        ImGuiLayer();
        ~ImGuiLayer();

        void OnAttach() override;
        void OnDetach() override;

        void OnImGuiRender() override;

        void Begin();
        void End();
    private:
        float m_time = 0.0f;
    };

} // Azure

#endif //IMGUILAYER_H
