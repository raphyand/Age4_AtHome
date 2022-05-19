// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Age4_AtHome : ModuleRules
{
	public Age4_AtHome(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule" });
    }
}
