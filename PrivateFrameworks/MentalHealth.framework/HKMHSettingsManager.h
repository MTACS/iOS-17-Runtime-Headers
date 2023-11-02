
@interface HKMHSettingsManager : NSObject {
    NSArray * _allSettingsToObserve;
    HKObserverSet * _observers;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, retain) NSArray *customReminderSchedule;
@property (nonatomic) bool endOfDayNotificationsEnabled;
@property (nonatomic) bool middayNotificationsEnabled;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (void)_notificationSettingsDidUpdate;
- (void)_setTestDefaults:(id)arg1;
- (void)_startObservingDefaults;
- (void)_stopObservingAllDefaults;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (id)customReminderSchedule;
- (void)dealloc;
- (bool)endOfDayNotificationsEnabled;
- (bool)hasAnyStateOfMindReminderEnabled;
- (bool)hasEverEnabledAStateOfMindReminderNotification;
- (id)init;
- (id)initWithUserDefaults:(id)arg1;
- (bool)middayNotificationsEnabled;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeObserver:(id)arg1;
- (void)setCustomReminderSchedule:(id)arg1;
- (void)setEndOfDayNotificationsEnabled:(bool)arg1;
- (void)setMiddayNotificationsEnabled:(bool)arg1;
- (void)setReminders:(bool)arg1;
- (id)userDefaults;

@end
