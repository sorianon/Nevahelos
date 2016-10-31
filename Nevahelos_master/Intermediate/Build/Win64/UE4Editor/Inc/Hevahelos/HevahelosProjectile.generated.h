// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef HEVAHELOS_HevahelosProjectile_generated_h
#error "HevahelosProjectile.generated.h already included, missing '#pragma once' in HevahelosProjectile.h"
#endif
#define HEVAHELOS_HevahelosProjectile_generated_h

#define Hevahelos_Source_Hevahelos_HevahelosProjectile_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Hevahelos_Source_Hevahelos_HevahelosProjectile_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Hevahelos_Source_Hevahelos_HevahelosProjectile_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAHevahelosProjectile(); \
	friend HEVAHELOS_API class UClass* Z_Construct_UClass_AHevahelosProjectile(); \
	public: \
	DECLARE_CLASS(AHevahelosProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Hevahelos"), NO_API) \
	DECLARE_SERIALIZER(AHevahelosProjectile) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Hevahelos_Source_Hevahelos_HevahelosProjectile_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesAHevahelosProjectile(); \
	friend HEVAHELOS_API class UClass* Z_Construct_UClass_AHevahelosProjectile(); \
	public: \
	DECLARE_CLASS(AHevahelosProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Hevahelos"), NO_API) \
	DECLARE_SERIALIZER(AHevahelosProjectile) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Hevahelos_Source_Hevahelos_HevahelosProjectile_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHevahelosProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHevahelosProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHevahelosProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHevahelosProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHevahelosProjectile(AHevahelosProjectile&&); \
	NO_API AHevahelosProjectile(const AHevahelosProjectile&); \
public:


#define Hevahelos_Source_Hevahelos_HevahelosProjectile_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHevahelosProjectile(AHevahelosProjectile&&); \
	NO_API AHevahelosProjectile(const AHevahelosProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHevahelosProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHevahelosProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHevahelosProjectile)


#define Hevahelos_Source_Hevahelos_HevahelosProjectile_h_6_PROLOG
#define Hevahelos_Source_Hevahelos_HevahelosProjectile_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hevahelos_Source_Hevahelos_HevahelosProjectile_h_9_RPC_WRAPPERS \
	Hevahelos_Source_Hevahelos_HevahelosProjectile_h_9_INCLASS \
	Hevahelos_Source_Hevahelos_HevahelosProjectile_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hevahelos_Source_Hevahelos_HevahelosProjectile_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hevahelos_Source_Hevahelos_HevahelosProjectile_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Hevahelos_Source_Hevahelos_HevahelosProjectile_h_9_INCLASS_NO_PURE_DECLS \
	Hevahelos_Source_Hevahelos_HevahelosProjectile_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hevahelos_Source_Hevahelos_HevahelosProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
