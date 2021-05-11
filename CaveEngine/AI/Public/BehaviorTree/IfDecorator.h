/*!
 * Copyright (c) 2021 SWTube. All rights reserved.
 * Licensed under the GPL-3.0 License. See LICENSE file in the project root for license information.
 */
#pragma once

#include <vector>
#include "Decorator.h"

namespace cave
{
    class IfDecorator : public Decorator
    {
    public:
        IfDecorator();
        IfDecorator(const char*, bool (*)());

        virtual bool Invoke() override 
        {
            if (mCondition)
            {
                return GetChild()->Invoke();
            }
        }

        void SetCondition(bool (*)());
    private:
        bool (*mCondition)();
    };
}
