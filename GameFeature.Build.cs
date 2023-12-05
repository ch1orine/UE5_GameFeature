// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GameFeature : ModuleRules
{
	public GameFeature(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] { "GameFeatures", "EnhancedInput"});
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "GameFeatures"});
	}
}


