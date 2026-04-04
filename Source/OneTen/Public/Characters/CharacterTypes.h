#pragma once


UENUM(BlueprintType)
enum class ECharacterState : uint8
{
	ECS_Unequipped UMETA(DisplayName = "Unequipped"),
	ECS_EquippedOneHandedWeapon UMETA(DisplayName = "Equipped One-Handed Weapon")
};

UENUM(BlueprintType)
enum class EActionState : uint8
{
	EAS_Unoccupied UMETA(DisplayName = "Unoccupied"),
	EAS_HitReaction UMETA(DisplayName = "HitReaction"),
	EAS_Attacking UMETA(DisplayName = "Attacking"),
	EAS_EquippingWeapon UMETA(DiplayName = "Equipping Weapon")
};


//Placeholder for death poses of Enemy
/*
ENUM(BlueprintType)
enum class EDeathPose : unit8
{
	EDP_Alive UMETA(DiplayName = "Alive"),
	EDP_Death1 UMETA(DiplayName = "Death1")

	EDP MAX UMETA(DisplayName = "DefaultMAX")
};
*/

UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	EES_Dead UMETA(DiplayName = "Dead"),
	EES_Patrolling UMETA(DisplayName = "Patrolling"),
	EES_Chasing UMETA(DiplayName = "Chasing"),
	EES_Attacking UMETA(DisplayName = "Attacking"),
	EES_Engaged UMETA(DisplayName = "Engaged"),
	EES_NoState UMETA(DisplayName = "NoState")
};