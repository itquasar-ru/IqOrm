/**********************************************************************************
 * Copyright © 2015 Pavel A. Puchkov                                              *
 *                                                                                *
 * This file is part of IqOrm.                                                    *
 *                                                                                *
 * IqOrm is free software: you can redistribute it and/or modify                  *
 * it under the terms of the GNU Lesser General Public License as published by    *
 * the Free Software Foundation, either version 3 of the License, or              *
 * (at your option) any later version.                                            *
 *                                                                                *
 * IqOrm is distributed in the hope that it will be useful,                       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of                 *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the                  *
 * GNU Lesser General Public License for more details.                            *
 *                                                                                *
 * You should have received a copy of the GNU Lesser General Public License       *
 * along with IqOrm.  If not, see <http://www.gnu.org/licenses/>.                 *
 **********************************************************************************/

#include "iqormnulldatasource.h"
#include <QDebug>

IqOrmNullDataSource::IqOrmNullDataSource(QObject *parent) :
    IqOrmAbstractDataSource(parent)
{
}

IqOrmAbstractObjectDataSource *IqOrmNullDataSource::objectDataSource() const
{
    printWarnign();
    return Q_NULLPTR;
}

IqOrmAbstractModelDataSource *IqOrmNullDataSource::objectsModelDataSource() const
{
    printWarnign();
    return Q_NULLPTR;
}

void IqOrmNullDataSource::printWarnign() const
{
    qWarning() << "Data source not set. Use IQORMCore::setDataSource() first.";
}
