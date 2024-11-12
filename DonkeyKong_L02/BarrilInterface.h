// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BarrilInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UBarrilInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class DONKEYKONG_L02_API IBarrilInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual AActor* CrearBarril(UWorld* World) = 0;
	virtual void Rodar() = 0;


};