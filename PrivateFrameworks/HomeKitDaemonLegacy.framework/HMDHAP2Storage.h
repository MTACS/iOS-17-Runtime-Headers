
@interface HMDHAP2Storage : NSObject <HAP2Storage> {
    HMDAccessoryBrowser * _accessoryBrowser;
    <HAP2StorageDelegate> * _delegate;
    NSMutableSet * _registeredIdentifiers;
    HAPSystemKeychainStore * _storage;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HAP2StorageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_removeKeysForIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (void)deregisterPairedAccessoryWithIdentifier:(id)arg1;
- (void)fetchCacheForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchControllerKeyForDeviceId:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchKeysForIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)hasKeysForIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithAccessoryBrowser:(id)arg1;
- (void)registerPairedAccessoryWithIdentifier:(id)arg1;
- (void)removeCacheForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removeControllerKeyWithCompletion:(id /* block */)arg1;
- (void)removeKeysForIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)resetPairedAccessoryIdentifiers;
- (void)saveCacheForIdentifier:(id)arg1 data:(id)arg2 completion:(id /* block */)arg3;
- (void)saveControllerIdentity:(id)arg1 completion:(id /* block */)arg2;
- (void)saveKeysForIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
