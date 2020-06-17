#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "RDPClassifyPlugin.h"

void RDPClassifyPlugin::input(std::string file) {
 inputfile = file;
}

void RDPClassifyPlugin::run() {}

void RDPClassifyPlugin::output(std::string file) {
 std::string outputfile = file;
 std::string myCommand = "";
myCommand += "java";
myCommand += " ";
myCommand += "-Xmx1g";
myCommand += " ";
myCommand += "-jar";
myCommand += " ";
myCommand += "${RDP_HOME}/dist/classifier.jar";
myCommand += " ";
myCommand += "classify";
myCommand += " ";
myCommand += inputfile + " ";
myCommand += "-o";
myCommand += " ";
myCommand += outputfile + " ";
 system(myCommand.c_str());
}

PluginProxy<RDPClassifyPlugin> RDPClassifyPluginProxy = PluginProxy<RDPClassifyPlugin>("RDPClassify", PluginManager::getInstance());
