/*
 *  Copyright 2011 Wolfgang Koller - http://www.gofg.at/
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef DEVICE_H
#define DEVICE_H

#include "../cplugin.h"

class Device : public CPlugin
{
    Q_OBJECT
public:
    explicit Device();

signals:

public slots:
    void getInfo( int scId, int ecId );

private:
    static Device* m_device;
};

#endif // DEVICE_H
