// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#include "MyPage.g.h"
#include "../../../src/cascadia/inc/cppwinrt_utils.h"

namespace winrt::SampleApp::implementation
{
    struct MyPage : MyPageT<MyPage>
    {
    public:
        MyPage();

        void Create();

        hstring Title();

        winrt::fire_and_forget Create_Click(const winrt::Windows::Foundation::IInspectable& s, const winrt::Windows::Foundation::IInspectable& e);

    private:
        friend struct MyPageT<MyPage>; // for Xaml to bind events
    };
}

namespace winrt::SampleApp::factory_implementation
{
    BASIC_FACTORY(MyPage);
}
