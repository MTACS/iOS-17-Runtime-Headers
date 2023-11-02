
@interface HKHRCardioFitnessStore : NSObject <HKHRCardioFitnessStoreClient, _HKXPCExportable> {
    HKHealthStore * _healthStore;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (readonly) Class superclass;

+ (id)taskIdentifier;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (id)remoteInterface;
- (void)saveCardioFitnessEventWithValue:(id)arg1 threshold:(id)arg2 dateInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)saveCardioFitnessEventWithValue:(id)arg1 threshold:(id)arg2 dateInterval:(id)arg3 options:(unsigned long long)arg4 completion:(id /* block */)arg5;

@end
