// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/TwitchSDK/Private/ApiWaitForChannelCheerEvent.h"
#include "../../Source/TwitchSDK/Public/TwitchSDKStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApiWaitForChannelCheerEvent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiWaitForChannelCheerEvent();
	TWITCHSDK_API UClass* Z_Construct_UClass_UApiWaitForChannelCheerEvent_NoRegister();
	TWITCHSDK_API UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent();
	TWITCHSDK_API UScriptStruct* Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc();
	UPackage* Z_Construct_UPackage__Script_TwitchSDK();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature_Statics
	{
		struct _Script_TwitchSDK_eventAsyncDoneApiWaitForChannelCheerEvent_Parms
		{
			FTwitchSDKChannelCheerEvent Result;
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiWaitForChannelCheerEvent_Parms, Result), Z_Construct_UScriptStruct_FTwitchSDKChannelCheerEvent, METADATA_PARAMS(nullptr, 0) }; // 2534425410
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_TwitchSDK_eventAsyncDoneApiWaitForChannelCheerEvent_Parms, Error), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature_Statics::NewProp_Error,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/ApiWaitForChannelCheerEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TwitchSDK, nullptr, "AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature_Statics::_Script_TwitchSDK_eventAsyncDoneApiWaitForChannelCheerEvent_Parms), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FAsyncDoneApiWaitForChannelCheerEvent_DelegateWrapper(const FMulticastScriptDelegate& AsyncDoneApiWaitForChannelCheerEvent, FTwitchSDKChannelCheerEvent Result, const FString& Error)
{
	struct _Script_TwitchSDK_eventAsyncDoneApiWaitForChannelCheerEvent_Parms
	{
		FTwitchSDKChannelCheerEvent Result;
		FString Error;
	};
	_Script_TwitchSDK_eventAsyncDoneApiWaitForChannelCheerEvent_Parms Parms;
	Parms.Result=Result;
	Parms.Error=Error;
	AsyncDoneApiWaitForChannelCheerEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UApiWaitForChannelCheerEvent::execWaitForChannelCheerEvent)
	{
		P_GET_STRUCT(FTwitchSDKEventStreamDesc,Z_Param_desc);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UApiWaitForChannelCheerEvent**)Z_Param__Result=UApiWaitForChannelCheerEvent::WaitForChannelCheerEvent(Z_Param_desc);
		P_NATIVE_END;
	}
	void UApiWaitForChannelCheerEvent::StaticRegisterNativesUApiWaitForChannelCheerEvent()
	{
		UClass* Class = UApiWaitForChannelCheerEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "WaitForChannelCheerEvent", &UApiWaitForChannelCheerEvent::execWaitForChannelCheerEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UApiWaitForChannelCheerEvent_WaitForChannelCheerEvent_Statics
	{
		struct ApiWaitForChannelCheerEvent_eventWaitForChannelCheerEvent_Parms
		{
			FTwitchSDKEventStreamDesc desc;
			UApiWaitForChannelCheerEvent* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_desc;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UApiWaitForChannelCheerEvent_WaitForChannelCheerEvent_Statics::NewProp_desc = { "desc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiWaitForChannelCheerEvent_eventWaitForChannelCheerEvent_Parms, desc), Z_Construct_UScriptStruct_FTwitchSDKEventStreamDesc, METADATA_PARAMS(nullptr, 0) }; // 607524476
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UApiWaitForChannelCheerEvent_WaitForChannelCheerEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ApiWaitForChannelCheerEvent_eventWaitForChannelCheerEvent_Parms, ReturnValue), Z_Construct_UClass_UApiWaitForChannelCheerEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UApiWaitForChannelCheerEvent_WaitForChannelCheerEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiWaitForChannelCheerEvent_WaitForChannelCheerEvent_Statics::NewProp_desc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UApiWaitForChannelCheerEvent_WaitForChannelCheerEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UApiWaitForChannelCheerEvent_WaitForChannelCheerEvent_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Twitch" },
		{ "Comment", "/**\n     * A user cheers on the specified channel.\n     *\n     * You may only call this with a subscription for the correct event type.\n     *\n     * @param desc An object describing the subscription.\n     */" },
		{ "ModuleRelativePath", "Private/ApiWaitForChannelCheerEvent.h" },
		{ "ToolTip", "A user cheers on the specified channel.\n\nYou may only call this with a subscription for the correct event type.\n\n@param desc An object describing the subscription." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UApiWaitForChannelCheerEvent_WaitForChannelCheerEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UApiWaitForChannelCheerEvent, nullptr, "WaitForChannelCheerEvent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UApiWaitForChannelCheerEvent_WaitForChannelCheerEvent_Statics::ApiWaitForChannelCheerEvent_eventWaitForChannelCheerEvent_Parms), Z_Construct_UFunction_UApiWaitForChannelCheerEvent_WaitForChannelCheerEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiWaitForChannelCheerEvent_WaitForChannelCheerEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UApiWaitForChannelCheerEvent_WaitForChannelCheerEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UApiWaitForChannelCheerEvent_WaitForChannelCheerEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UApiWaitForChannelCheerEvent_WaitForChannelCheerEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UApiWaitForChannelCheerEvent_WaitForChannelCheerEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UApiWaitForChannelCheerEvent);
	UClass* Z_Construct_UClass_UApiWaitForChannelCheerEvent_NoRegister()
	{
		return UApiWaitForChannelCheerEvent::StaticClass();
	}
	struct Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics
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
	UObject* (*const Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TwitchSDK,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UApiWaitForChannelCheerEvent_WaitForChannelCheerEvent, "WaitForChannelCheerEvent" }, // 3323755018
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::Class_MetaDataParams[] = {
		{ "HideThen", "TRUE" },
		{ "IncludePath", "ApiWaitForChannelCheerEvent.h" },
		{ "ModuleRelativePath", "Private/ApiWaitForChannelCheerEvent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::NewProp_Done_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiWaitForChannelCheerEvent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::NewProp_Done = { "Done", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiWaitForChannelCheerEvent, Done), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::NewProp_Done_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::NewProp_Done_MetaData)) }; // 2841748612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::NewProp_Error_MetaData[] = {
		{ "ModuleRelativePath", "Private/ApiWaitForChannelCheerEvent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UApiWaitForChannelCheerEvent, Error), Z_Construct_UDelegateFunction_TwitchSDK_AsyncDoneApiWaitForChannelCheerEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::NewProp_Error_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::NewProp_Error_MetaData)) }; // 2841748612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::NewProp_Done,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::NewProp_Error,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UApiWaitForChannelCheerEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::ClassParams = {
		&UApiWaitForChannelCheerEvent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UApiWaitForChannelCheerEvent()
	{
		if (!Z_Registration_Info_UClass_UApiWaitForChannelCheerEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UApiWaitForChannelCheerEvent.OuterSingleton, Z_Construct_UClass_UApiWaitForChannelCheerEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UApiWaitForChannelCheerEvent.OuterSingleton;
	}
	template<> TWITCHSDK_API UClass* StaticClass<UApiWaitForChannelCheerEvent>()
	{
		return UApiWaitForChannelCheerEvent::StaticClass();
	}
	UApiWaitForChannelCheerEvent::UApiWaitForChannelCheerEvent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UApiWaitForChannelCheerEvent);
	UApiWaitForChannelCheerEvent::~UApiWaitForChannelCheerEvent() {}
	struct Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelCheerEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelCheerEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UApiWaitForChannelCheerEvent, UApiWaitForChannelCheerEvent::StaticClass, TEXT("UApiWaitForChannelCheerEvent"), &Z_Registration_Info_UClass_UApiWaitForChannelCheerEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UApiWaitForChannelCheerEvent), 3222954892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelCheerEvent_h_3471260819(TEXT("/Script/TwitchSDK"),
		Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelCheerEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_twitch_r66_unreal_build_output_HostProject_Plugins_TwitchSDK_Source_TwitchSDK_Private_ApiWaitForChannelCheerEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
