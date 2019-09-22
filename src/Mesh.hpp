#pragma once

#include "pch.h"

class Mesh {
    public:
        Mesh(){}
        Mesh(const std::string& filePath);
        virtual ~Mesh();

        void parseFile(const std::string& filePath);

        inline const glm::vec3 * getVert() const {return this->m_Positions.data();}
        inline const unsigned int * getInd() const {return this->m_Indices.data();}

        inline const unsigned int getCount() { return this->m_Positions.size(); }
        inline const unsigned int getICount() { return this->m_Indices.size(); }

    protected:
        std::vector<glm::vec3> m_Positions;
        std::vector<unsigned int> m_Indices;

};