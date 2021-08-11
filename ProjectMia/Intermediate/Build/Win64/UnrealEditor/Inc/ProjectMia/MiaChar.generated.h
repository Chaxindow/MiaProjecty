// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTMIA_MiaChar_generated_h
#error "MiaChar.generated.h already included, missing '#pragma once' in MiaChar.h"
#endif
#define PROJECTMIA_MiaChar_generated_h

#define ProjectMia_Source_ProjectMia_MiaChar_h_12_SPARSE_DATA
#define ProjectMia_Source_ProjectMia_MiaChar_h_12_RPC_WRAPPERS
#define ProjectMia_Source_ProjectMia_MiaChar_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectMia_Source_ProjectMia_MiaChar_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMiaChar(); \
	friend struct Z_Construct_UClass_AMiaChar_Statics; \
public: \
	DECLARE_CLASS(AMiaChar, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMia"), NO_API) \
	DECLARE_SERIALIZER(AMiaChar)


#define ProjectMia_Source_ProjectMia_MiaChar_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMiaChar(); \
	friend struct Z_Construct_UClass_AMiaChar_Statics; \
public: \
	DECLARE_CLASS(AMiaChar, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectMia"), NO_API) \
	DECLARE_SERIALIZER(AMiaChar)


#define ProjectMia_Source_ProjectMia_MiaChar_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMiaChar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMiaChar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMiaChar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMiaChar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMiaChar(AMiaChar&&); \
	NO_API AMiaChar(const AMiaChar&); \
public:


#define ProjectMia_Source_ProjectMia_MiaChar_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMiaChar(AMiaChar&&); \
	NO_API AMiaChar(const AMiaChar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMiaChar); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMiaChar); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMiaChar)


#define ProjectMia_Source_ProjectMia_MiaChar_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(AMiaChar, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(AMiaChar, CameraComp); }


#define ProjectMia_Source_ProjectMia_MiaChar_h_9_PROLOG
#define ProjectMia_Source_ProjectMia_MiaChar_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMia_Source_ProjectMia_MiaChar_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectMia_Source_ProjectMia_MiaChar_h_12_SPARSE_DATA \
	ProjectMia_Source_ProjectMia_MiaChar_h_12_RPC_WRAPPERS \
	ProjectMia_Source_ProjectMia_MiaChar_h_12_INCLASS \
	ProjectMia_Source_ProjectMia_MiaChar_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectMia_Source_ProjectMia_MiaChar_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectMia_Source_ProjectMia_MiaChar_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectMia_Source_ProjectMia_MiaChar_h_12_SPARSE_DATA \
	ProjectMia_Source_ProjectMia_MiaChar_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectMia_Source_ProjectMia_MiaChar_h_12_INCLASS_NO_PURE_DECLS \
	ProjectMia_Source_ProjectMia_MiaChar_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTMIA_API UClass* StaticClass<class AMiaChar>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectMia_Source_ProjectMia_MiaChar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
