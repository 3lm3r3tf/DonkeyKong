// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Fuego.h"
#include "Viscoso.h"
#include "Hielo.h"
#include"BarrilFactory.h"
#include "BarrilFacade.generated.h"

UCLASS()
class DONKEYKONG_L02_API ABarrilFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABarrilFacade();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	UFUNCTION(Category = "Barril")
	AActor* CrearFuego();
	UFUNCTION(Category = "Barril") 
	AActor* CrearHielo();
	UFUNCTION(Category = "Barril") 
	AActor* CrearViscoso();


};