// Fill out your copyright notice in the Description page of Project Settings.

#include "ChooseNextWaypoint.h"
#include "S05_TestingGrounds.h"


EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	auto BlackboardComp = OwnerComp.GetBlackboardComponent();

	// UE_LOG(LogTemp, Warning, TEXT("Succeeded"));
	return EBTNodeResult::Succeeded;
}
