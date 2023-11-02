
@interface HKClinicalSharingClient : NSObject <_HKXPCExportable> {
    HKProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)gatherQueryDiagnosticsWithOptions:(unsigned long long)arg1 date:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (id)remoteInterface;
- (void)scheduleSharingHealthDataWithReason:(long long)arg1 completion:(id /* block */)arg2;
- (void)shareHealthDataWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)shareHealthDataWithOptions:(unsigned long long)arg1 reason:(long long)arg2 date:(id)arg3 completion:(id /* block */)arg4;
- (void)submitDailyAnalyticsWithCompletion:(id /* block */)arg1;
- (void)submitOnboardingAnalyticsForStepIdentifier:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)uploadDAIIfNeededWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;

@end
