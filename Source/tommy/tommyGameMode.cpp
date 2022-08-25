// Copyright Epic Games, Inc. All Rights Reserved.

#include "tommyGameMode.h"
#include "tommyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AtommyGameMode::AtommyGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter_Two"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
