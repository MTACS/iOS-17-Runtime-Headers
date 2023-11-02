
@protocol HKSPSleepStoreObserver <NSObject>

@optional

- (void)sleepStore:(HKSPSleepStore *)arg1 sleepEventDidOccur:(HKSPSleepEvent *)arg2;
- (void)sleepStore:(HKSPSleepStore *)arg1 sleepModeOnDidChange:(bool)arg2;
- (void)sleepStore:(HKSPSleepStore *)arg1 sleepScheduleDidChange:(HKSPSleepSchedule *)arg2;
- (void)sleepStore:(HKSPSleepStore *)arg1 sleepScheduleStateDidChange:(unsigned long long)arg2;
- (void)sleepStore:(HKSPSleepStore *)arg1 sleepSettingsDidChange:(HKSPSleepSettings *)arg2;

@end
