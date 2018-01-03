#ifndef PERMISSIONSREPAIRTHREAD_H
#define PERMISSIONSREPAIRTHREAD_H

#include "../../src/repairtoolsproxy.h"

#include <QThread>

class PermissionsRepairThread : public QThread
{
    Q_OBJECT

public:
    explicit PermissionsRepairThread(QObject *parent = nullptr);

    void setToolsProxy(RepairToolsProxy *toolsProxy) { m_toolsProxy = toolsProxy; }

    void run();

signals:
    void finished();

private:
    RepairToolsProxy *m_toolsProxy;
};

#endif // PERMISSIONSREPAIRTHREAD_H