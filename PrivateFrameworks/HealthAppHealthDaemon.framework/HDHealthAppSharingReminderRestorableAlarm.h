
@interface HDHealthAppSharingReminderRestorableAlarm : NSObject <HDHealthAppRestorableAlarmHandler> {
    HDDaemon * _daemon;
    _TtC21HealthAppHealthDaemon30HDHealthAppNotificationManager * _notificationManager;
    HDKeyValueDomain * _sharingKeyValueDomain;
    NSDate * _unitTest_currentDate;
    UNUserNotificationCenter * _unitTest_userNotificationCenter;
}

@property (nonatomic, retain) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *eventIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *unitTest_currentDate;
@property (nonatomic, retain) UNUserNotificationCenter *unitTest_userNotificationCenter;

- (void).cxx_destruct;
- (void)_handleCompletionWithAlarmEvent:(id)arg1 success:(bool)arg2 error:(id)arg3 restorableAlarmManager:(id)arg4 completion:(id /* block */)arg5;
- (id)currentDate;
- (id)daemon;
- (id)eventIdentifier;
- (void)handleAlarmEvent:(id)arg1 restorableAlarmManager:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithDaemon:(id)arg1;
- (id)nextSharingReminderDateFromDate:(id)arg1;
- (void)removeScheduledAlarmWithRestorableAlarmManager:(id)arg1;
- (void)scheduleAlarmWithFallbackDate:(id)arg1 restorableAlarmManager:(id)arg2;
- (void)setDaemon:(id)arg1;
- (bool)setSharingReminderDate:(id)arg1 error:(id*)arg2;
- (void)setUnitTest_currentDate:(id)arg1;
- (void)setUnitTest_userNotificationCenter:(id)arg1;
- (id)sharingReminderDate;
- (id)sharingReminderFallbackNotificationDate:(id)arg1;
- (id)sharingReminderRefreshIntervalDateComponents;
- (id)unitTest_currentDate;
- (id)unitTest_userNotificationCenter;

@end
