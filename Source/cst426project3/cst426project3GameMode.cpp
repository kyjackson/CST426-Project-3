// Copyright Epic Games, Inc. All Rights Reserved.

#include "cst426project3GameMode.h"
#include "cst426project3Character.h"
#include "UObject/ConstructorHelpers.h"

Acst426project3GameMode::Acst426project3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
