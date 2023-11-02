
@interface HKDeviceStore : NSObject <HKDeviceStoreClient, _HKXPCExportable> {
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
- (void)fetchAllDevicesWithCompletion:(id /* block */)arg1;
- (void)fetchDevicesMatchingValues:(id)arg1 forProperty:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithHealthStore:(id)arg1;
- (id)remoteInterface;

@end
