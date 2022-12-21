// Copyright Epic Games, Inc. All Rights Reserved.

#include "SwitchMultipleCameraGameMode.h"
#include "SwitchMultipleCameraCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASwitchMultipleCameraGameMode::ASwitchMultipleCameraGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
