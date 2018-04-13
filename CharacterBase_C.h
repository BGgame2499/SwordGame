// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterBase_C.generated.h"

UCLASS()
class SWORDGAME_API ACharacterBase_C : public ACharacter
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterState")
		float HP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterState")
		float MaxHP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CharacterState")
		bool IsDeath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimaBaseValue")
		float RunSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AnimaBaseValue")
		bool isJump;
public:
	ACharacterBase_C();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void JudgmentDeath();

	void UpdateAnimaBaseValue();
};
