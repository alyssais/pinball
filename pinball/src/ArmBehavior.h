/***************************************************************************
                          KeyBeh.h  -  description
                             -------------------
    begin                : Wed Jan 26 2000
    copyright            : (C) 2000 by 
    email                : 
 ***************************************************************************/

#ifndef ARMBEHAVIOR_H
#define ARMBEHAVIOR_H

#include "Behavior.h"
#include "StateMachine.h"

/**
 * <p>A Behavior for the pinball demo.</p>
 */
class ArmBehavior : public Behavior {
	public:
		ArmBehavior(bool right = true);
		~ArmBehavior();
		void onTick();
		void StdOnSignal() {};
		void StdOnCollision() {};
	private:
		bool m_bRight;
		int m_iCount;
		bool m_bOn;
};

#endif // ARMBEHAVIOR_H