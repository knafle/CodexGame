// Copyright Epic Games, Inc. All Rights Reserved.

#include "CodexGameGameMode.h"
#include "CodexGamePlayerController.h"
#include "CodexGameCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACodexGameGameMode::ACodexGameGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACodexGamePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}