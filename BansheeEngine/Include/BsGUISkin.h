#pragma once

#include "BsPrerequisites.h"
#include "BsGUIElementStyle.h"

namespace BansheeEngine
{
	class BS_EXPORT GUISkin
	{
	public:
		GUISkin() {}

		const GUIElementStyle* getStyle(const CM::String& guiElemType) const;
		void setStyle(const CM::String& guiElemType, const GUIElementStyle& style);

	private:
		static GUIElementStyle DefaultStyle;

		CM::UnorderedMap<CM::String, GUIElementStyle>::type mStyles;

		GUISkin(const GUISkin& skin) {} // Disable copying
	};
}