// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Trial_of_the_godsGameMode.h"
#include "Trial_of_the_godsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATrial_of_the_godsGameMode::ATrial_of_the_godsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
