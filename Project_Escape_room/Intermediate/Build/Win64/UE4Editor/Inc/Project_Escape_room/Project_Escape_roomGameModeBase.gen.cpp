// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Project_Escape_roomGameModeBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_Escape_roomGameModeBase() {}
// Cross Module References
	PROJECT_ESCAPE_ROOM_API UClass* Z_Construct_UClass_AProject_Escape_roomGameModeBase_NoRegister();
	PROJECT_ESCAPE_ROOM_API UClass* Z_Construct_UClass_AProject_Escape_roomGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Project_Escape_room();
// End Cross Module References
	void AProject_Escape_roomGameModeBase::StaticRegisterNativesAProject_Escape_roomGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AProject_Escape_roomGameModeBase_NoRegister()
	{
		return AProject_Escape_roomGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AProject_Escape_roomGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Project_Escape_room();
			OuterClass = AProject_Escape_roomGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AProject_Escape_roomGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Project_Escape_roomGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Project_Escape_roomGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProject_Escape_roomGameModeBase, 3490218199);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProject_Escape_roomGameModeBase(Z_Construct_UClass_AProject_Escape_roomGameModeBase, &AProject_Escape_roomGameModeBase::StaticClass, TEXT("/Script/Project_Escape_room"), TEXT("AProject_Escape_roomGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_Escape_roomGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
