
@interface HKSourceStore : NSObject <HKSourceStoreClient, _HKXPCExportable> {
    HKProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (void)deleteSourceWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)exportedInterface;
- (void)fetchAllSourcesWithCompletion:(id /* block */)arg1;
- (void)fetchHasSampleWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchOrderedSourcesForObjectType:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithHealthStore:(id)arg1;
- (id)remoteInterface;
- (void)updateOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(id /* block */)arg3;

@end
