
@interface HDSPSleepNotificationManager : NSObject <HDSPEnvironmentAware, HDSPGoodMorningAlertObserver, HDSPSleepActionObserver, HDSPSleepEventHandler, HDSPSleepEventProvider, HDSPSleepNotificationPublisher, HDSPSleepScheduleModelObserver, HDSPSleepScheduleStateObserver, HDSPTimeChangeObserver> {
    HDSPEnvironment * _environment;
    NSArray * _notificationPublishers;
    <HDSPSleepEventDelegate> * _sleepEventDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *notificationPublishers;
@property (nonatomic, readonly, copy) NSString *providerIdentifier;
@property (nonatomic) <HDSPSleepEventDelegate> *sleepEventDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bedtimeNotificationEventAfterDate:(id)arg1;
- (void)_bedtimeOrWindDownNotificationEventIsDue:(id)arg1;
- (bool)_bedtimeOrWindDownNotificationsEnabled;
- (void)_rescheduleEvents;
- (id)_sleepScheduleModel;
- (void)_tearDownBedtimeReminder;
- (void)_tearDownChargingReminder;
- (void)_tearDownMorningNotification;
- (void)_tearDownWakeDetectionNotification;
- (void)_tearDownWindDownReminder;
- (id)_windDownNotificationEventAfterDate:(id)arg1;
- (void)bedtimeReminderWasConfirmed;
- (void)bedtimeReminderWasDismissed;
- (void)dismissAlertForGoodMorning;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)environmentWillBecomeReady:(id)arg1;
- (id)eventIdentifiers;
- (void)goodMorningWasDismissed;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 notificationPublishers:(id)arg2;
- (id)notificationPublishers;
- (void)presentAlertForGoodMorning;
- (id)providerIdentifier;
- (void)publishNotificationForEvent:(id)arg1 userInfo:(id)arg2;
- (void)setSleepEventDelegate:(id)arg1;
- (void)significantTimeChangeDetected:(id)arg1;
- (id)sleepEventDelegate;
- (void)sleepEventIsDue:(id)arg1;
- (void)sleepScheduleModelManager:(id)arg1 didUpdateSleepSchedule:(id)arg2;
- (void)sleepScheduleStateDidChange:(unsigned long long)arg1 previousState:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)tearDownNotificationForEventIdentifier:(id)arg1;
- (void)tearDownNotifications;
- (id)upcomingEventsDueAfterDate:(id)arg1;
- (void)wakeNotificationWasConfirmed;
- (void)wakeNotificationWasDismissed;

@end
