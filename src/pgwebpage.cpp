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

#include "pgwebpage.h"

#include <QDebug>

PGWebPage::PGWebPage(QObject *parent) :
    QWebPage(parent)
{
}

void PGWebPage::javaScriptConsoleMessage( const QString & message, int lineNumber, const QString & sourceID ) {
    qDebug() << sourceID << lineNumber << message;
}
