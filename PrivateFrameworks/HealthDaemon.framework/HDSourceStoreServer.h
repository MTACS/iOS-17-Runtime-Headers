
@interface HDSourceStoreServer : HDStandardTaskServer <HKSourceStoreServer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_deleteSourceWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchAllSourcesWithCompletion:(id /* block */)arg1;
- (void)remote_fetchHasSampleWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_fetchOrderedSourcesForObjectType:(id)arg1 completion:(id /* block */)arg2;
- (void)remote_updateOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(id /* block */)arg3;

@end
