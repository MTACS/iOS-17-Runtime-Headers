
@interface MTUserNotificationActionDispatcher : NSObject <UNUserNotificationCenterDelegate> {
    MTAlarmStorage * _alarmStorage;
    MTMetrics * _metrics;
    MTTimerStorage * _timerStorage;
}

@property (nonatomic, retain) MTAlarmStorage *alarmStorage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MTMetrics *metrics;
@property (readonly) Class superclass;
@property (nonatomic, retain) MTTimerStorage *timerStorage;

+ (unsigned long long)_alarmNotificationActionForUserNotificationAction:(id)arg1 category:(id)arg2;
+ (unsigned long long)_timerNotificationActionForUserNotificationAction:(id)arg1;

- (void).cxx_destruct;
- (void)_handleAlarmNotificationResponse:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_handleTimerNotificationResponse:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)alarmStorage;
- (void)handleAlarmNotificationIdentifier:(id)arg1 action:(unsigned long long)arg2 category:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithAlarmStorage:(id)arg1 timerStorage:(id)arg2;
- (id)metrics;
- (void)setAlarmStorage:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setTimerStorage:(id)arg1;
- (id)timerStorage;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
