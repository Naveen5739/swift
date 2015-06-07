/*
 * Copyright (c) 2010-2015 Isode Limited.
 * All rights reserved.
 * See the COPYING file for more information.
 */

#pragma once

#include <Swiften/Base/API.h>
#include <Swiften/Parser/GenericElementParser.h>
#include <Swiften/Elements/StreamManagementFailed.h>

namespace Swift {
	class SWIFTEN_API StreamManagementFailedParser : public GenericElementParser<StreamManagementFailed> {
		public:
			StreamManagementFailedParser() : GenericElementParser<StreamManagementFailed>() {}
	};
}
