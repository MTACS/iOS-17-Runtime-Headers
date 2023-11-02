
@interface HDSPCFUserNotificationCenter : NSObject <HDSPEnvironmentAware, HDSPSleepNotificationPublisher, HDSPSource> {
    HDSPEnvironment * _environment;
    <HKSPMutexProvider> * _mutexProvider;
    NSMutableDictionary * _notifications;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool dontNotify;
@property (nonatomic, readonly) bool dontSync;
@property (nonatomic, readonly) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HKSPMutexProvider> *mutexProvider;
@property (nonatomic, readonly) NSMutableDictionary *notifications;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_confirmTextForForAlarmEnabled:(bool)arg1 sleepModeOn:(bool)arg2;
- (id)_ignoreTextForForAlarmEnabled:(bool)arg1 sleepModeOn:(bool)arg2;
- (void)_publishNotificationWithIdentifier:(id)arg1 title:(id)arg2 message:(id)arg3 defaultButtonTitle:(id)arg4 otherButtonTitle:(id)arg5 bypassDND:(bool)arg6 aboveLockScreen:(bool)arg7 actionHandler:(id /* block */)arg8;
- (void)_publishWakeDetectionNotificationForUserInfo:(id)arg1;
- (id)_wakeDetectionAlertBodyForAlarmEnabled:(bool)arg1 sleepModeOn:(bool)arg2;
- (id)_wakeDetectionAlertTitleForAlarmEnabled:(bool)arg1 sleepModeOn:(bool)arg2;
- (void)_withLock:(id /* block */)arg1;
- (id)environment;
- (void)environmentDidBecomeReady:(id)arg1;
- (void)handleResponse:(unsigned long long)arg1 forUserNotification:(id)arg2;
- (id)initWithEnvironment:(id)arg1;
- (id)mutexProvider;
- (id)notifications;
- (void)publishNotificationForEvent:(id)arg1 userInfo:(id)arg2;
- (id)sourceIdentifier;
- (void)tearDownNotificationForEventIdentifier:(id)arg1;
- (void)tearDownNotifications;

@end
