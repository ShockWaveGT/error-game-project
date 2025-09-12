// Copyright Epic Games, Inc. All Rights Reserved.

#include "ErrorGameProjectGameMode.h"
#include "ErrorGameProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AErrorGameProjectGameMode::AErrorGameProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
