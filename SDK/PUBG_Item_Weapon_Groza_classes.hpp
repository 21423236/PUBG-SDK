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

// BlueprintGeneratedClass Item_Weapon_Groza.Item_Weapon_Groza_C
// 0x0000 (0x0288 - 0x0288)
class UItem_Weapon_Groza_C : public UItem_Weapon_SKS_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Weapon_Groza.Item_Weapon_Groza_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
