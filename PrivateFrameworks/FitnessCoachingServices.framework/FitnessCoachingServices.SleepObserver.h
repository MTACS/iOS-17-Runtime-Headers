
@interface FitnessCoachingServices.SleepObserver : NSObject <FISleepDataProviderDelegate> {
    void dateProvider;
    void duetObserver;
    void lock;
    void notificationCenter;
    void platform;
    void state;
}

- (void).cxx_destruct;
- (id)currentCalendar;
- (id)currentDate;
- (void)dealloc;
- (id)init;
- (void)sleepDataProviderLastAlarmWakeUpDateDidChange;
- (void)sleepDataProviderLastGoodMorningDismissedDateDidChange;
- (void)sleepDataProviderUserDayDidUpdate;

@end
