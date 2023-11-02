
@interface PLBackgroundJobSharedAssetContainerUpdateWorker : PLBackgroundJobWorker

+ (bool)_isTokenInvalidError:(id)arg1;
+ (id)_lastProcessingTokenFromLibrary:(id)arg1;
+ (id)_memoriesContainingAssetIds:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (void)_setLastProcessingToken:(id)arg1 library:(id)arg2;
+ (id)_suggestionsContainingAssetIds:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)_transactionIteratorSinceTokenIfValid:(id)arg1 library:(id)arg2 error:(id*)arg3;
+ (bool)_updateSharingCompositionForMemoriesContainingAssetIDs:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (bool)_updateSharingCompositionForSuggestionsContainingAssetIDs:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (bool)performWorkOnAllItemsInContext:(id)arg1 withError:(id*)arg2;
+ (bool)supportsWellKnownPhotoLibraryIdentifier:(long long)arg1;

- (void)performWorkOnItem:(id)arg1 inLibrary:(id)arg2 completion:(id /* block */)arg3;
- (id)workItemsNeedingProcessingInLibrary:(id)arg1;

@end
