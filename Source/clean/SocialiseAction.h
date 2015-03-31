#pragma once

#include "InputCallback.h"
#include "Player.h"


namespace AABSEngine
{
	namespace Input
	{
		class InputManager;
	}

	namespace Rendering
	{
		class MouseCursor;
	}

	namespace Core
	{
		/**
		 * @class SocialiseAction
		 *
		 * @brief 
		 *
		 * @author AABS
		 * @version X
		 * @date October 2013
		 *
		 */
		class SocialiseAction : public InputCallback<Player>
		{
		public:
			SocialiseAction(Player& player) : InputCallback(player) {}
			
			void Begin();

			void Execute();

			void End();

			void SetInternals(AABSEngine::Rendering::MouseCursor* cursor);

		private:

			AABSEngine::Rendering::MouseCursor* m_cursorGraphic;
		};
	}
}