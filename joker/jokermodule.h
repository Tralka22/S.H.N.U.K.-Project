/*
This file is generated, but you can safely change it
until you run "gen_actor_source.py" with "--project" flag.

Generated file is just a skeleton for module contents.
You should change it corresponding to functionality.
*/

#ifndef JOKERMODULE_H
#define JOKERMODULE_H

#include <QtCore>
#if QT_VERSION >= 0x050000
#   include <QtWidgets>
#else
#   include <QtGui>
#endif
#include <kumir2-libs/extensionsystem/kplugin.h>
#include "jokermodulebase.h"

namespace ActorJoker {

class JokerModule
    : public JokerModuleBase
{
    Q_OBJECT
public:
    // Constructor
    static QList<ExtensionSystem::CommandLineParameter> acceptableCommandLineParameters();
    JokerModule(ExtensionSystem::KPlugin * parent);
    inline void reloadSettings(ExtensionSystem::SettingsPtr, const QStringList & ) {}
    inline void changeGlobalState(ExtensionSystem::GlobalState, ExtensionSystem::GlobalState) {}

public slots:
    // Reset actor state before program starts
    void reset();
    inline void terminateEvaluation() {}
    // Set animation flag
    void setAnimationEnabled(bool enabled);
    // Actor methods
    void runJoke();



}; // JokerModule

} // ActorJoker

#endif // COMPLEXNUMBERSMODULE_H
