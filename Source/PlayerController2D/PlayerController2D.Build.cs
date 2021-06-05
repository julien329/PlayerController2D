// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PlayerController2D : ModuleRules
{
	public PlayerController2D(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
