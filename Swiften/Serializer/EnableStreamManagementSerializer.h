/*
 * Copyright (c) 2010-2015 Isode Limited.
 * All rights reserved.
 * See the COPYING file for more information.
 */

#pragma once

#include <boost/shared_ptr.hpp>

#include <Swiften/Base/API.h>
#include <Swiften/Elements/EnableStreamManagement.h>
#include <Swiften/Serializer/GenericElementSerializer.h>
#include <Swiften/Serializer/XML/XMLElement.h>

namespace Swift {
	class SWIFTEN_API EnableStreamManagementSerializer : public GenericElementSerializer<EnableStreamManagement> {
		public:
			EnableStreamManagementSerializer() : GenericElementSerializer<EnableStreamManagement>() {
			}

			virtual SafeByteArray serialize(boost::shared_ptr<ToplevelElement>) const {
				return createSafeByteArray(XMLElement("enable", "urn:xmpp:sm:2").serialize());
			}
	};
}
