// Fill out your copyright notice in the Description page of Project Settings.
// 
// 
// This is test library To show skills c++


#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TestFunctionLibrary.generated.h"

/**
 * 
 */

UCLASS()
class TESTPROJECT_API UTestFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


	UFUNCTION(BlueprintCallable, category = "TestFunctions")
	static FString StringConverter(FString Text);
};
