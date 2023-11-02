
@interface HKProfileStore : NSObject <HKProfileStoreClient, _HKXPCExportable> {
    HKObserverSet<HKProfileStoreObserver> * _observers;
    HKProxyProvider * _proxyProvider;
    bool  _startedObserving;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)_fetchProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)_getSynchronousProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)addObserver:(id)arg1 completion:(id /* block */)arg2;
- (void)client_remoteDidUpdateProfileList;
- (void)connectionInvalidated;
- (void)createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(id /* block */)arg3;
- (void)deleteProfile:(id)arg1 completion:(id /* block */)arg2;
- (void)dispatchProfileListDidUpdate;
- (id)exportedInterface;
- (void)fetchAllProfilesWithCompletion:(id /* block */)arg1;
- (void)fetchDisplayImageData:(id /* block */)arg1;
- (void)fetchDisplayName:(id /* block */)arg1;
- (void)fetchProfileIdentifierForNRDeviceUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchProfileIdentifierForNRDeviceUUID:(id)arg1 ownerAppleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchSharingInformationForProfileIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithHealthStore:(id)arg1;
- (id)remoteInterface;
- (void)removeObserver:(id)arg1;
- (void)setDisplayFirstName:(id)arg1 lastName:(id)arg2 completion:(id /* block */)arg3;
- (void)setDisplayImageData:(id)arg1 completion:(id /* block */)arg2;
- (void)startObservingWithCompletion:(id /* block */)arg1;
- (id)synchronouslyFetchFirstName;

@end
