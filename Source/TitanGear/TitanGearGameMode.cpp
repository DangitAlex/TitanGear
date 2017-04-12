// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TitanGear.h"
#include "TitanGearGameMode.h"
#include "TitanGearCharacter.h"

ATitanGearGameMode::ATitanGearGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
