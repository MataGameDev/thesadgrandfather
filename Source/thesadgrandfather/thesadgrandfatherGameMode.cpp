// Copyright Epic Games, Inc. All Rights Reserved.

#include "thesadgrandfatherGameMode.h"
#include "thesadgrandfatherCharacter.h"
#include "UObject/ConstructorHelpers.h"

AthesadgrandfatherGameMode::AthesadgrandfatherGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
