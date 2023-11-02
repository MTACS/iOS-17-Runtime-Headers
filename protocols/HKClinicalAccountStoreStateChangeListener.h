
@protocol HKClinicalAccountStoreStateChangeListener <NSObject>

@required

- (void)clinicalAccountStore:(HKClinicalAccountStore *)arg1 accountDidChange:(HKClinicalAccount *)arg2 changeType:(long long)arg3;

@end
