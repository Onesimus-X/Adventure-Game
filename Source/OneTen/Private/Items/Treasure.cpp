// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Treasure.h"
#include "Interfaces/PickupInterface.h"

void ATreasure::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	IPickupInterface* PickupInterface = Cast<IPickupInterface>(OtherActor);
	if (PickupInterface)
	{
		PickupInterface->AddGold(this);
		SpawnPickupSound();
		SpawnPickupSystem(); // Can add a different effect in future
		Destroy();
	}
}
