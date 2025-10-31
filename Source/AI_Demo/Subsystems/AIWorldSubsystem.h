// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AIWorldSubsystem.generated.h"


class AActor;


UCLASS()
class AI_DEMO_API UAIWorldSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()


#pragma region AI Pathing
private:
	// Stores loaded references of the BPs
	TArray <AActor*> ListOfAIPaths;

public:
	//Receives soft references, loads them, and inserts them into the list
	UFUNCTION(BlueprintCallable)
	void SetListOfAIPaths(TArray<AActor*> InList);

	UFUNCTION(BlueprintPure)
	TArray<AActor*> GetAIPaths();

#pragma endregion
};
