// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PatrollingGuard.generated.h"

/**
 * 
 */
UCLASS()
class PROVINGGROUNDS_API APatrollingGuard : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly, Category = "Patrol Points")
	TArray<AActor*> PatrolPoints;
	
	
};