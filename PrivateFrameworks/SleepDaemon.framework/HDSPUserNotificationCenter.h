
@interface HDSPUserNotificationCenter : NSObject <HDSPEnvironmentAware, HDSPSleepNotificationPublisher> {
    HDSPEnvironment * _environment;
    UNUserNotificationCenter * _notificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UNUserNotificationCenter *notificationCenter;
@property (readonly) Class superclass;

+ (id)_generateUniqueIdentifierForNotificationIdentifierPrefix:(id)arg1 eventDate:(id)arg2;
+ (id)_stringForEventDate:(id)arg1;

- (void).cxx_destruct;
- (id)_bedtimeReminderContent;
- (id)_chargingReminderBodyForAlarmEnabled:(bool)arg1 sleepTrackingEnabled:(bool)arg2;
- (id)_chargingReminderContentWithUserInfo:(id)arg1;
- (id)_contentByAddingCommonUserInfoTo:(id)arg1;
- (id)_localizedBedtimeOrWindDownReminderBodyWithKey:(id)arg1 embeddingTimeForEvent:(id)arg2;
- (id)_notificationContentForEventIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)_notificationIdentifierPrefixForEventIdentifier:(id)arg1;
- (id)_notificationRequestForEvent:(id)arg1 userInfo:(id)arg2;
- (id)_notificationRequestIdentifierForEvent:(id)arg1;
- (void)_publishNotificationRequest:(id)arg1;
- (id)_wakeDetectionAlertBodyForAlarmEnabled:(bool)arg1 sleepModeOn:(bool)arg2;
- (id)_wakeDetectionAlertTitleForAlarmEnabled:(bool)arg1 sleepModeOn:(bool)arg2;
- (id)_wakeDetectionContentWithUserInfo:(id)arg1;
- (id)_wakeUpResultsContentWithUserInfo:(id)arg1;
- (id)_windDownReminderBodyContent;
- (id)_windDownReminderContent;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 notificationCenter:(id)arg2;
- (id)notificationCenter;
- (void)publishNotificationForEvent:(id)arg1 userInfo:(id)arg2;
- (void)tearDownNotificationForEventIdentifier:(id)arg1;
- (void)tearDownNotifications;

@end
