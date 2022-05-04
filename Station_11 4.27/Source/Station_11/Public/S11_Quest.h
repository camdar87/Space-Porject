// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
UCLASS()
class STATION_11_API S11_Quest : public UObject
{

	GENERATED_BODY()

public:
	S11_Quest();
	~S11_Quest();

private:
	UPROPERTY(EditAnywhere)
		class US11_ObjectivesList* ObjectivesList;

};
