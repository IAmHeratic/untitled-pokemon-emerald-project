OldaleTown_House3_MapScripts::
	.byte 0


OldaleTown_House3_EventScript_Man::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_BERRIES_OLDALE, OldaleTown_House3_EventScript_ExplainBerries
	goto_if_set FLAG_TEMP_1, OldaleTown_House3_EventScript_ExplainBerries
	setflag FLAG_TEMP_1
	goto OldaleTown_House3_EventScript_GiveBerries
	end


OldaleTown_House3_EventScript_ExplainBerries::
	msgbox OldaleTown_House3_Text_ExplainBerries, MSGBOX_DEFAULT
	release
	end


OldaleTown_House3_EventScript_GiveBerries::
	msgbox OldaleTown_House3_Text_HaveSomeBerries, MSGBOX_DEFAULT
	giveitem ITEM_LUM_BERRY
	giveitem ITEM_SITRUS_BERRY
	giveitem ITEM_LEPPA_BERRY
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_House3_EventScript_BagIsFull
	msgbox OldaleTown_House3_Text_ExplainBerries, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_BERRIES_OLDALE
	fadedefaultbgm
	release
	end


OldaleTown_House3_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	fadedefaultbgm
	release
	end


OldaleTown_House3_Text_HaveSomeBerries::
	.string "You should have some of these.$"

OldaleTown_House3_Text_ExplainBerries::
	.string "Pokemon can hold items including berries!$"
