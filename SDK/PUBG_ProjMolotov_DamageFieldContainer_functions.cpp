// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.26) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjMolotov_DamageFieldContainer.ProjMolotov_DamageFieldContainer_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AProjMolotov_DamageFieldContainer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjMolotov_DamageFieldContainer.ProjMolotov_DamageFieldContainer_C.UserConstructionScript");

	AProjMolotov_DamageFieldContainer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
