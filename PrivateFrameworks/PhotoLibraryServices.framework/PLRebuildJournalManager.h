
@interface PLRebuildJournalManager : NSObject <PLJournalManager> {
    PLChangeHandlingNotificationObserver * _changeHandlingNotificationObserver;
    PLJournalManager * _journalManager;
    PLLibraryServicesManager * _lsm;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_group> * _startupWaitGroup;
    unsigned short  _state;
}

+ (bool)assetJournalExists:(id)arg1 error:(id*)arg2;
+ (id)baseURLFromPathManager:(id)arg1;
+ (bool)existingJournalsCompatibleForRebuild:(id)arg1 error:(id*)arg2;
+ (bool)isEnabledWithPathManager:(id)arg1 error:(id*)arg2;
+ (id)name;
+ (id)payloadClasses;

- (void).cxx_destruct;
- (id)_assetsToImportFromAssetJournalInManagedObjectContext:(id)arg1 outOnDiskURLs:(id)arg2;
- (bool)_coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 error:(id*)arg3;
- (void)_handleChangeHandlingNotificationWithTransaction:(id)arg1;
- (id)_newTransientContext;
- (bool)_performSnapshotForPayloadClassIDs:(id)arg1 error:(id*)arg2;
- (bool)_performSnapshotIfNecessaryWithError:(id*)arg1;
- (void)_recreateAssetsInManagedObjectContext:(id)arg1 options:(unsigned char)arg2 progress:(id)arg3;
- (void)_recreateNonAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2;
- (bool)_recreateResourcesForAsset:(id)arg1 withPayload:(id)arg2 resources:(id)arg3 recreateOptions:(unsigned char)arg4 storeOptions:(id)arg5 libraryID:(id)arg6 isCPLEnabled:(bool)arg7;
- (void)_registerForChangeHandlingNotifications;
- (void)_removeLegacyPersistedMetadataIfNecessary;
- (bool)_replayFromCurrentHistoryToken;
- (void)_retrySnapshot;
- (bool)_snapshotJournalsForPayloadClassIDs:(id)arg1 error:(id*)arg2;
- (void)_snapshotJournalsIgnoreHistoreIfNecessaryForPayloadClassIDs:(id)arg1;
- (void)_start;
- (void)_startAfterRebuild;
- (void)_unregisterForChangeHandlingNotifications;
- (id)assetsToImportFromAssetJournalInManagedObjectContext:(id)arg1 outOnDiskURLs:(id)arg2;
- (void)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 completionHandler:(id /* block */)arg3;
- (bool)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 error:(id*)arg3;
- (id)initWithLibraryServicesManager:(id)arg1;
- (void)notifyRebuildComplete;
- (void)notifyWillRebuild;
- (void)recreateAllObjectsInManagedObjectContext:(id)arg1 options:(unsigned char)arg2;
- (void)recreateAssetsInManagedObjectContext:(id)arg1 options:(unsigned char)arg2 progress:(id)arg3;
- (void)recreateNonAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2;
- (bool)snapshotJournalsForPayloadClassIDs:(id)arg1 error:(id*)arg2;
- (void)snapshotJournalsForPayloadClassIDs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)start;
- (void)stop;

@end
