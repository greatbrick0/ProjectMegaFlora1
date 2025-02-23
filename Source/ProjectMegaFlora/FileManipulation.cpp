// Fill out your copyright notice in the Description page of Project Settings.


#include "FileManipulation.h"

void UFileManipulation::DeleteFile(const FString& MyFile)
{
    if (!MyFile.IsEmpty())
    {
        if (FPaths::ValidatePath(MyFile) && FPaths::FileExists(MyFile))
        {
            IFileManager& FileManager = IFileManager::Get(); FileManager.Delete(*MyFile);
        }
    }
}