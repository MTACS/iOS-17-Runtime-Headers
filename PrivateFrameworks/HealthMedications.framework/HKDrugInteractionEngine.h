
@interface HKDrugInteractionEngine : NSObject <HKDrugInteractionEngineClientInterface, _HKXPCExportable> {
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
- (id)exportedInterface;
- (id)healthStore;
- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (void)interactionClassForLifestyleFactor:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)interactionClassesForConceptWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)interactionClassesForMedication:(id)arg1 completion:(id /* block */)arg2;
- (void)interactionResultForFirstMedication:(id)arg1 secondMedication:(id)arg2 completion:(id /* block */)arg3;
- (void)interactionResultForMedication:(id)arg1 lifestyleFactor:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)interactionResultsForInteractionClasses:(id)arg1 completion:(id /* block */)arg2;
- (void)interactionResultsForMedications:(id)arg1 lifestyleFactors:(id)arg2 completion:(id /* block */)arg3;
- (void)numberOfInteractionsForConceptWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)numberOfInteractionsForMedication:(id)arg1 completion:(id /* block */)arg2;
- (id)proxyProvider;
- (id)remoteInterface;
- (void)setHealthStore:(id)arg1;
- (void)setProxyProvider:(id)arg1;
- (void)unitTest_noOpWithCompletion:(id /* block */)arg1;

@end
