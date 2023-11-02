
@interface MTUserNotificationCenter : NSObject <MTNotificationCenter> {
    MTUserNotificationActionDispatcher * _actionHandler;
    NSDictionary * _notificationCenters;
}

@property (nonatomic, retain) MTUserNotificationActionDispatcher *actionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *notificationCenters;
@property (readonly) Class superclass;

+ (id)_allIdentifiersForAlarm:(id)arg1;
+ (id)_allIdentifiersForAlarm:(id)arg1 includeMainIdentifier:(bool)arg2;
+ (id)_allIdentifiersForAlarm:(id)arg1 includeMainIdentifier:(bool)arg2 includeSnooze:(bool)arg3;
+ (id)_durationComponentsFormatter;
+ (id)_goToBedIdentifier:(id)arg1;
+ (id)_mutableContentForScheduledAlarmWithCommonSettings:(id)arg1;
+ (void)_setGoToBedTitleAndBody:(id)arg1 forGoToBedNotification:(id)arg2;
+ (void)_setSnoozeCountdownTitleAndBody:(id)arg1 forSnoozeCountdownNotification:(id)arg2;
+ (void)_setSpecificContent:(id)arg1 forGoToBedNotification:(id)arg2;
+ (void)_setSpecificContent:(id)arg1 forNormalScheduledAlarm:(id)arg2;
+ (void)_setSpecificContent:(id)arg1 forScheduledAlarm:(id)arg2;
+ (void)_setSpecificContent:(id)arg1 forSnoozeCountdownNotification:(id)arg2;
+ (id)_snoozeCountdownIdentifier:(id)arg1;
+ (id)_timeFormatter;
+ (id)_wakeUpAlarmStringForAlarm:(id)arg1;
+ (id)categoryForScheduledAlarm:(id)arg1;
+ (id)categoryForScheduledTimer:(id)arg1;
+ (id)contentForScheduledAlarm:(id)arg1;
+ (id)contentForScheduledTimer:(id)arg1;
+ (id)launchURLForScheme:(id)arg1;
+ (id)notificationPrefixes;
+ (id)requestIdentifierForScheduledAlarm:(id)arg1;
+ (id)userInfoForAlarm:(id)arg1;
+ (id)userInfoForTimer:(id)arg1;

- (void).cxx_destruct;
- (id)_notificationCenterForScheduledAlarm:(id)arg1;
- (id)_notificationCenterForScheduledTimer;
- (id)actionHandler;
- (id)alarmCategories;
- (id)bedtimeCategories;
- (unsigned long long)conditionalAlertDestination;
- (unsigned long long)conditionalListDestination;
- (unsigned long long)conditionalLockScreenDestination;
- (void)dismissNotificationsForAlarm:(id)arg1;
- (void)dismissNotificationsForAlarm:(id)arg1 dismissAction:(unsigned long long)arg2;
- (void)dismissNotificationsForAlarm:(id)arg1 includeMainIdentifier:(bool)arg2;
- (void)dismissNotificationsForAlarm:(id)arg1 includeMainIdentifier:(bool)arg2 includeSnooze:(bool)arg3;
- (void)dismissNotificationsForAlarm:(id)arg1 includeSnooze:(bool)arg2;
- (void)dismissNotificationsForTimer:(id)arg1;
- (void)dismissNotificationsWithIdentifiers:(id)arg1;
- (void)dismissRelatedNotificationsForScheduledAlarm:(id)arg1;
- (id)init;
- (void)interruptAudioAndLockDeviceWithCompletionBlock:(id /* block */)arg1;
- (id)notificationCategories;
- (id)notificationCenters;
- (void)postBedtimeNotificationForAlarm:(id)arg1 date:(id)arg2;
- (void)postNotificationForScheduledAlarm:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)postNotificationForScheduledAlarm:(id)arg1 content:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)postNotificationForScheduledTimer:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)registerActionHandler:(id)arg1;
- (void)removeAllDeliveredNotifications;
- (void)setActionHandler:(id)arg1;
- (void)setNotificationCenters:(id)arg1;
- (void)setupNotificationCenter;
- (void)tearDownNotificationsForEventIdentifiers:(id)arg1;
- (id)timerCategories;

@end
