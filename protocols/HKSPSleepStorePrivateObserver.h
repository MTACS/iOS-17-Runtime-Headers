
@protocol HKSPSleepStorePrivateObserver <HKSPSleepStoreObserver>

@optional

- (void)sleepStore:(HKSPSleepStore *)arg1 sleepEventRecordDidChange:(HKSPSleepEventRecord *)arg2;
- (void)sleepStore:(HKSPSleepStore *)arg1 sleepFocusConfigurationDidUpdate:(HKSPSleepFocusConfiguration *)arg2;
- (void)sleepStore:(HKSPSleepStore *)arg1 sleepScheduleModelDidChange:(HKSPSleepScheduleModel *)arg2;

@end
