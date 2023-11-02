
@interface SleepHealthUI.SleepScheduleProvider : NSObject <HKSPSleepStorePrivateObserver> {
    void currentDateProvider;
    void currentGoalPublisher;
    void currentScheduleEnabledPublisher;
    void currentSchedulePublisher;
    void currentWindDownDurationPublisher;
    void eventRecordPublisher;
    void nextOccurrencePublisher;
    void query;
    void sleepStore;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)sleepStore:(id)arg1 sleepEventDidOccur:(id)arg2;
- (void)sleepStore:(id)arg1 sleepEventRecordDidChange:(id)arg2;
- (void)sleepStore:(id)arg1 sleepScheduleDidChange:(id)arg2;

@end
