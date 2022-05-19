// Copyright Epic Games, Inc. All Rights Reserved.

#include "Age4_AtHomeGameMode.h"
#include "Age4_AtHomePlayerController.h"
#include "Age4_AtHomeCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAge4_AtHomeGameMode::AAge4_AtHomeGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AAge4_AtHomePlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}