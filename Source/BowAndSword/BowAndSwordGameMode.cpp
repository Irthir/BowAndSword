// Copyright Epic Games, Inc. All Rights Reserved.

#include "BowAndSwordGameMode.h"
#include "BowAndSwordCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABowAndSwordGameMode::ABowAndSwordGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
