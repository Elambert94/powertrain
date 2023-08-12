// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pwt_Struct.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct POWERTRAIN_API FPwt_Control
{
public:

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FName Parent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FTransform Transform;
	
};

USTRUCT(BlueprintType)
struct POWERTRAIN_API FPwt_Hierarchy
{
public:

	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FPwt_Control> Controls;
	
};
