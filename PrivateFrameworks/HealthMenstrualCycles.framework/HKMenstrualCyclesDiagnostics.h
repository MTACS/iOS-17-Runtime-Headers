
@interface HKMenstrualCyclesDiagnostics : NSObject <HKMenstrualCyclesDiagnosticsInterface, _HKXPCExportable> {
    HKHealthStore * _healthStore;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)arg1;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (id)remoteInterface;
- (void)triggerAnalysisForDiagnosticsWithCompletion:(id /* block */)arg1;

@end
