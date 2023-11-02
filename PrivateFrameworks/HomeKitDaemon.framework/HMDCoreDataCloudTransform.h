
@interface HMDCoreDataCloudTransform : HMFObject <HMDCoreDataCloudTransformDelegate, HMDCoreDataNotificationListener, HMFLogging> {
    NSMapTable * _cloudChangeListeners;
    NSMutableSet * _cloudImportInProgressStoreIdentifiers;
    HMDCoreData * _coreData;
    <HMDCoreDataCloudTransformDelegate> * _delegate;
    bool  _fakeRecordsEnabled;
    NSMutableDictionary * _historyTokensByStoreIdentifier;
    unsigned long long  _importSignpostID;
    NSManagedObjectContext * _lazyManagedObjectContext;
    struct hmf_unfair_data_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _lock;
    <HMMLogEventSubmitting> * _logEventSubmitter;
    NSObject<OS_os_log> * _logger;
    HMDCoreDataCloudTransformMergePolicy * _mergePolicy;
    NSMutableSet * _pendingChangedStoreIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDCoreDataCloudTransformDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (readonly) Class superclass;

+ (Class)exportTransformableClassFromEntity:(id)arg1;
+ (id)exportTransformableEntityFromEntity:(id)arg1;
+ (Class)importTransformableClassFromEntity:(id)arg1;
+ (id)localTransformableEntityFromEntity:(id)arg1;
+ (id)logCategory;
+ (id)new;
+ (id)sharedInstance;
+ (bool)transactionIsCloudStoreReset:(id)arg1 context:(id)arg2;
+ (void)wipeCoreDataStorageDueToPCSIdentityLossAndRelaunchHomeKitDaemon;

- (void).cxx_destruct;
- (bool)cloudTransform:(id)arg1 isPermittedForHomeWithModelID:(id)arg2 isImport:(bool)arg3;
- (void)coreData:(id)arg1 cloudKitExportFinishedForStoreWithIdentifier:(id)arg2 duration:(double)arg3 error:(id)arg4;
- (void)coreData:(id)arg1 cloudKitExportStartedForStoreWithIdentifier:(id)arg2;
- (void)coreData:(id)arg1 cloudKitImportFinishedForStoreWithIdentifier:(id)arg2 duration:(double)arg3 error:(id)arg4;
- (void)coreData:(id)arg1 cloudKitImportStartedForStoreWithIdentifier:(id)arg2;
- (void)coreData:(id)arg1 persistentStoreWithIdentifierDidChange:(id)arg2;
- (void)countResidentsInHomeWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (id)init;
- (id)initWithCoreData:(id)arg1 fakeRecordsEnabled:(bool)arg2 logEventSubmitter:(id)arg3;
- (id)initWithCoreData:(id)arg1 logEventSubmitter:(id)arg2;
- (id)managedObjectContext;
- (id)newCloudMirrorExportStatusMonitor;
- (void)registerCloudChangeListener:(id)arg1 forEntities:(id)arg2;
- (void)runCompleteMergeTransformForHomeWithModelID:(id)arg1 completion:(id /* block */)arg2;
- (void)runTransformWithCompletion:(id /* block */)arg1;
- (bool)runTransformWithError:(id*)arg1;
- (void)setDelegate:(id)arg1;

@end
