// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyPortalFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class ZIGGURAT_API UMyPortalFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "MyPortalFunctionLibrary")
	static void ResizeRenderTarget(UTextureRenderTarget2D* render_target, float size_x, float size_y);
	
};
