 // Fill out your copyright notice in the Description page of Project Settings.

 #pragma once

 #include "CoreMinimal.h"
 #include "Kismet/BlueprintFunctionLibrary.h"
 #include "FlibGameFeature.generated.h"

 /**
  * 
  */
 UCLASS()
 class GAMEFEATURE_API UFlibGameFeature : public UBlueprintFunctionLibrary
{
 	GENERATED_BODY()
 public:
 	 UFUNCTION(BlueprintCallable)
 	 static bool GetPluginURLForBuiltInPluginByName(class UGameFeaturesSubsystem* Subsystem,const FString& PluginName, FString& OutPluginURL);

 	 UFUNCTION(BlueprintCallable)
 	 static void LoadGameFeature(UGameFeaturesSubsystem* Subsystem,const FString& InFeature);
	  
 	 UFUNCTION(BlueprintCallable)
 	 static void ActiveGameFeature(UGameFeaturesSubsystem* Subsystem,const FString& InFeature);
 	
 	 UFUNCTION(BlueprintCallable)
 	 static void UnloadGameFeature(UGameFeaturesSubsystem* Subsystem,const FString& InFeature, bool bKeepRegistered = false);
 	 
 	 UFUNCTION(BlueprintCallable)
 	 static void DeactivateGameFeature(UGameFeaturesSubsystem* Subsystem,const FString& InFeature);

 	 UFUNCTION(BlueprintCallable,BlueprintPure)
     static FString GetState(const UGameFeaturesSubsystem* Subsystem, const FString& PluginURL);
 };

