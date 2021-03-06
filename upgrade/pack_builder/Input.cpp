#include "upgrade/pack_builder/Input.hpp"

namespace application
{
    TargetNameTooLongException::TargetNameTooLongException(const std::string& name, int maxSize)
        : runtime_error("Target name '" + name + "' is too long, max is " + std::to_string(maxSize))
    {}

    Input::Input(const std::string& targetName)
        : targetName(targetName)
    {
        if (targetName.size() > maxNameSize)
            throw TargetNameTooLongException(targetName, maxNameSize);
    }

    const std::string& Input::TargetName() const
    {
        return targetName;
    }
}
