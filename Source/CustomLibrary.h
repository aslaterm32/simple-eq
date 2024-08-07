//
//  CustomLibrary.h
//  SimpleEQ
//
//  Created by Alex Slater on 07/08/2024.
//

#pragma once

#ifndef CustomLibrary_h
#define CustomLibrary_h

#include <math.h>
#include <juce_core/juce_core.h>

class CustomLibray
{
public:
    
    // static because it needs to be callable on the class
    static juce::StringArray buildDBOctOptions()
    {
        juce::StringArray stringArray;
        
        for (int i = 0; i < 3; ++i)
        {
            juce::String str;
            str << (6 * pow(2, i)); // 6, 12, 24
            str << " db/Oct";
            stringArray.add(str);
        }
        
        return stringArray;
    }
};

#endif /* CustomLibrary_h */
