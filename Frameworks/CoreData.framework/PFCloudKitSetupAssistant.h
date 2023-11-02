
@interface PFCloudKitSetupAssistant : NSObject {
    NSObject<OS_dispatch_semaphore> * _cloudKitSemaphore;
    CKContainer * _container;
    CKRecordID * _currentUserRecordID;
    CKDatabase * _database;
    CKDatabaseSubscription * _databaseSubscription;
    NSURL * _largeBlobDirectoryURL;
    NSCloudKitMirroringDelegateOptions * _mirroringOptions;
    NSPersistentCloudKitContainerEvent * _setupEvent;
    NSCloudKitMirroringDelegateSetupRequest * _setupRequest;
    PFCloudKitStoreMonitor * _storeMonitor;
}

- (void)dealloc;
- (id)initWithSetupRequest:(id)arg1 mirroringOptions:(id)arg2 observedStore:(id)arg3;

@end
