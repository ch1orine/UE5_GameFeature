// Fill out your copyright notice in the Description page of Project Settings.


#include "FlibGameFeature.h"

#include "GameFeaturesSubsystem.h"

bool UFlibGameFeature::GetPluginURLForBuiltInPluginByName(UGameFeaturesSubsystem* Subsystem, const FString& PluginName,
                                                          FString& OutPluginURL)
{
	return Subsystem->GetPluginURLByName(PluginName, OutPluginURL);
}

void UFlibGameFeature::LoadGameFeature(UGameFeaturesSubsystem* Subsystem, const FString& InFeature)
{
	Subsystem->LoadGameFeaturePlugin(InFeature, nullptr);
}

void UFlibGameFeature::ActiveGameFeature(UGameFeaturesSubsystem* Subsystem, const FString& InFeature)
{
	Subsystem->LoadAndActivateGameFeaturePlugin(InFeature, nullptr);
}

void UFlibGameFeature::UnloadGameFeature(UGameFeaturesSubsystem* Subsystem, const FString& InFeature,
	bool bKeepRegistered)
{
	Subsystem->UnloadGameFeaturePlugin(InFeature,bKeepRegistered);
}

void UFlibGameFeature::DeactivateGameFeature(UGameFeaturesSubsystem* Subsystem, const FString& InFeature)
{
	Subsystem->DeactivateGameFeaturePlugin(InFeature);
}

FString UFlibGameFeature::GetState(const UGameFeaturesSubsystem* Subsystem, const FString& PluginURL)
{
	return UE::GameFeatures::ToString(Subsystem->GetPluginState(PluginURL));
}

