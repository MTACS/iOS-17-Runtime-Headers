
@interface HKEntitlementStore : NSObject <HKEntitlementStoreClient, _HKXPCExportable> {
    HKProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)fetchContainerAppExtensionEntitlementsWithCompletion:(id /* block */)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)remoteInterface;

@end
