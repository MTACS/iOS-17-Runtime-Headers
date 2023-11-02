
@interface HDMHNotificationManager : NSObject <HDMHTypicalDayProviderObserver, HDProfileReadyObserver, HKMHSettingsManagerObserver> {
    NSDate * _currentDateOverride;
    HDPrimaryProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDRestorableAlarm * _scheduler;
    HKMHSettingsManager * _settingsManager;
    int  _significantTimeChangeToken;
    <HDMHTypicalDayProviding> * _typicalDayProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDRestorableAlarm *scheduler;
@property (readonly) Class superclass;
@property (nonatomic, retain) <HDMHTypicalDayProviding> *typicalDayProvider;

- (void).cxx_destruct;
- (id)_currentDate;
- (id)_endOfCalendarDayForDate:(id)arg1;
- (id)_notificationDateComponentsByCategory;
- (void)_queue_alarm:(id)arg1 didReceiveDueEvents:(id)arg2;
- (void)_queue_registerForSignificantTimeChanges;
- (void)_queue_removeAllScheduledNotificationsIfNotEnabled;
- (void)_queue_rescheduleNotifications;
- (void)_queue_start;
- (void)_removeAllDeliveredHDMHNotifications;
- (id)_requestFromAlarmEvent:(id)arg1;
- (void)_rescheduleNotifications;
- (void)_setCurrentDate:(id)arg1;
- (bool)_shouldEndOfDayBeShiftedToMidnightForDate:(id)arg1;
- (void)_significantTimeChangeOccurred;
- (id)_timeOfDayBasedNotifications;
- (void)didReceiveDayChangeNotification:(id)arg1;
- (id)initWithProfile:(id)arg1 settingsManager:(id)arg2;
- (id)initWithProfile:(id)arg1 settingsManager:(id)arg2 typicalDayProvider:(id)arg3;
- (void)invalidate;
- (void)profileDidBecomeReady:(id)arg1;
- (id)scheduledNotificationsWithError:(id*)arg1;
- (id)scheduler;
- (void)setTypicalDayProvider:(id)arg1;
- (void)settingsManagerDidUpdateNotificationSettings:(id)arg1;
- (void)typicalDayDidUpdate:(id)arg1;
- (id)typicalDayProvider;

@end
