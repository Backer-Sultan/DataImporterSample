// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CameraDataSimple.generated.h"

USTRUCT(BlueprintType)
struct FCameraDataSimple : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Time;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float X;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Y;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Z;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RZ;
};
