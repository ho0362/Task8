
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemInterface.generated.h"



UINTERFACE(MinimalAPI)
class UItemInterface : public UInterface
{
	GENERATED_BODY()
};


class MYPJ3_API IItemInterface
{
	GENERATED_BODY()

public:
	//�÷��̾ �� �������� ������ ������ �� ȣ��
	UFUNCTION()
	virtual void OnItemOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult) = 0;

	//�÷��̾ �� �������� ������ ����� �� ȣ��
	UFUNCTION()
	virtual void OnItemEndOverlap(
		UPrimitiveComponent* OverlappedComp,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OherBodyIndex) = 0;

	//�������� ���Ǿ��� �� ȣ��
	virtual void ActivateItem(AActor* Activator) = 0;

	//�� �������� ����(Ÿ��)�� ��ȯ (ex: Coin, Mine ��)
	virtual FName GetItemType() const = 0;

};
