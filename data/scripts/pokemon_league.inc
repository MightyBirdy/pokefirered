PokemonLeague_EventScript_OpenDoor:: @ 81A7506
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Delay32
	waitmovement 0
	playse SE_DOOR
	call PokemonLeague_EventScript_SetDoorOpen
	special DrawWholeMapView
	setflag FLAG_TEMP_4
	return

PokemonLeague_EventScript_EnterRoom:: @ 81A751F
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkUp5
	waitmovement 0
	setflag FLAG_TEMP_2
	playse SE_KI_GASYAN
	call PokemonLeague_EventScript_CloseEntry
	special DrawWholeMapView
	return

PokemonLeague_EventScript_SetDoorOpen:: @ 81A7538
	setmetatile 6, 1, METATILE_PokemonLeague_Door_Top_Open, 1
	setmetatile 6, 2, METATILE_PokemonLeague_Door_Mid_Open, 0
	return

PokemonLeague_EventScript_PreventExit:: @ 81A754B
	lockall
	textcolor 0
	msgbox Text_VoiceRangOutDontRunAway
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_Movement_ForcePlayerIn
	waitmovement 0
	releaseall
	end

PokemonLeague_EventScript_OpenDoorLance:: @ 81A7563
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Delay32
	waitmovement 0
	playse SE_DOOR
	setmetatile 6, 4, METATILE_PokemonLeague_Door_Top_Open, 1
	setmetatile 6, 5, METATILE_PokemonLeague_Door_Mid_Open, 0
	special DrawWholeMapView
	setflag FLAG_TEMP_4
	return

PokemonLeague_EventScript_SetDoorOpenLance:: @ 81A7589
	setmetatile 6, 4, METATILE_PokemonLeague_Door_Top_Open, 1
	setmetatile 6, 5, METATILE_PokemonLeague_Door_Mid_Open, 0
	return

PokemonLeague_EventScript_CloseEntry:: @ 81A759C
	setmetatile 5, 11, METATILE_PokemonLeague_Entry_TopLeft_Closed, 1
	setmetatile 6, 11, METATILE_PokemonLeague_Entry_TopMid_Closed, 1
	setmetatile 7, 11, METATILE_PokemonLeague_Entry_TopRight_Closed, 1
	setmetatile 5, 12, METATILE_PokemonLeague_Entry_BottomLeft_Closed, 1
	setmetatile 6, 12, METATILE_PokemonLeague_Entry_BottomMid_Closed, 1
	setmetatile 7, 12, METATILE_PokemonLeague_Entry_BottomRight_Closed, 1
	return

PokemonLeague_Movement_ForcePlayerIn:: @ 81A75D3
	walk_up
	step_end

PokemonLeague_EventScript_DoLightingEffect:: @ 81A75D5
	special DoPokemonLeagueLightingEffect
	return
