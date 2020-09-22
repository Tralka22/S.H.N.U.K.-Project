/*
This file is generated, but you can safely change it
until you run "gen_actor_source.py" with "--project" flag.

Generated file is just a skeleton for module contents.
You should change it corresponding to functionality.
*/

#include <QtCore>
#include <QtGui>
#include "jokermodule.h"
#include <kumir2-libs/stdlib/kumirstdlib.hpp>

namespace ActorJoker {

JokerModule::JokerModule(ExtensionSystem::KPlugin * parent)
    : JokerModuleBase(parent)
{
    /* TODO
    implement class Constructor
    */
}

void JokerModule::reset()
{
    /* TODO
    This method is called when actor resets its state before program starts.
    */
}

void JokerModule::setAnimationEnabled(bool enabled)
{
    /* TODO
    Set internal flag for animation
    */
}

QList<ExtensionSystem::CommandLineParameter> JokerModule::acceptableCommandLineParameters()
{
    return QList<ExtensionSystem::CommandLineParameter>();
}

void JokerModule::runJoke()
{
    setError(QString::fromUtf8("Я не умею"));
}


} // $namespace
