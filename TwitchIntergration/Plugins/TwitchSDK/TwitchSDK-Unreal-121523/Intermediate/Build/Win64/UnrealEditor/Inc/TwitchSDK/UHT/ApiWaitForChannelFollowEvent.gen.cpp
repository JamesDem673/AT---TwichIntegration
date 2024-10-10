// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiWaitForChannelFollowEvent.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiWaitForChannelFollowEvent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiWaitForChannelFollowEvent();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiWaitForChannelFollowEvent_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiWaitForChannelFollowEvent_Parms
		{
			FTwitchSDKChannelFollowEvent Result;
			FString Error;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiWaitForChannelFollowEvent_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKChannelFollowEvent, METADATA_PARAMS(nullptr, 0) }; // 2626537624
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiWaitForChannelFollowEvent_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiWaitForChannelFollowEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiWaitForChannelFollowEvent_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiWaitForChannelFollowEvent_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiWaitForChannelFollowEvent, FTwitchSDKChannelFollowEvent Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiWaitForChannelFollowEvent_Parms
	{
		FTwitchSDKChannelFollowEvent Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiWaitForChannelFollowEvent_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiWaitForChannelFollowEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiWaitForChannelFollowEvent::execWaitForChannelFollowEvent)
	{
		P_GET_STRUCT(FTwitchSDKEventStreamDesc,Z_Param_desc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiWaitForChannelFollowEvent**)Z_Param__Result=UApiWaitForChannelFollowEvent::WaitForChannelFollowEvent(Z_Param_desc);
		P_NATIVE_END;
	}
	void UApiWaitForChannelFollowEvent::StaticRegisterNativesUApiWaitForChannelFollowEvent()
	{
		UClass* Class = UApiWaitForChannelFollowEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitForChannelFollowEvent", &UApiWaitForChannelFollowEvent::execWaitForChannelFollowEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiWaitForChannelFollowEvent_WaitForChannelFollowEvent_Statics
	{
		struct ApiWaitForChannelFollowEvent_eventWaitForChannelFollowEvent_Parms
		{
			FTwitchSDKEventStreamDesc desc;
			UApiWaitForChannelFollowEvent* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_desc;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UApiWaitForChannelFollowEvent_WaitForChannelFollowEvent_Statics::NewProp_desc = { "desc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiWaitForChannelFollowEvent_eventWaitForChannelFollowEvent_Parms, desc), Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc, METADATA_PARAMS(nullptr, 0) }; // 607524476
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiWaitForChannelFollowEvent_WaitForChannelFollowEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiWaitForChannelFollowEvent_eventWaitForChannelFollowEvent_Parms, ReturnValue), Z_Construct_UClass_UApiWaitForChannelFollowEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiWaitForChannelFollowEvent_WaitForChannelFollowEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiWaitForChannelFollowEvent_WaitForChannelFollowEvent_Statics::NewProp_desc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiWaitForChannelFollowEvent_WaitForChannelFollowEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiWaitForChannelFollowEvent_WaitForChannelFollowEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * A specified channel receives a follow.\n     *\n     * You may only call this with a subscription for the correct event type.\n     *\n     * @param desc An object describing the subscription.\n     */" },
		{ "ModuleRelativePath", "Private/ApiWaitForChannelFollowEvent.h" },
		{ "ToolTip", "A specified channel receives a follow.\n\nYou may only call this with a subscription for the correct event type.\n\n@param desc An object describing the subscription." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiWaitForChannelFollowEvent_WaitForChannelFollowEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiWaitForChannelFollowEvent, nullptr, "WaitForChannelFollowEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiWaitForChannelFollowEvent_WaitForChannelFollowEvent_Statics::ApiWaitForChannelFollowEvent_eventWaitForChannelFollowEvent_Parms), Z_Construct_UFunction_UApiWaitForChannelFollowEvent_WaitForChannelFollowEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiWaitForChannelFollowEvent_WaitForChannelFollowEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiWaitForChannelFollowEvent_WaitForChannelFollowEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiWaitForChannelFollowEvent_WaitForChannelFollowEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiWaitForChannelFollowEvent_WaitForChannelFollowEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiWaitForChannelFollowEvent_WaitForChannelFollowEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiWaitForChannelFollowEvent);
	UClass* Z_Construct_UClass_UApiWaitForChannelFollowEvent_NoRegister()
	{
		return UApiWaitForChannelFollowEvent::StaticClass();
	}
	struct Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Done_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Done;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Error;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiWaitForChannelFollowEvent_WaitForChannelFollowEvent, "WaitForChannelFollowEvent" }, // 787336412
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiWaitForChannelFollowEvent.h" },
		{ "ModuleRelativePath", "Private/ApiWaitForChannelFollowEvent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiWaitForChannelFollowEvent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiWaitForChannelFollowEvent, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::NewProp_Done_MetaData)) }; // 376147504
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiWaitForChannelFollowEvent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiWaitForChannelFollowEvent, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelFollowEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::NewProp_Error_MetaData)) }; // 376147504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiWaitForChannelFollowEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::ClassParams = {
		&UApiWaitForChannelFollowEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiWaitForChannelFollowEvent()
	{
		if (!Z_Registration_Info_UClass_UApiWaitForChannelFollowEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiWaitForChannelFollowEvent.OuterSingleton, Z_Construct_UClass_UApiWaitForChannelFollowEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiWaitForChannelFollowEvent.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiWaitForChannelFollowEvent>()
	{
		return UApiWaitForChannelFollowEvent::StaticClass();
	}
	UApiWaitForChannelFollowEvent::UApiWaitForChannelFollowEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiWaitForChannelFollowEvent);
	UApiWaitForChannelFollowEvent::~UApiWaitForChannelFollowEvent() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelFollowEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelFollowEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiWaitForChannelFollowEvent, UApiWaitForChannelFollowEvent::StaticClass, TEXT("UApiWaitForChannelFollowEvent"), &Z_Registration_Info_UClass_UApiWaitForChannelFollowEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiWaitForChannelFollowEvent), 3245351563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelFollowEvent_h_2054915266(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelFollowEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelFollowEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
