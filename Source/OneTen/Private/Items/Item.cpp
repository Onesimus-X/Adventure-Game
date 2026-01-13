#include "Items/Item.h"
#include "OneTen/DebugMacros.h"


AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

}


void AItem::BeginPlay()
{
	Super::BeginPlay();
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RunningTime += DeltaTime;

	float DeltaZ = Amplitude * FMath::Sin(RunningTime * TimeConstant);

	AddActorWorldOffset(FVector(0.f, 0.f, DeltaZ));


	// MovementRate * DeltaTime (cm/s) * (s/frame) = (cm/frame)
	DRAW_SPHERE_SingleFrame(GetActorLocation());
	DRAW_VECTOR_SingleFrame(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 100.f);
}
