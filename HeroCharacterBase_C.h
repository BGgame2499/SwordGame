// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterBase_C.h"
#include "HeroCharacterBase_C.generated.h"

/**
 * 
 */
UCLASS()
class SWORDGAME_API AHeroCharacterBase_C : public ACharacterBase_C
{
	GENERATED_BODY()
public:

	AHeroCharacterBase_C();
	/*
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraComp")
		class UCameraComponent * CameraComp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CameraComp")
		class USpringArmComponent * SpringArmComp;*/
};
