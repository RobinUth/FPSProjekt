// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/GameModeBase.h"
#include "CoreMinimal.h"
#include "FPSProjektGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJEKT_API AFPSProjektGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

		virtual void StartPlay() override;
	
	
};
