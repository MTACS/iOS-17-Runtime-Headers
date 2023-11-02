
@interface HMDCoreData : HMFObject <HMFLogging> {
    NSPersistentStore * _cloudPrivateStore;
    NSPersistentStore * _cloudSharedStore;
    NSPersistentCloudKitContainer * _container;
    NSMapTable * _contexts;
    bool  _firstCloudKitImportComplete;
    HMFFuture * _firstCloudKitImportFuture;
    HMFPromise * _firstCloudKitImportPromise;
    NSHashTable * _listeners;
    NSPersistentStore * _localStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_os_log> * _logger;
    <HMDCoreDataNotificationCenter> * _notificationCenter;
    unsigned long long  _setupSignpostID;
    NSUserDefaults * _userDefaults;
    bool  _usingLiveCloudKit;
    NSPersistentStore * _workingStore;
}

@property (nonatomic, readonly, copy) NSSet *allContexts;
@property (nonatomic, readonly) NSPersistentStore *cloudPrivateStore;
@property (nonatomic, readonly) NSPersistentStore *cloudSharedStore;
@property (nonatomic, readonly) NSPersistentCloudKitContainer *container;
@property (nonatomic, readonly) HMCContext *contextWithRootPartition;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *coordinator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMFFuture *firstCloudKitImportFuture;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSPersistentStore *localStore;
@property (nonatomic, readonly) <HMDCoreDataNotificationCenter> *notificationCenter;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSPersistentStore *workingStore;

+ (void)cleanUpSharedInstance;
+ (id)cloudPrivateStoreDescription;
+ (id)cloudSharedStoreDescription;
+ (id)createWithDefaultPersistentStoresWithoutLiveCloudKit;
+ (id)createWithPersistentStoreDescriptions:(id)arg1;
+ (id)createWithPersistentStoreDescriptions:(id)arg1 notificationCenter:(id)arg2 userDefaults:(id)arg3;
+ (id)defaultPersistentStoreDescriptions;
+ (id)localStoreDescription;
+ (id)logCategory;
+ (id)managedObjectModel;
+ (id)sharedInstance;
+ (id)workingStoreDescription;

- (void).cxx_destruct;
- (void)_handleChangeNotification:(id)arg1;
- (void)_handleDidResetSyncNotification:(id)arg1;
- (void)_handlePersistentCloudKitContainerEventChangedNotification:(id)arg1;
- (void)_handleWillResetSyncNotification:(id)arg1;
- (bool)_pruneWorkingStoreHistoryWhenHistoryPercentageOfStoreIsGreaterThan:(long long)arg1;
- (bool)_shouldPruneWorkingStoreHistory;
- (void)addNotificationListener:(id)arg1;
- (id)allContexts;
- (id)cloudPrivateStore;
- (id)cloudSharedStore;
- (id)container;
- (id)contextWithHomeUUID:(id)arg1;
- (id)contextWithRootPartition;
- (id)coordinator;
- (id)dumpCloudKitConfiguration:(bool)arg1 localConfiguration:(bool)arg2 workingConfiguration:(bool)arg3 includeFakeModels:(bool)arg4 context:(id)arg5 error:(id*)arg6;
- (id)dumpConfiguration:(id)arg1 includeFakeModels:(bool)arg2 context:(id)arg3 error:(id*)arg4;
- (id)firstCloudKitImportFuture;
- (id)initWithCloudKitContainer:(id)arg1 notificationCenter:(id)arg2 userDefaults:(id)arg3;
- (id)initWithPersistentStoreDescriptions:(id)arg1 notificationCenter:(id)arg2 userDefaults:(id)arg3;
- (bool)isRelatedContext:(id)arg1;
- (id)localStore;
- (id)newManagedObjectContext;
- (id)notificationCenter;
- (void)removeNotificationListener:(id)arg1;
- (void)startWatchingManagedObjectChanges;
- (void)stopWatchingManagedObjectChanges;
- (id)workingStore;

@end
