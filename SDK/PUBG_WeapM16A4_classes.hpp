#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (2.5.26) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapM16A4.WeapM16A4_C
// 0x0008 (0x0C00 - 0x0BF8)
class AWeapM16A4_C : public ADefaultRifleSetting_C
{
public:
	class UArrowComponent*                             ZeroArrow;                                                // 0x0BF8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapM16A4.WeapM16A4_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
