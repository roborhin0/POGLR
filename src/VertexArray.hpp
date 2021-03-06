#pragma once

#include "VertexBuffer.hpp"
#include "VertexBufferLayout.hpp"

//class VertexBufferLayout;

class VertexArray {
    public:
        VertexArray();
        void create();
        virtual ~VertexArray();

        void addBuffer(const VertexBuffer& vb, const VertexBufferLayout& layout);
        void Bind() const;
        void Unbind() const;
    private:
        unsigned int m_RendererID;        
};
