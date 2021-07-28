// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CameraData.generated.h"

/**
 * A Structure that defines a camera data table entry
 */
USTRUCT(BlueprintType)
struct DATAIMPORTERSAMPLE_API FCameraData : public FTableRowBase
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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float QX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float QY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float QZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float QW;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Field_Of_View_h;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Zoom;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Focus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Iris;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Focus_Distance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float K1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float K2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float K3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float P1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float P2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Center_X;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Center_Y;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Aperture;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Overscan;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Panel_Size_1;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Panel_Size_2;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Aspect_Ratio;
};
