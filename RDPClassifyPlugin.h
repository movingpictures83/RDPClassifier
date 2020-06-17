#ifndef RDPCLASSIFYPLUGIN_H
#define RDPCLASSIFYPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class RDPClassifyPlugin : public Plugin
{
public: 
 std::string toString() {return "RDPClassify";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
