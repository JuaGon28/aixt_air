// Project Name: Aixt project https://gitlab.com/fermarsan/aixt-project.git
// File Name: setup.c.v
// Author: Fernando Martínez Santa - Stiven Cortazar Cortazar - Yesid Reyes Tique
// Date: 2022-2024
// License: MIT
//
// // Description: SETUP functions (Ai_Thinker_Ai-WB2-32S-Kit)
//              (PC port) 

module pin

#define pin__setup(PIN_NAME, MODE)    pinMode(PIN_NAME, MODE)