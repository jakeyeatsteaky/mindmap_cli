# mindmap_cli
Mind Map Tree

Just a project to visualize some of the open loops in my mind.


MVP:
    - Add, delete, view nodes in the mind map.
    
Stretch:    
    - GUI Visualization (like icemon)


Design Idea:

    ./mindmap --view --> Shows tree structure of current mindmap

    ./mindmap --add "Career" --> adds root node "Career"

    ./mindmap --add "Career/GameDev" --> adds child node "GameDev" to "Career"

    ./mindmap --expand "Career/GameDev" --> shows notes on the GameDev section of Career

    [ ] What should the view look like?

    [ ] When starting the app, it should stay open until exit

    [ ] Startup behavior:
        No Saved File:
            - 



Edge Cases:
    - What if there is no saved configuration?
        - open a "Start here" menu?