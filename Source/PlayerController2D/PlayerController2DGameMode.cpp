// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlayerController2DGameMode.h"
#include "PlayerController2DCharacter.h"
#include "UObject/ConstructorHelpers.h"

APlayerController2DGameMode::APlayerController2DGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
