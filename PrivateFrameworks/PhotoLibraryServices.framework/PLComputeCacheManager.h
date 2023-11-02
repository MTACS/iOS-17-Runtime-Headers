
@interface PLComputeCacheManager : NSObject <PLCloudAssetPayloadRestoreDelegate, PLJournalManager> {
    PLCoreAnalyticsEventManager * _coreAnalyticsManager;
    PLJournalManager * _journalManager;
    PLLibraryServicesManager * _lsm;
    NSObject<OS_dispatch_queue> * _queue;
    PLPhotoLibrary * _restoreCachePhotoLibrary;
    NSNumber * _restoreState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _restoreStateLock;
}

@property (nonatomic, readonly) bool isReadyForAnalysis;

+ (id)_urlForLocation:(long long)arg1 pathManager:(id)arg2 createIfNeeded:(bool)arg3 error:(id*)arg4;
+ (id)baseURLFromPathManager:(id)arg1;
+ (bool)isEnabledWithPathManager:(id)arg1 error:(id*)arg2;
+ (id)name;
+ (id)payloadClasses;
+ (id)restorePayloadClasses;
+ (bool)shouldPublishAnalyticsForRestoreError:(id)arg1;

- (void).cxx_destruct;
- (bool)_addBackupCreatedMarkerWithError:(id*)arg1;
- (bool)_archivePrepareDirectoryWithError:(id*)arg1;
- (bool)_archiveSnapshotIfNecessaryWithError:(id*)arg1;
- (bool)_archiveSnapshotWithError:(id*)arg1;
- (id)_cachedPolicyConfiguration;
- (void)_cleanupLegacyArchiveFilename;
- (bool)_cleanupLegacyArchiveURL:(id)arg1 replacementURL:(id)arg2 error:(id*)arg3;
- (bool)_createArchiveWithError:(id*)arg1;
- (void)_enumerateComputeCachePrepareDirectoryUsingBlock:(id /* block */)arg1;
- (id)_filenameExclusionList;
- (unsigned long long)_getArchiveSize;
- (bool)_getRestoreCount:(short*)arg1 error:(id*)arg2;
- (bool)_hasBackupArchive;
- (bool)_hasBackupCreatedMarker;
- (bool)_hasPrepareDataToBackupWithError:(id*)arg1;
- (bool)_incrementRestoreCount:(short*)arg1 error:(id*)arg2;
- (bool)_isValidArchiveURL:(id)arg1 filenameExclusionList:(id)arg2;
- (long long)_libraryAssetCount;
- (id)_newTransientContext;
- (long long)_performBlockOnRestoreStateLockAndWait:(id /* block */)arg1;
- (bool)_performSnapshotForPayloadClassIDs:(id)arg1 error:(id*)arg2;
- (void)_publish;
- (bool)_removeComputeCacheDataForMatchingRestoreState:(long long)arg1 error:(id*)arg2;
- (bool)_removeLocation:(long long)arg1 error:(id*)arg2;
- (bool)_removeRestoreDataWithError:(id*)arg1;
- (bool)_removeSnapshotWithError:(id*)arg1;
- (void)_resetRestoreState;
- (bool)_restoreComputeCacheArchiveWithProgress:(id)arg1 error:(id*)arg2;
- (bool)_restoreComputeCacheWithProgress:(id)arg1 error:(id*)arg2;
- (long long)_restoreState;
- (void)_setRestoreState:(long long)arg1;
- (id)_shortLivedLibrary;
- (bool)_snapshotJournalsForPayloadClassIDs:(id)arg1 error:(id*)arg2;
- (id)_snapshotPolicy;
- (bool)_transferAndPrepareComputeCacheFromBackupToRestoreLocationWithError:(id*)arg1;
- (bool)_transferToBackupLocationWithError:(id*)arg1;
- (void)_updateCachedPolicyConfigurationWithCPLConfiguration:(id)arg1;
- (void)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 completionHandler:(id /* block */)arg3;
- (bool)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 error:(id*)arg3;
- (bool)createArchiveWithError:(id*)arg1;
- (id)initWithLibraryServicesManager:(id)arg1;
- (bool)isReadyForAnalysis;
- (id)managedObjectContext;
- (void)notifyCPLConfiguration:(id)arg1;
- (void)notifyReadyToRestore;
- (void)performTransactionAndWait:(id /* block */)arg1;
- (bool)resetComputeCacheWithError:(id*)arg1;
- (id)resolveLocalIdentifiersForCloudIdentifiers:(id)arg1 error:(id*)arg2;
- (bool)restoreComputeCacheWithProgress:(id)arg1 error:(id*)arg2;
- (bool)snapshotComputeCacheAndBackupIfNeededWithError:(id*)arg1;
- (bool)snapshotJournalsForPayloadClassIDs:(id)arg1 error:(id*)arg2;
- (void)snapshotJournalsForPayloadClassIDs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)start;
- (id)status;
- (id)statusFromPolicy:(id)arg1;
- (void)stop;

@end
