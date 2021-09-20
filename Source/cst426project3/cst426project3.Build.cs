// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class cst426project3 : ModuleRules
{
	public cst426project3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
