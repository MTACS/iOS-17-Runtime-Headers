
@interface PLBackgroundJobGuestAssetSyncWorker : PLBackgroundJobWorker {
    NSPersistentHistoryToken * _cancelledWorkItem;
}

@property (copy) NSPersistentHistoryToken *cancelledWorkItem;

+ (bool)_isTokenInvalidError:(id)arg1;
+ (bool)supportsWellKnownPhotoLibraryIdentifier:(long long)arg1;
+ (bool)usesMultipleLibrariesConcurrently;

- (void).cxx_destruct;
- (id)_anyPersistentHistoryTokenWithLibrary:(id)arg1;
- (bool)_batchResetGuestSavedAssetTypeInManagedObjectContext:(id)arg1 error:(id*)arg2;
- (bool)_batchResetSyndicationProcessingInManagedObjectContext:(id)arg1 error:(id*)arg2;
- (bool)_checkSyndicationPreferencesEnabledAndCleanupGuestAssetsIfNeededWithPhotoLibrary:(id)arg1;
- (void)_deleteAllGuestAssetsInPhotoLibrary:(id)arg1 reason:(id)arg2;
- (void)_deleteAssetWithUuid:(id)arg1 syndicationIdentifier:(id)arg2 fromLibrary:(id)arg3;
- (id)_firstPersistenHistoryTokenInLibrary:(id)arg1;
- (id)_lastGuestAssetSyncTargetLibraryURLFromSourceLibrary:(id)arg1 targetLibrary:(id)arg2;
- (id)_lastGuestAssetSyncTokenFromLibrary:(id)arg1;
- (void)_markAsWasGuestAssetOnAssetWithSyndicationIdentifier:(id)arg1 inLibrary:(id)arg2;
- (void)_processNextAssetInChangedObjectIDs:(id)arg1 fromSourceLibrary:(id)arg2 toDestLibrary:(id)arg3 group:(id)arg4 workItem:(id)arg5 deletedUuids:(id)arg6 errorHandler:(id /* block */)arg7;
- (void)_resetCancelledWorkItem;
- (bool)_resetSyndicationProcessingInSourceLibrary:(id)arg1 error:(id*)arg2;
- (void)_saveGuestAssetSyncToken:(id)arg1 toLibrary:(id)arg2;
- (bool)_shouldCancelCurrentWorkItem:(id)arg1;
- (id)_sourcePhotoLibraryWithName:(const char *)arg1;
- (void)_syncAsset:(id)arg1 toLibrary:(id)arg2 completion:(id /* block */)arg3;
- (bool)_systemPhotoLibraryChangedSinceLastRunWithSourceLibrary:(id)arg1 targetLibrary:(id)arg2;
- (id)_transactionIteratorSinceLastToken:(id)arg1 sourceLibrary:(id)arg2 error:(id*)arg3;
- (id)_transactionIteratorSinceTokenIfValid:(id)arg1 sourceLibrary:(id)arg2 error:(id*)arg3;
- (void)_updateLastGuestAssetSyncTargetLibraryURLInSourceLibrary:(id)arg1 targetLibrary:(id)arg2;
- (id)cancelledWorkItem;
- (bool)isInterruptible;
- (void)performWorkOnItem:(id)arg1 inLibrary:(id)arg2 completion:(id /* block */)arg3;
- (void)setCancelledWorkItem:(id)arg1;
- (void)stopWorkingOnItem:(id)arg1;
- (id)workItemsNeedingProcessingInLibrary:(id)arg1;

@end
