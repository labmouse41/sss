// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
AMyGameModeBase::AMyGameModeBase()
{
	UE_LOG(LogTemp, Warning, TEXT("asfafds"));
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("ffffr"));
	}
}
