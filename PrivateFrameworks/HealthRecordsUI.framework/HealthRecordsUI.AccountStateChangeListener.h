
@interface HealthRecordsUI.AccountStateChangeListener : NSObject <HKClinicalAccountStoreStateChangeListener> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _latestChange;
    void handler;
}

- (void).cxx_destruct;
- (void)clinicalAccountStore:(id)arg1 accountDidChange:(id)arg2 changeType:(long long)arg3;
- (id)init;

@end
