

#ifndef HTMLCONVERTER_STRING_ESCAPE_UTILS_H
#define HTMLCONVERTER_STRING_ESCAPE_UTILS_H

#include <string>
#include <regex>

class StringEscapeUtils
{
public:
    static std::string escapeHtml(std::string const& input)
    {
        std::string output = input;
        output = std::regex_replace(output, std::regex("[&]"), "&amp;");
        output = std::regex_replace(output, std::regex("[<]"), "&lt;");
        output = std::regex_replace(output, std::regex("[>]"), "&gt;");
        output = std::regex_replace(output, std::regex("[\"]"), "&quot;");
        output = std::regex_replace(output, std::regex("[']"), "&quot;");
        return output;
    }
};

#endif //HTMLCONVERTER_STRING_ESCAPE_UTILS_H
