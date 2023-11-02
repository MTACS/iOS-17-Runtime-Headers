
@interface HKDeviceContextStore : NSObject <_HKXPCExportable> {
    HKHealthStore * _healthStore;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKTaskServerProxyProvider *proxyProvider;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;
+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)fetchEntriesWithCompletion:(id /* block */)arg1;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (void)numberOfDeviceContextsPerDeviceType:(id /* block */)arg1;
- (id)proxyProvider;
- (id)remoteInterface;

@end
