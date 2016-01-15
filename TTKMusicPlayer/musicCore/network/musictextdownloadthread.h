#ifndef MUSICTEXTDOWNLOADTHREAD_H
#define MUSICTEXTDOWNLOADTHREAD_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2014 - 2016 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include "musicdownloadthreadabstract.h"

class MUSIC_NETWORK_EXPORT MusicTextDownLoadThread : public MusicDownLoadThreadAbstract
{
    Q_OBJECT
public:
    MusicTextDownLoadThread(const QString &url, const QString &save,
                            Download_Type type, QObject *parent = 0);
    virtual void startToDownload() override;

public Q_SLOTS:
    virtual void downLoadFinished() override;

};
#endif // MUSICTEXTDOWNLOADTHREAD_H