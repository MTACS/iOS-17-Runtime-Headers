
@interface FISleepDataProvider : NSObject <HKSPSleepStoreObserver> {
    unsigned long long  _currentSleepScheduleState;
    <FISleepDataProviderDelegate> * _delegate;
    bool  _isGoodMorningAlertNotificationEnabled;
    bool  _isUserAwake;
    NSDate * _lastAlarmWakeUpDate;
    NSDate * _lastGoodMorningDismissedDate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HKSPSleepStore * _sleepStore;
    FISleepUserDay * _sleepUserDay;
    NSUserDefaults * _userDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isGoodMorningAlertNotificationEnabled;
@property (nonatomic) bool isUserAwake;
@property (nonatomic, copy) NSDate *lastAlarmWakeUpDate;
@property (nonatomic, copy) NSDate *lastGoodMorningDismissedDate;
@property (nonatomic, retain) FISleepUserDay *sleepUserDay;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cacheSleepUserDay:(id)arg1;
- (void)_clearCurrentSleepScheduleState;
- (void)_clearSleepUserDay;
- (id)_fetchCachedSleepUserDay;
- (void)_fetchGoodMorningAlertNotificationEnabled;
- (void)_fetchLastAlarmWakeUpDate;
- (void)_fetchLastGoodMorningDismissedDate;
- (void)_initialLoadSleepUserDay;
- (bool)_isDate:(id)arg1 within24HoursOfDate:(id)arg2;
- (void)_setEmptySleepUserDay:(id)arg1;
- (void)_setSleepUserDay:(id)arg1;
- (void)_setSleepUserDayWithStartOfDay:(id)arg1 endOfDay:(id)arg2;
- (void)_setUserDefaults:(id)arg1;
- (void)_updateCurrentSleepScheduleState;
- (bool)_updateGoodMorningAlertNotificationEnabledIfNeeded:(bool)arg1;
- (bool)_updateLastAlarmWakeUpDateIfNeeded:(id)arg1;
- (bool)_updateLastGoodMorningDismissedDateIfNeeded:(id)arg1;
- (void)_updateSleepUserDay;
- (void)_updateSleepUserDayFromWakeUp:(id)arg1 currentDate:(id)arg2;
- (void)_updateSleepUserDayFromWindDownOrBedtime:(id)arg1 currentDate:(id)arg2;
- (void)activate;
- (void)dealloc;
- (id)initWithSleepStore:(id)arg1 delegate:(id)arg2;
- (bool)isGoodMorningAlertNotificationEnabled;
- (bool)isUserAwake;
- (id)lastAlarmWakeUpDate;
- (id)lastGoodMorningDismissedDate;
- (void)setIsGoodMorningAlertNotificationEnabled:(bool)arg1;
- (void)setIsUserAwake:(bool)arg1;
- (void)setLastAlarmWakeUpDate:(id)arg1;
- (void)setLastGoodMorningDismissedDate:(id)arg1;
- (void)setSleepUserDay:(id)arg1;
- (void)sleepStore:(id)arg1 sleepEventRecordDidChange:(id)arg2;
- (void)sleepStore:(id)arg1 sleepModeOnDidChange:(bool)arg2;
- (void)sleepStore:(id)arg1 sleepScheduleDidChange:(id)arg2;
- (void)sleepStore:(id)arg1 sleepScheduleModelDidChange:(id)arg2;
- (void)sleepStore:(id)arg1 sleepScheduleStateDidChange:(unsigned long long)arg2;
- (void)sleepStore:(id)arg1 sleepSettingsDidChange:(id)arg2;
- (id)sleepUserDay;

@end
