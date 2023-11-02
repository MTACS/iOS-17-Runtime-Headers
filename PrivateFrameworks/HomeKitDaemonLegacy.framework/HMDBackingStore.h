
@interface HMDBackingStore : HMFObject <HMDBackingStoreDataSource, HMFLogging> {
    <HMDBackingStoreDataSource> * _dataSource;
    <HMDBackingStoreObjectProtocol> * _delegate;
    HMDHome * _home;
    HMDHomeManager * _homeManager;
    HMDBackingStoreLocal * _local;
    HMDObjectLookup * _lookup;
    bool  _removedLegacyArchive;
    CKRecordID * _root;
    NSUUID * _uuid;
}

@property (readonly) NSString *activeControllerKeyUsername;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDBackingStoreObjectProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMDHome *home;
@property (nonatomic) HMDHomeManager *homeManager;
@property (readonly) bool isAtomicSaveFeatureEnabled;
@property (nonatomic, retain) HMDBackingStoreLocal *local;
@property (nonatomic, retain) HMDObjectLookup *lookup;
@property (nonatomic, readonly) CKRecordID *root;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)_saveToLocalStoreWithReason:(id)arg1 homeManager:(id)arg2 shouldIncrementGenerationCounter:(bool)arg3 backingStore:(id)arg4;
+ (id)allowedTypes;
+ (id)currentDevice;
+ (id)deeplyProblematicObjectTypes;
+ (id)flushBackingStore;
+ (id)internalAllowedTypes;
+ (id)logCategory;
+ (id)resetBackingStore;
+ (void)saveToPersistentStoreWithReason:(id)arg1 homeManager:(id)arg2 shouldIncrementGenerationCounter:(bool)arg3 backingStore:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)start;

- (void).cxx_destruct;
- (id)__fetchWithGroup:(id)arg1 uuids:(id)arg2 error:(id*)arg3;
- (id)activeControllerKeyUsername;
- (id)backingStoreOperationQueue;
- (void)commit:(id)arg1 run:(bool)arg2 save:(bool)arg3 archiveInline:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)commit:(id)arg1 run:(bool)arg2 save:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)createBackingStoreLogAddTransactionOperationWithTransaction:(id)arg1;
- (id)createBackingStoreOperation;
- (id)createHomeObjectLookupWithHome:(id)arg1;
- (id)dataForPersistentStoreIncrementingGeneration:(bool)arg1 reason:(id)arg2;
- (id)delegate;
- (void)deleteModelObjects:(id)arg1 destination:(unsigned long long)arg2;
- (id)description;
- (id)home;
- (id)homeManager;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 home:(id)arg2;
- (id)initWithUUID:(id)arg1 homeManager:(id)arg2;
- (id)initWithUUID:(id)arg1 homeManager:(id)arg2 home:(id)arg3 dataSource:(id)arg4;
- (bool)isAtomicSaveFeatureEnabled;
- (id)local;
- (id)localBackingStore;
- (id)logIdentifier;
- (id)lookup;
- (id)root;
- (void)saveToPersistentStoreWithReason:(id)arg1 incrementGeneration:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setLocal:(id)arg1;
- (void)setLookup:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)submit:(id)arg1;
- (void)submitBlock:(id /* block */)arg1;
- (id)transaction:(id)arg1 options:(id)arg2;
- (void)updateModelObjects:(id)arg1 destination:(unsigned long long)arg2;
- (id)uuid;

@end
