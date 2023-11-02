
@interface HMDCHIPHomeDataSource : HMFObject <HMMTRFabricStorageDataSource> {
    NSNumber * _fabricID;
    HMDHome * _home;
    NSRecursiveLock * _lock;
    NSMutableDictionary * _pendingKeyValueStore;
    unsigned long long  _pendingKeyValueStoreTransactionsCount;
}

@property (nonatomic, readonly, copy) NSSet *allNodeIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *fabricID;
@property (readonly) unsigned long long hash;
@property HMDHome *home;
@property (nonatomic, readonly, copy) NSData *intermediateCertificate;
@property (nonatomic, readonly, copy) NSDictionary *keyValueStore;
@property (nonatomic, readonly, copy) NSNumber *lastNodeID;
@property (nonatomic, readonly) NSRecursiveLock *lock;
@property (nonatomic, readonly, copy) NSData *operationalCertificate;
@property (nonatomic, retain) NSMutableDictionary *pendingKeyValueStore;
@property (nonatomic) unsigned long long pendingKeyValueStoreTransactionsCount;
@property (nonatomic, readonly, copy) NSData *rootCertificate;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_updateHomeModelWithLabel:(id)arg1 completion:(id /* block */)arg2 block:(id /* block */)arg3;
- (id)allNodeIDs;
- (id)fabricID;
- (id)home;
- (id)initWithFabricID:(id)arg1 home:(id)arg2;
- (id)intermediateCertificate;
- (id)keyValueStore;
- (id)lastNodeID;
- (id)lock;
- (id)logIdentifier;
- (id)operationalCertificate;
- (id)pendingKeyValueStore;
- (unsigned long long)pendingKeyValueStoreTransactionsCount;
- (id)rootCertificate;
- (void)setHome:(id)arg1;
- (void)setPendingKeyValueStore:(id)arg1;
- (void)setPendingKeyValueStoreTransactionsCount:(unsigned long long)arg1;
- (id)storageDataSourceForDeviceWithNodeID:(id)arg1;
- (void)updateFabricID:(id)arg1 completion:(id /* block */)arg2;
- (void)updateIntermediateCertificate:(id)arg1 completion:(id /* block */)arg2;
- (void)updateKeyValueStore:(id)arg1 completion:(id /* block */)arg2;
- (void)updateKeyValueStoreWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)updateLastNodeID:(id)arg1 completion:(id /* block */)arg2;
- (void)updateOperationalCertificate:(id)arg1 completion:(id /* block */)arg2;
- (void)updateRootCertificate:(id)arg1 completion:(id /* block */)arg2;

@end
