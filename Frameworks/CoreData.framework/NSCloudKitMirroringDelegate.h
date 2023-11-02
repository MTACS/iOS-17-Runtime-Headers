
@interface NSCloudKitMirroringDelegate : NSObject <NSCloudKitMirroringDelegateProgressProvider, NSPersistentStoreMirroringDelegate, PFApplicationStateMonitorDelegate, PFCloudKitExporterDelegate> {
    PFCloudKitThrottledNotificationObserver * _accountChangeObserver;
    NSString * _activityGroupName;
    PFApplicationStateMonitor * _applicationMonitor;
    NSString * _ckDatabaseName;
    NSObject<OS_dispatch_queue> * _cloudKitQueue;
    NSObject<OS_dispatch_semaphore> * _cloudKitQueueSemaphore;
    CKContainer * _container;
    CDDCloudKitClient * _coredatadClient;
    CKRecordID * _currentUserRecordID;
    CKDatabase * _database;
    CKDatabaseSubscription * _databaseSubscription;
    NSString * _exportActivityIdentifier;
    PFCloudKitExporterOptions * _exporterOptions;
    bool  _hadObservedStore;
    NSString * _importActivityIdentifier;
    NSError * _lastInitializationError;
    CKNotificationListener * _notificationListener;
    NSPersistentStoreCoordinator * _observedCoordinator;
    NSSQLCore * _observedStore;
    NSString * _observedStoreIdentifier;
    NSCloudKitMirroringDelegateOptions * _options;
    bool  _registeredForAccountChangeNotifications;
    bool  _registeredForIdentityUpdateNotifications;
    bool  _registeredForSubscription;
    NSCloudKitMirroringRequestManager * _requestManager;
    CKScheduler * _scheduler;
    NSString * _setupActivityIdentifier;
    bool  _setupFinishedMetadataInitialization;
    CKSystemSharingUIObserver * _sharingUIObserver;
    bool  _successfullyInitialized;
}

@property (nonatomic, readonly) PFApplicationStateMonitor *applicationMonitor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)checkAndCreateDirectoryAtURL:(id)arg1 wipeIfExists:(bool)arg2 error:(id*)arg3;
+ (bool)checkIfContentsOfStore:(id)arg1 matchContentsOfStore:(id)arg2 error:(id*)arg3;
+ (bool)checkIfContentsOfStore:(id)arg1 matchContentsOfStore:(id)arg2 onlyCompareSharedZones:(bool)arg3 error:(id*)arg4;
+ (id)cloudKitMachServiceName;
+ (id)cloudKitMetadataTransformerName;
+ (id)createCloudKitServerWithMachServiceName:(id)arg1 andStorageDirectoryPath:(id)arg2;
+ (void)initialize;
+ (bool)isFirstPartyContainerIdentifier:(id)arg1;
+ (bool)printEventsInStores:(id)arg1 startingAt:(id)arg2 endingAt:(id)arg3 error:(id*)arg4;
+ (void)printMetadataForStoreAtURL:(id)arg1 withConfiguration:(id)arg2 operateOnACopy:(bool)arg3;
+ (void)printRepresentativeSchemaForModelAtURL:(id)arg1 orStoreAtURL:(id)arg2 withConfiguration:(id)arg3;
+ (bool)printSharedZoneWithName:(id)arg1 inStoreAtURL:(id)arg2 error:(id*)arg3;
+ (id)stringForResetReason:(unsigned long long)arg1;
+ (bool)traceObjectMatchingRecordName:(id)arg1 inStores:(id)arg2 startingAt:(id)arg3 endingAt:(id)arg4 error:(id*)arg5;
+ (bool)traceObjectMatchingValue:(id)arg1 atKeyPath:(id)arg2 inStores:(id)arg3 startingAt:(id)arg4 endingAt:(id)arg5 error:(id*)arg6;

- (void).cxx_destruct;
- (id)applicationMonitor;
- (void)applicationStateMonitorEnteredBackground:(id)arg1;
- (void)applicationStateMonitorEnteredForeground:(id)arg1;
- (void)applicationStateMonitorExpiredBackgroundActivityTimeout:(id)arg1;
- (void)ckAccountOrIdentityChangedHandler:(id)arg1;
- (void)coordinatorWillRemoveStore:(id)arg1;
- (void)dealloc;
- (void)eventUpdated:(id)arg1;
- (void)exporter:(id)arg1 willScheduleOperations:(id)arg2;
- (id)initWithCloudKitContainerOptions:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (void)logResetSyncNotification:(id)arg1;
- (void)managedObjectContextSaved:(id)arg1;
- (void)persistentStoreCoordinator:(id)arg1 didSuccessfullyAddPersistentStore:(id)arg2 withDescription:(id)arg3;
- (void)remoteStoreDidChange:(id)arg1;
- (void)storesDidChange:(id)arg1;
- (bool)validateManagedObjectModel:(id)arg1 forUseWithStoreWithDescription:(id)arg2 error:(id*)arg3;

@end
