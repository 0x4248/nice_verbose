# Nice Verbose
A simple header file to create nice verbose output.

Nice verbose icon mode uses a similar style to metasploit's verbose output. There is also a text mode which look like systemd's verbose output.

## demo
### Icon mode

![Icon mode](https://raw.githubusercontent.com/awesomelewis2007/nice_verbose/master/doc/icon%20mode.png)

### Text mode
![Text mode](https://raw.githubusercontent.com/awesomelewis2007/nice_verbose/master/doc/text%20mode.png)

## Usage
### Icon mode
```cpp
#include <iostream>
#include "src/nice_verbose.h"
int main(int argc, char const *argv[])
{
    nice_verbose::debug("This is a debug");
    nice_verbose::log("This is a log");
    nice_verbose::info("This is a info");
    nice_verbose::important("This is a important");
    nice_verbose::warn("This is a warn");
    nice_verbose::question("This is a question");
    nice_verbose::error("This is a error");
    nice_verbose::critical_error("This is a critical error");
    nice_verbose::major_critical_error("This is a major critical error");
}
```
### Text mode
```cpp
#include <iostream>
#include "src/nice_verbose.h"
int main(int argc, char const *argv[])
{
    nice_verbose_text::ok("This is a log");
    nice_verbose_text::info("This is a info");
    nice_verbose_text::warn("This is a warn");
    nice_verbose_text::error("This is a error");
    nice_verbose_text::failed("This is a failed");
    nice_verbose_text::critical_error("This is a critical error");
    nice_verbose_text::major_critical_error("This is a major critical error");
    nice_verbose_text::custom("This is a custom", "custom");
}
```

## other functions
### date_time perameter
The date_time parameter is a bool that is set to false by default. If it is set to true, the date and time will be printed before the message in blue
![Time](https://raw.githubusercontent.com/awesomelewis2007/nice_verbose/master/doc/time.png)
Icon mode:
```cpp
nice_verbose::log("This is a debug", true);
```

Text mode:
```cpp
nice_verbose_text::ok("This is a log", true);
```