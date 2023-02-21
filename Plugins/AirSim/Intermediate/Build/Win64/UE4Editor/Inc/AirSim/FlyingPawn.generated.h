// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIRSIM_FlyingPawn_generated_h
#error "FlyingPawn.generated.h already included, missing '#pragma once' in FlyingPawn.h"
#endif
#define AIRSIM_FlyingPawn_generated_h

#define UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_SPARSE_DATA
#define UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_RPC_WRAPPERS
#define UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlyingPawn(); \
	friend struct Z_Construct_UClass_AFlyingPawn_Statics; \
public: \
	DECLARE_CLASS(AFlyingPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(AFlyingPawn)


#define UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFlyingPawn(); \
	friend struct Z_Construct_UClass_AFlyingPawn_Statics; \
public: \
	DECLARE_CLASS(AFlyingPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(AFlyingPawn)


#define UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlyingPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlyingPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlyingPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlyingPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlyingPawn(AFlyingPawn&&); \
	NO_API AFlyingPawn(const AFlyingPawn&); \
public:


#define UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlyingPawn(AFlyingPawn&&); \
	NO_API AFlyingPawn(const AFlyingPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlyingPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlyingPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlyingPawn)


#define UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__camera_front_left_() { return STRUCT_OFFSET(AFlyingPawn, camera_front_left_); } \
	FORCEINLINE static uint32 __PPO__camera_front_right_() { return STRUCT_OFFSET(AFlyingPawn, camera_front_right_); } \
	FORCEINLINE static uint32 __PPO__camera_front_center_() { return STRUCT_OFFSET(AFlyingPawn, camera_front_center_); } \
	FORCEINLINE static uint32 __PPO__camera_back_center_() { return STRUCT_OFFSET(AFlyingPawn, camera_back_center_); } \
	FORCEINLINE static uint32 __PPO__camera_bottom_center_() { return STRUCT_OFFSET(AFlyingPawn, camera_bottom_center_); } \
	FORCEINLINE static uint32 __PPO__rotating_movements_() { return STRUCT_OFFSET(AFlyingPawn, rotating_movements_); }


#define UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_13_PROLOG
#define UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_SPARSE_DATA \
	UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_RPC_WRAPPERS \
	UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_INCLASS \
	UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_PRIVATE_PROPERTY_OFFSET \
	UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_SPARSE_DATA \
	UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_INCLASS_NO_PURE_DECLS \
	UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIRSIM_API UClass* StaticClass<class AFlyingPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UAVSim_Plugins_AirSim_Source_Vehicles_Multirotor_FlyingPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
