#include "splashkit.h"
#pragma once

struct player_input
{
    key_code left_key;
    key_code right_key;
    key_code jump_key;
    key_code crouch_key;
};

player_input make_player1_input()
{
    player_input input;
    input.jump_key = UP_KEY;
    input.right_key = RIGHT_KEY;
    input.left_key = LEFT_KEY;
    input.crouch_key = DOWN_KEY;

    return input;
}

player_input make_player2_input()
{
    player_input input;
    input.jump_key = W_KEY;
    input.right_key = D_KEY;
    input.left_key = A_KEY;
    input.crouch_key = S_KEY;

    return input;
}