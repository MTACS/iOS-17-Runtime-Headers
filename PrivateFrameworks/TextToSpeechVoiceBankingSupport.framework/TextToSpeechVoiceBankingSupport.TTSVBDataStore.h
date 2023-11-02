
@interface TextToSpeechVoiceBankingSupport.TTSVBDataStore : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_cloudDatastoreURL;
    void $__lazy_storage_$_container;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_localDatastoreURL;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_managedObjectModelURL;
    void calloutQueue;
    void cloudStoreName;
    void configureation;
    void eventSubject;
    void localStoreName;
    void managedObjectModelName;
    void persistentHistoryProcessingDatesPreferenceKey;
    void queue;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  queue_loadError;
    void queue_shouldAttemptLoad;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  voiceBankingRootURL;
}

- (void).cxx_destruct;
- (void)handleDidResetCloudSync:(id)arg1;
- (void)handleManagedObjectContextDidChange:(id)arg1;
- (void)handleManagedObjectContextDidMergeChangesObjectIDs:(id)arg1;
- (void)handleManagedObjectContextDidSave:(id)arg1;
- (void)handleManagedObjectContextDidSaveObjectIDs:(id)arg1;
- (void)handlePersistentCloudKitContainerEventChanged:(id)arg1;
- (void)handlePersistentStoreRemoteChange:(id)arg1;
- (void)handleStoresWillChange:(id)arg1;
- (void)handleWillResetCloudSync:(id)arg1;
- (id)init;

@end
