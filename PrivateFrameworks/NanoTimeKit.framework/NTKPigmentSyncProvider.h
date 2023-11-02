
@interface NTKPigmentSyncProvider : NSObject <NTKPigmentEditOptionStoreListener> {
    <NTKPigmentSyncProviderDelegate> * _delegate;
    CLKDevice * _device;
    NSMutableSet * _domainsRequiringDeltaSync;
    NSMutableArray * _faceDomainsToBeSynced;
    NTKPigmentEditOptionStore * _pigmentStore;
    NSObject<OS_dispatch_queue> * _privateQueue;
    bool  _receivedUpdateDuringSync;
    bool  _requestDeltaSyncAfterSyncing;
    bool  _shouldSyncSharedCollections;
    NTKPigmentPersistentStorageController * _storageController;
    bool  _syncing;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKPigmentSyncProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CLKDevice *device;
@property (nonatomic, retain) NSMutableSet *domainsRequiringDeltaSync;
@property (nonatomic, retain) NSMutableArray *faceDomainsToBeSynced;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NTKPigmentEditOptionStore *pigmentStore;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *privateQueue;
@property (nonatomic) bool receivedUpdateDuringSync;
@property (nonatomic) bool requestDeltaSyncAfterSyncing;
@property (nonatomic) bool shouldSyncSharedCollections;
@property (nonatomic, retain) NTKPigmentPersistentStorageController *storageController;
@property (readonly) Class superclass;
@property (getter=isSyncing, nonatomic) bool syncing;

+ (bool)areCollections:(id)arg1 equalToCollections:(id)arg2;

- (void).cxx_destruct;
- (void)_requestDeltaSyncIfNeeded;
- (id)allAvailableFacesSupportingPigment;
- (void)colorBundleContentChanged;
- (void)colorEditOptionStore:(id)arg1 didChangeForDomain:(id)arg2;
- (id)compareLocalSyncDifferences;
- (id)delegate;
- (id)device;
- (id)domainsRequiringDeltaSync;
- (void)enumerateAllFacesPigmentDomains:(id /* block */)arg1;
- (void)faceBundlesUpdated;
- (id)faceDomainsToBeSynced;
- (void)finishSyncing:(bool)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)isSyncing;
- (id)nextSyncData:(inout id*)arg1;
- (id)pigmentStore;
- (bool)prepareForSyncing:(bool)arg1;
- (id)privateQueue;
- (bool)receivedUpdateDuringSync;
- (bool)requestDeltaSyncAfterSyncing;
- (void)saveSyncVersion;
- (void)setDelegate:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setDomainsRequiringDeltaSync:(id)arg1;
- (void)setFaceDomainsToBeSynced:(id)arg1;
- (void)setPigmentStore:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setReceivedUpdateDuringSync:(bool)arg1;
- (void)setRequestDeltaSyncAfterSyncing:(bool)arg1;
- (void)setShouldSyncSharedCollections:(bool)arg1;
- (void)setStorageController:(id)arg1;
- (void)setSyncing:(bool)arg1;
- (bool)shouldForceFullSync;
- (bool)shouldSyncSharedCollections;
- (id)storageController;

@end
