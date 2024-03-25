#[[#include]]# "${NAME}.h"

RTTI_BEGIN_CLASS(nap::${Namespace}::${NAME})
RTTI_END_CLASS

RTTI_BEGIN_CLASS_NO_DEFAULT_CONSTRUCTOR(nap::${Namespace}::${NAME}Instance)
    RTTI_CONSTRUCTOR(nap::EntityInstance&, nap::Component&)
RTTI_END_CLASS

namespace nap
{

namespace ${Namespace}
{


}

}