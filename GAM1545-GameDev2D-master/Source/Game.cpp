#include "Game.h"


namespace GameDev2D
{
	Game::Game()
	{
		m_Card()
		{
			m_Card.SetSuit(0);
			m_Card.SetValue(0);
			m_Card.Load();
		}
	}

	Game::Game()
	{
		m_Deck() 
		{ 
			m_CardIndex = 0;  
			for (int i = 0; i < NUM_SUITS; i++) 
			{ 
				for (int j = 0; j < NUM_VALUES; j++)
				{ 
					m_Deck[m_CardIndex].SetSuit(i); 
					m_Deck[m_CardIndex].SetValue(j); 
					m_Deck[m_CardIndex].Load(); 
					m_CardIndex++; 
				} 
			} 
			m_CardIndex = 0; 
		}
	}

	void Game::Update(double delta)
	{
		
	}

	void Game::Draw()
	{

	}

	void Game::HandleLeftMouseClick(float mouseX, float mouseY)
	{
	
	}

	void Game::HandleRightMouseClick(float mouseX, float mouseY)
	{

	}

	void Game::HandleMouseMove(float mouseX, float mouseY, float previousX, float previousY)
	{
		
	}

	void Game::HandleKeyPress(Keyboard::Key key)
	{
  
	}

	void Game::HandleKeyReleased(Keyboard::Key key)
	{

	}
}