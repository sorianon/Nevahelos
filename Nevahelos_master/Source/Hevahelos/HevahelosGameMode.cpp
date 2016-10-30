// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Hevahelos.h"
#include "HevahelosGameMode.h"
#include "HevahelosHUD.h"
#include "HevahelosCharacter.h"

AHevahelosGameMode::AHevahelosGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHevahelosHUD::StaticClass();
}
