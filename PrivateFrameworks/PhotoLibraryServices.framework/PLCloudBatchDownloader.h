
@interface PLCloudBatchDownloader : NSObject {
    PLLibraryServicesManager * _lsm;
    PLCloudPhotoLibraryManager * _manager;
}

+ (id)_adjustmentStateDictionaryForComparingIncomingFaceRecordForAsset:(id)arg1;

- (void).cxx_destruct;
- (void)_assetsAndCloudMastersFromAssetRecords:(id)arg1 assetsByScopedIdentifier:(id*)arg2 mastersByScopedIdentifier:(id*)arg3 inLibrary:(id)arg4;
- (id)_debugPrintAlbumOrderForAssets:(id)arg1;
- (void)_dropDeferredRebuildFacesInPhotoLibrary:(id)arg1;
- (id)_findMaster:(id)arg1 fromAdditionalRecordInBatch:(id)arg2 inLibrary:(id)arg3;
- (void)_handleAlbumRecords:(id)arg1 inLibrary:(id)arg2;
- (id)_handleAssetRecords:(id)arg1 inSyncContext:(id)arg2 withChangeBatch:(id)arg3 insertedAssetUUIDs:(id*)arg4;
- (void)_handleDeleteRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleExpungedRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleFaceCropRecords:(id)arg1 inLibrary:(id)arg2;
- (id)_handleMasterRecords:(id)arg1 inLibrary:(id)arg2;
- (id)_handleMemoryRecords:(id)arg1 inLibrary:(id)arg2;
- (id)_handlePersonRecords:(id)arg1 inLibrary:(id)arg2 includesTiboSchema:(bool*)arg3;
- (void)_handleRelationsForAlbumRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleRelationsForAssetRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_handleScopeChanges:(id)arg1 inLibrary:(id)arg2;
- (id)_handleSuggestionRecords:(id)arg1 inLibrary:(id)arg2;
- (void)_mergeExistingPersonsWithPerson:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)_mergeTargetFromPersons:(id)arg1;
- (void)_mergeUpdatedPersons:(id)arg1 inLibrary:(id)arg2;
- (void)_processNotificationUpdatesForMemories:(id)arg1;
- (void)_processNotificationUpdatesForSuggestions:(id)arg1;
- (void)_saveIfNeeded:(id)arg1;
- (bool)_shouldHandleNotificationChangeForMemory:(id)arg1 memoryRecord:(id)arg2 wasPersisted:(bool)arg3;
- (bool)_shouldIgnoreIncomingManualOrderChange:(id)arg1 localPerson:(id)arg2;
- (bool)_shouldIgnoreIncomingPersonTypeChange:(id)arg1 localPerson:(id)arg2;
- (void)_triggerBackgroundDownloadFailureForResources:(id)arg1;
- (id)deletedRecordsFromBatch:(id)arg1;
- (id)handleIncomingBatch:(id)arg1;
- (id)initWithLibraryServicesManager:(id)arg1 manager:(id)arg2;

@end
