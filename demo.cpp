/* Nice verbose (Demo file)
 * A simple header file to create nice verbose output.
 * GitHub: https://www.github.com/awesomelewis2007/nice_verbose
 * Licence: GNU General Public License v3.0
 * By: Lewis Evans
 */

#include "src/nice_verbose.h"
#include <iostream>
int main(int argc, char const *argv[]) {
    std::cout << "Icon logs" << std::endl;
    nice_verbose::debug("This is a debug");
    nice_verbose::log("This is a log");
    nice_verbose::info("This is a info");
    nice_verbose::important("This is a important");
    nice_verbose::warn("This is a warn");
    nice_verbose::question("This is a question");
    nice_verbose::error("This is a error");
    nice_verbose::critical_error("This is a critical error");
    nice_verbose::major_critical_error("This is a major critical error");

    std::cout << "Text logs" << std::endl;
    nice_verbose_text::ok("This is a log");
    nice_verbose_text::info("This is a info");
    nice_verbose_text::warn("This is a warn");
    nice_verbose_text::error("This is a error");
    nice_verbose_text::failed("This is a failed");
    nice_verbose_text::critical_error("This is a critical error");
    nice_verbose_text::major_critical_error("This is a major critical error");
    nice_verbose_text::custom("This is a custom", "custom");

    std::cout << "Icon logs" << std::endl;
    nice_verbose::debug("This is a debug", true);
    nice_verbose::log("This is a log", true);
    nice_verbose::info("This is a info", true);
    nice_verbose::important("This is a important", true);
    nice_verbose::warn("This is a warn", true);
    nice_verbose::question("This is a question", true);
    nice_verbose::error("This is a error", true);
    nice_verbose::critical_error("This is a critical error", true);
    nice_verbose::major_critical_error("This is a major critical error", true);

    std::cout << "Text logs" << std::endl;
    nice_verbose_text::ok("This is a log", true);
    nice_verbose_text::info("This is a info", true);
    nice_verbose_text::warn("This is a warn", true);
    nice_verbose_text::error("This is a error", true);
    nice_verbose_text::failed("This is a failed", true);
    nice_verbose_text::critical_error("This is a critical error", true);
    nice_verbose_text::major_critical_error("This is a major critical error",
                                            true);

    return 0;
}
