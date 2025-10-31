// Fill out your copyright notice in the Description page of Project Settings.

#include "AIWorldSubsystem.h"

void UAIWorldSubsystem::SetListOfAIPaths(TArray<AActor*> InList)
{

	for (AActor* Actor : InList)
	{
		ListOfAIPaths.Add(Actor);
	}
}

TArray<AActor*> UAIWorldSubsystem::GetAIPaths()
{
	return ListOfAIPaths;
}
