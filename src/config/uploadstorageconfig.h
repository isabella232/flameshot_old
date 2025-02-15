// Copyright(c) 2020 Yurii Puchkov at Namecheap & Contributors
//
// This file is part of Flameshot.
//
//     Flameshot is free software: you can redistribute it and/or modify
//     it under the terms of the GNU General Public License as published by
//     the Free Software Foundation, either version 3 of the License, or
//     (at your option) any later version.
//
//     Flameshot is distributed in the hope that it will be useful,
//     but WITHOUT ANY WARRANTY; without even the implied warranty of
//     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//     GNU General Public License for more details.
//
//     You should have received a copy of the GNU General Public License
//     along with Flameshot.  If not, see <http://www.gnu.org/licenses/>.

#ifndef FLAMESHOT_UPLOADSTORAGECONFIG_H
#define FLAMESHOT_UPLOADSTORAGECONFIG_H

#include <QObject>
#include <QWidget>

class QVBoxLayout;

class UploadStorageConfig : public QWidget
{
    Q_OBJECT
public:
    explicit UploadStorageConfig(QWidget* parent = nullptr);

private:
    QVBoxLayout* m_layout;
};

#endif // FLAMESHOT_UPLOADSTORAGECONFIG_H
