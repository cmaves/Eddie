﻿// <eddie_source_header>
// This file is part of Eddie/AirVPN software.
// Copyright (C)2014-2016 AirVPN (support@airvpn.org) / https://airvpn.org
//
// Eddie is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Eddie is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Eddie. If not, see <http://www.gnu.org/licenses/>.
// </eddie_source_header>

#include "ibase.h"

#include <netinet/in.h>

class IPosix : public IBase
{
protected:

	virtual void Do(const std::string& id, const std::string& command, std::map<std::string, std::string>& params);

	// Virtual
protected:
	virtual int GetProcessIdMatchingIPEndPoints(struct sockaddr_in& addrClient, struct sockaddr_in& addrServer);
	virtual void AddTorCookiePaths(const std::string& torPath, const std::string& username, std::vector<std::string>& result);

	// Virtual Pure, OS
protected:
	virtual void Sleep(int ms);
	virtual pid_t GetParentProcessId();
	virtual pid_t GetParentProcessId(pid_t pid);
	virtual pid_t GetProcessIdOfName(const std::string& name);
};
