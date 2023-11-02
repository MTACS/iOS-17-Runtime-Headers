
@interface PLCloudBatchUploader : NSObject {
    NSMutableSet * _cameraAsset;
    NSMutableSet * _downloadedDeleteRecords;
    bool  _initialUpload;
    PLLibraryServicesManager * _lsm;
    NSMutableSet * _momentSharesNeedingForceSync;
    NSMutableDictionary * _recordsToDelete;
    NSString * _recordsToDeletePlistPath;
    bool  _shouldGenerateDerivatives;
    NSMutableArray * _uploadBatchArray;
}

@property bool initialUpload;
@property bool shouldGenerateDerivatives;

- (void).cxx_destruct;
- (void)_addAsset:(id)arg1 toAssetChanges:(id)arg2 isInsert:(bool)arg3 seenAssetUuid:(id)arg4;
- (void)_addLocalResourcesToRecord:(id)arg1 inLibrary:(id)arg2;
- (void)_cleanUploadedResources:(id)arg1 inLibrary:(id)arg2;
- (void)_clearSuccessfullyPushedDeletedRecords:(id)arg1;
- (id)_fetchChangesFromLocalEvent:(id)arg1 shouldTriggerPrefetch:(bool*)arg2 inLibrary:(id)arg3;
- (id)_getLocalRecordFromCPLRecord:(id)arg1 inLibrary:(id)arg2;
- (void)_handleInvalidAsset:(id)arg1;
- (void)_handleSharingChanges:(id)arg1 forUploadEvent:(id)arg2 inManagedObjectContext:(id)arg3;
- (bool)_hasUnuploadedResourceForAsset:(id)arg1 resourceType:(unsigned long long)arg2 cloudMaster:(id)arg3;
- (void)_incrementUploadAttemptsAndPushStateForAssets:(id)arg1;
- (id)_personsToUploadIncludingReverseOrderedMergeTargetsForPersons:(id)arg1;
- (void)_processAlbumInserts:(id)arg1 albumChanges:(id)arg2 withBatchManager:(id)arg3 inLibrary:(id)arg4;
- (void)_processChangeToFullRecordCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3 inLibrary:(id)arg4;
- (void)_processGenerateDerivativesCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3 inLibrary:(id)arg4;
- (void)_processIncludeMasterCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3 inLibrary:(id)arg4;
- (void)_processInvalidExpungeableResourceTypesCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3 inLibrary:(id)arg4;
- (void)_processInvalidResourceCopySourceCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3 inLibrary:(id)arg4;
- (void)_processInvalidScopeCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3 inLibrary:(id)arg4;
- (void)_processPendingObjects:(id)arg1 withBatchManager:(id)arg2 inLibrary:(id)arg3;
- (void)_processQuarantineRecordsCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3 uploadTracker:(id)arg4 inLibrary:(id)arg5;
- (bool)_processRepushAlbumError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3 inLibrary:(id)arg4;
- (void)_promptForNilAssetUUID:(id)arg1 isInsert:(bool)arg2;
- (void)_promptToFileRadarWithTitle:(id)arg1 description:(id)arg2;
- (void)_push:(id)arg1;
- (void)_pushBatches:(id)arg1;
- (void)_quarantineObject:(id)arg1 uploadTracker:(id)arg2;
- (void)_sendAlbums:(id)arg1 toBatchManager:(id)arg2 inLibrary:(id)arg3;
- (void)_sendAssets:(id)arg1 toBatchManager:(id)arg2 inLibrary:(id)arg3;
- (void)_sendOneBatch:(id)arg1 toBatchManager:(id)arg2 inLibrary:(id)arg3;
- (void)_sortData:(id)arg1 isInsert:(bool)arg2 forUploadChanges:(id)arg3 shouldTriggerPrefetch:(bool*)arg4 inManagedObjectContext:(id)arg5;
- (void)_sortRelationshipData:(id)arg1 forUploadChanges:(id)arg2 inManagedObjectContext:(id)arg3;
- (id)_syncDescriptionForObject:(id)arg1;
- (bool)_updateDeletionRecordListForKey:(id)arg1 removingRecordID:(id)arg2;
- (bool)_validateAdditionalAssetAttributes:(id)arg1 onRelatedObject:(id)arg2;
- (bool)_validateAsset:(id)arg1 onRelatedObject:(id)arg2;
- (id)_validateAssets:(id)arg1 fromCloudUuidDeleteList:(id)arg2;
- (void)addBatches:(id)arg1;
- (void)clearUploadArray;
- (id)createBatchesForChanges:(id)arg1 outInsertedPhotoCount:(unsigned long long*)arg2 outInsertedVideoCount:(unsigned long long*)arg3 withUploadTracker:(id)arg4 inLibrary:(id)arg5;
- (void)handleUploadBatchesFromLocalEvent:(id)arg1 outInsertedPhotoCount:(unsigned long long*)arg2 outInsertedVideoCount:(unsigned long long*)arg3 shouldTriggerPrefetch:(bool*)arg4 withUploadTracker:(id)arg5 inLibrary:(id)arg6;
- (bool)hasBatchesToUpload;
- (id)init;
- (bool)initialUpload;
- (unsigned long long)numberOfBatchesToUpload;
- (id)pop;
- (id)processCommitError:(id)arg1 andFinalizeError:(id)arg2 forUploadBatchContainer:(id)arg3 withUploadTracker:(id)arg4 inLibrary:(id)arg5;
- (void)processMomentSharesNeedingForceSyncInLibrary:(id)arg1;
- (void)quarantineRecord:(id)arg1 uploadTracker:(id)arg2 inLibrary:(id)arg3;
- (void)recordDeletions:(id)arg1;
- (void)recordMomentSharesNeedingForceSync:(id)arg1 inLibrary:(id)arg2;
- (void)setInitialUpload:(bool)arg1;
- (void)setShouldGenerateDerivatives:(bool)arg1;
- (bool)shouldGenerateDerivatives;
- (void)tryToFixCommitError:(id)arg1 inUploadBatch:(id)arg2 forRecords:(id)arg3 uploadTracker:(id)arg4 inLibrary:(id)arg5;
- (void)uploadDeletedRecordsFromPlist:(id)arg1;
- (void)uploadFullPhotoLibraryToCloud:(id)arg1;

@end
