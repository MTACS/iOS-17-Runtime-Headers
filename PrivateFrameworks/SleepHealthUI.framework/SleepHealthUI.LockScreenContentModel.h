
@interface SleepHealthUI.LockScreenContentModel : NSObject <HKSPSleepStorePrivateObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_gregorianCalendar;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _alarmButtonPressed;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _state;
    void alarmProvider;
    void alarmSubscriber;
    void contentAppearanceProvider;
    void contentAppearanceSubscriber;
    void debugIdentifier;
    void demoState;
    void lockScreenState;
    void sleepScheduleModel;
    void sleepStore;
    void stateDidChange;
    void visible;
    void weatherForecastSubcriber;
    void weatherModel;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)sleepStore:(id)arg1 sleepScheduleModelDidChange:(id)arg2;

@end
