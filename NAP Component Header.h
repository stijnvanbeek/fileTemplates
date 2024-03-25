#pragma once

#[[#include]]# <${Include}>
#[[#include]]# <entity.h>

namespace nap
{

namespace ${Namespace}
{

// Forward declarations
class ${NAME}Instance;

class ${NAME} : public ${BaseClass} 
{
    RTTI_ENABLE(${BaseClass})
    DECLARE_COMPONENT(${NAME}, ${NAME}Instance)
public:
	void getDependentComponents(std::vector<rtti::TypeInfo>& types) const override
	{
	}
private:
};

class ${NAME}Instance : public ${BaseClass}Instance
{
    RTTI_ENABLE(${BaseClass}Instance)
public:
    ${NAME}Instance(EntityInstance& entity, Component& resource) : ${BaseClass}Instance(entity, resource) { }
    bool init(utility::ErrorState& errorState) override
    {
        return true;
    }
    
private:
};

}

}