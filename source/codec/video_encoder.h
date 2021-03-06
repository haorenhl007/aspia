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

#ifndef ASPIA_CODEC__VIDEO_ENCODER_H_
#define ASPIA_CODEC__VIDEO_ENCODER_H_

#include <QRect>
#include <QSize>

#include <memory>

#include "protocol/desktop_session.pb.h"

namespace aspia {

class DesktopFrame;

class VideoEncoder
{
public:
    virtual ~VideoEncoder() = default;

    virtual void encode(const DesktopFrame* frame, proto::desktop::VideoPacket* packet) = 0;

protected:
    void fillPacketInfo(proto::desktop::VideoEncoding encoding,
                        const DesktopFrame* frame,
                        proto::desktop::VideoPacket* packet);

private:
    QSize screen_size_;
    QPoint top_left_;
};

} // namespace aspia

#endif // ASPIA_CODEC__VIDEO_ENCODER_H_
