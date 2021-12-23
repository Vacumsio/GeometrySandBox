// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGeometryActor.h"
#include "Engine/Engine.h"

DEFINE_LOG_CATEGORY_STATIC(LogBaseGeometry, All, All)

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

	
	//PringStringTypes();

	// PrintTypes();
}

// Called every frame
void ABaseGeometryActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
  


void ABaseGeometryActor::PrintTypes()
{
	UE_LOG(LogTemp, Display, TEXT("WEapons num: %d, kill num %i"), WeaponsNum, KillsNum);
	UE_LOG(LogTemp, Display, TEXT("Health %.f"), Health);
	UE_LOG(LogTemp, Display, TEXT("Health %.2f"), Health);
	UE_LOG(LogTemp, Display, TEXT("Is dead %d"), IsDead);
	UE_LOG(LogTemp, Display, TEXT("Has Weapon %d"), static_cast<int>(HasWeapon));
}

/// <summary>
/// FString
/// </summary>
void ABaseGeometryActor::PringStringTypes()
{
	FString Name = "Conan Barbarian";
	UE_LOG(LogBaseGeometry, Display, TEXT("Name: %s"), *Name);

	FString WeaponNumStr = "Weapons num = " + FString::FromInt(WeaponsNum);
	FString HealthStr = "Health = " + FString::SanitizeFloat(Health);
	FString IsDeadStr = "IsDead = " + FString(IsDead ? "true" : "false");

	FString Stat = FString::Printf(TEXT(" \n== All stat \n %s \n %s \n %s"), *WeaponNumStr, *HealthStr, *IsDeadStr);
	UE_LOG(LogBaseGeometry, Warning, TEXT("%s"), *Stat);

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Yellow, Name);
	GEngine->AddOnScreenDebugMessage(-1, 8.0f, FColor::Cyan, Stat, true, FVector2D(1.5f, 1.5f));
}

