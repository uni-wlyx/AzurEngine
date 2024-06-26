
#ifndef LAYERSTACK_H
#define LAYERSTACK_H

#include "Layer.h"

namespace Azur {

    class AZUR_API LayerStack {
    public:
        LayerStack();

        ~LayerStack();

        void PushLayer(Layer *layer);

        void PushOverlay(Layer *overlay);

        void PopLayer(Layer *layer);

        void PopOverlay(Layer *overlay);

        std::vector<Layer *>::iterator begin() { return m_layers.begin(); }

        std::vector<Layer *>::iterator end() { return m_layers.end(); }

    private:
        std::vector<Layer *> m_layers;
        std::vector<Layer *>::iterator m_layerInsert;
    };

} // Azur

#endif //LAYERSTACK_H
