LittlerootTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0


LittlerootTown_PokemonCenter_1F_OnTransition::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN
	end


Littleroot_Town_PokemonCenter_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	lock
	return


Littleroot_Town_PokemonCenter_Beauty::
	lock
	faceplayer
	msgbox Littleroot_Town_PokemonCenter_Beauty_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Littleroot_Town_PokemonCenter_Beauty_1
	msgbox Littleroot_Town_PokemonCenter_Beauty_Text_2, MSGBOX_NPC
	return

Littleroot_Town_PokemonCenter_Beauty_1:
	msgbox Littleroot_Town_PokemonCenter_Beauty_Text_1, MSGBOX_NPC
	waitmessage
	release
	end


Littleroot_Town_PokemonCenter_Kecleon::
	lock
	faceplayer
	msgbox Littleroot_Town_PokemonCenter_Beauty_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	release
	end


Littleroot_Town_PokemonCenter_Beauty_Text_0:
	.string "Hi! Do you like my Kecleon?$"

Littleroot_Town_PokemonCenter_Beauty_Text_1:
	.string ":)$"

Littleroot_Town_PokemonCenter_Beauty_Text_2:
	.string "D:$"
