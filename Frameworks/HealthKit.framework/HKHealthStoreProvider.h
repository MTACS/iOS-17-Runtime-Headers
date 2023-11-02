
@interface HKHealthStoreProvider : NSObject <_HKXPCExportable> {
    <HKHealthStoreProviderProxyProvider> * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)_fetchProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)fetchAvailableIdentifiersWithCompletion:(id /* block */)arg1;
- (void)fetchStoreForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (id)initWithProxyProvider:(id)arg1;
- (id)remoteInterface;
- (void)requestAuthorizationToNewStoreToShareTypes:(id)arg1 readTypes:(id)arg2 completion:(id /* block */)arg3;
- (void)requestAuthorizationToNewStoreWithCompletion:(id /* block */)arg1;

@end
