/*
 * Copyright (C) 2015 Jared Boone, ShareBrained Technology, Inc.
 * Copyright (C) 2016 Furrtek
 *
 * This file is part of PortaPack.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __CW_TX_H__
#define __CW_TX_H__

#include "ui.hpp"
#include "ui_widget.hpp"
#include "ui_navigation.hpp"
#include "ui_transmitter.hpp"

#include "portapack.hpp"
#include "message.hpp"

namespace ui {

class CWTXView : public View {
public:
	CWTXView(NavigationView& nav);
	~CWTXView();
	
	void focus() override;
	
	std::string title() const override { return "CW generator"; };

private:
	void start_tx();
	void stop_tx();
	
	TransmitterView tx_view {
		8 * 16,
		10000,
		12
	};
};

} /* namespace ui */

#endif/*__CW_TX_H__*/
