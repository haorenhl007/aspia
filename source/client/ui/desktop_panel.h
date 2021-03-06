//
// Aspia Project
// Copyright (C) 2018 Dmitry Chapyshev <dmitry@aspia.ru>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef ASPIA_CLIENT__UI__DESKTOP_PANEL_H_
#define ASPIA_CLIENT__UI__DESKTOP_PANEL_H_

#include <QPointer>

#include "base/macros_magic.h"
#include "protocol/authorization.pb.h"
#include "protocol/desktop_session.pb.h"
#include "ui_desktop_panel.h"

namespace aspia {

class DesktopPanel : public QFrame
{
    Q_OBJECT

public:
    DesktopPanel(proto::auth::SessionType session_type, QWidget* parent);
    ~DesktopPanel() = default;

    void setScreenList(const proto::desktop::ScreenList& screen_list);

signals:
    void keySequence(int key_secuence);
    void switchToFullscreen(bool fullscreen);
    void switchToAutosize();
    void settingsButton();
    void screenSelected(const proto::desktop::Screen& screen);
    void autoScrollChanged(bool enabled);

protected:
    // QFrame implementation.
    void timerEvent(QTimerEvent* event) override;
    void enterEvent(QEvent* event) override;
    void leaveEvent(QEvent* event) override;

private slots:
    void onFullscreenButton(bool checked);
    void onAutosizeButton();
    void onCtrlAltDelButton();
    void onAltTabAction();
    void onAltShiftTabAction();
    void onPrintScreenAction();
    void onAltPrintScreenAction();
    void onCustomAction();

private:
    void delayedHide();

    Ui::DesktopPanel ui;

    QMenu* keys_menu_;
    QMenu* screens_menu_;
    QActionGroup* screens_group_;

    int hide_timer_id_ = 0;

    bool allow_hide_ = true;
    bool leaved_ = true;

    DISALLOW_COPY_AND_ASSIGN(DesktopPanel);
};

} // namespace aspia

#endif // ASPIA_CLIENT__UI__DESKTOP_PANEL_H_
