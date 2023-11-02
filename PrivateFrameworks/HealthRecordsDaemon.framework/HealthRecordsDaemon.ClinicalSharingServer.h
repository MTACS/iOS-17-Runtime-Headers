
@interface HealthRecordsDaemon.ClinicalSharingServer : NSObject <HKClinicalSharingServerInterface, _HKXPCExportable> {
    void cancellables;
    void client;
    void contextProvider;
}

- (void).cxx_destruct;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)init;
- (id)remoteInterface;
- (void)remote_gatherQueryDiagnosticsWithOptions:(unsigned long long)arg1 date:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_scheduleSharingHealthDataWithReason:(long long)arg1 completion:(id /* block */)arg2;
- (void)remote_shareHealthDataWithOptions:(unsigned long long)arg1 reason:(long long)arg2 date:(id)arg3 completion:(id /* block */)arg4;
- (void)remote_submitDailyAnalyticsWithCompletion:(id /* block */)arg1;
- (void)remote_submitOnboardingAnalyticsForStepIdentifier:(id)arg1 context:(id)arg2 completion:(id /* block */)arg3;
- (void)remote_uploadDAIIfNeededWithOptions:(unsigned long long)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;

@end
