
#include "CharacterBase_C.h"
#include "GameFramework/CharacterMovementComponent.h"

ACharacterBase_C::ACharacterBase_C()
{
	PrimaryActorTick.bCanEverTick = true;
	MaxHP = 100.0f;
	HP = MaxHP;
	IsDeath = false;

	RunSpeed = 0.0f;
	isJump = false;
}

void ACharacterBase_C::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACharacterBase_C::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	JudgmentDeath();	//��鲢����Ѫ��
	UpdateAnimaBaseValue();	//���¶�������
}

void ACharacterBase_C::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}
void ACharacterBase_C::JudgmentDeath()
{
	if (HP <= 0.0)
	{
		HP = 0.0;

		IsDeath = true;
	}
	if (HP > MaxHP)
	{
		HP = MaxHP;
	}
}

void ACharacterBase_C::UpdateAnimaBaseValue()
{
	RunSpeed = GetVelocity().Size();
	GetMovementComponent();

	isJump = GetMovementComponent()->IsFalling();
}