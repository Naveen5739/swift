/*
 * Copyright (c) 2010-2015 Isode Limited.
 * All rights reserved.
 * See the COPYING file for more information.
 */

#pragma once

#include <Swiften/Base/API.h>
#include <Swiften/Parser/GenericElementParser.h>
#include <Swiften/Elements/AuthResponse.h>
#include <string>

namespace Swift {
	class SWIFTEN_API AuthResponseParser : public GenericElementParser<AuthResponse> {
		public:
			AuthResponseParser();

			virtual void handleStartElement(const std::string&, const std::string& ns, const AttributeMap&);
			virtual void handleEndElement(const std::string&, const std::string& ns);
			virtual void handleCharacterData(const std::string&);

		private:
			int depth;
			std::string text;
	};
}
