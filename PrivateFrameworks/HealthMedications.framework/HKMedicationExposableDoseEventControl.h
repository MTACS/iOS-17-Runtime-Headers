
@interface HKMedicationExposableDoseEventControl : NSObject <HKMedicationExposableDoseEventControlClientInterface, _HKXPCExportable> {
    HKHealthStore * _healthStore;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HKTaskServerProxyProvider *proxyProvider;
@property (readonly) Class superclass;

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (void)deleteDoseEventWithPersistentUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)doseEventsForDateInterval:(id)arg1 medicationIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (id)exportedInterface;
- (id)healthStore;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (id)proxyProvider;
- (id)remoteInterface;
- (void)setHealthStore:(id)arg1;
- (void)setProxyProvider:(id)arg1;
- (void)unitTest_noOpWithCompletion:(id /* block */)arg1;
- (void)writeDoseEvents:(id)arg1 completion:(id /* block */)arg2;

@end
