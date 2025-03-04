#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FileManipulation.generated.h"

/**
 *
 */
UCLASS()
class PROJECTMEGAFLORA_API UFileManipulation : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "FileManagement")
	static void DeleteFile(const FString& FilePath);
};