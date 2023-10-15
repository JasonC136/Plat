// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlatGameMode.h"
#include "PlatCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlatGameMode::APlatGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
