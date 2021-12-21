// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGeometryActor.h"

// Sets default values
ABaseGeometryActor::ABaseGeometryActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseGeometryActor::BeginPlay()
{
	Super::BeginPlay();

	//UE_LOG(LogTemp, Display, TEXT("Hello Unreal!"));
	//UE_LOG(LogTemp, Warning, TEXT("Hello Unreal!"));
	//UE_LOG(LogTemp, Error, TEXT("Hello Unreal!"));

	PrintTypes();
}

// Called every frame
void ABaseGeometryActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseGeometryActor::PrintTypes()
{
	int WeaponsNum = 4;
	int KillsNum = 7;
	float Health = 34.1679834;
	bool IsDead = false;
	bool HasWeapon = true;

	UE_LOG(LogTemp, Display, TEXT("WEapons num: %d, kill num %i"), WeaponsNum, KillsNum);
	UE_LOG(LogTemp, Display, TEXT("Health %.f"), Health);
	UE_LOG(LogTemp, Display, TEXT("Health %.2f"), Health);
	UE_LOG(LogTemp, Display, TEXT("Is dead %d"), IsDead);
	UE_LOG(LogTemp, Display, TEXT("Has Weapon %d"), static_cast<int>(HasWeapon));
}

