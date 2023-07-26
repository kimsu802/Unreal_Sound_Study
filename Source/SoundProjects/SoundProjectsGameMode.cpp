// Copyright Epic Games, Inc. All Rights Reserved.

#include "SoundProjectsGameMode.h"
#include "SoundProjectsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASoundProjectsGameMode::ASoundProjectsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
