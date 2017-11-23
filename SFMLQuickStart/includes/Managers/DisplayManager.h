//
// Created by Quentin on 11/14/2017.
//

#ifndef SFMLQUICKSTART_DISPLAYMANAGER_H
#define SFMLQUICKSTART_DISPLAYMANAGER_H

#include <SFML/Graphics.hpp>

#include "IManager.h"

namespace Managers
{
    class DisplayManager : public IManager
    {
    public:
        static const unsigned m_windowW = 1280;
        static const unsigned m_windowH = 720;

    private:
        sf::RenderWindow *m_window;

        bool m_isStarted;

    public:
        DisplayManager();
        ~DisplayManager();

        void Setup() override;
        void Update() override;

        sf::RenderWindow *getWindow() const;

        bool IsRunning() const;
        bool IsStarted() const;
    };
}

#endif //CATCH_ME_DISPLAYMANAGER_H