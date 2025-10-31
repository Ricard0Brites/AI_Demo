# AI_Demo


## Description
This project displays NPC behavior, namely
- Pathing
  - Examples of the wanted behavior can be seen in games such as uncharted, Sniper Ghost Warrior series where the AI roams through some defined paths.
- Alert States
  - Default - The AI stays put for a while (Random time in a defined range in this project) then moves to the next point in the path
  - Suspicious - The AI moves closer to where the trigger of this state was heard/seen
  - Alert - The AI runs to cover. This demo doesnt include gunplay, if it did this would be a great opportunity to setup targeting.
- Group Movement
  - AI, when in a group (2+ AIs), move differently (as if they were covering eachother... again no gunplay just movement)

## Behavior Trees
### Entry Tree
> Name: BT_NPC
> - Manages each subtree
>   - Movement
>   - Enemy Detection (handles "Default", "Suspicious", and "Alert" states)

