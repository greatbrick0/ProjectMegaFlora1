#include "FileManipulation.h"

void UFileManipulation::DeleteFile(const FString& FilePath)
{
    if (!FilePath.IsEmpty())
    {
        if (FPaths::ValidatePath(FilePath) && FPaths::FileExists(FilePath))
        {
            IFileManager& FileManager = IFileManager::Get();
            FileManager.Delete(*FilePath);
        }
    }
}