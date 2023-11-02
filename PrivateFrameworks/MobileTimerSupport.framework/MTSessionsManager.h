
@interface MTSessionsManager : NSObject {
    ACActivityCenter * _activityCenter;
    _TtC18MobileTimerSupport23MTAlarmSessionsProvider * _alarmProvider;
    _TtC18MobileTimerSupport23MTTimerSessionsProvider * _timerProvider;
}

@property (nonatomic, retain) ACActivityCenter *activityCenter;
@property (nonatomic, retain) _TtC18MobileTimerSupport23MTAlarmSessionsProvider *alarmProvider;
@property (nonatomic, retain) _TtC18MobileTimerSupport23MTTimerSessionsProvider *timerProvider;

+ (bool)supportsSessions;

- (void).cxx_destruct;
- (id)activeAlarmSessions;
- (id)activityCenter;
- (id)activityIdForAlarmId:(id)arg1;
- (id)activityIdForTimerId:(id)arg1;
- (id)alarmProvider;
- (id)contextWithAlarm:(id)arg1;
- (id)contextWithTimer:(id)arg1;
- (void)createSessionWithAlarm:(id)arg1;
- (void)createSessionWithAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)createSessionWithAlarm:(id)arg1 forAlert:(bool)arg2 completion:(id /* block */)arg3;
- (void)createSessionWithTimer:(id)arg1;
- (void)createSessionWithTimer:(id)arg1 completion:(id /* block */)arg2;
- (void)createSessionWithTimer:(id)arg1 forAlert:(bool)arg2 completion:(id /* block */)arg3;
- (id)currentAlertingSession;
- (void)finishSessionWithAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)finishSessionWithAlarmId:(id)arg1 completion:(id /* block */)arg2;
- (void)finishSessionWithTimer:(id)arg1;
- (void)finishSessionWithTimerId:(id)arg1;
- (void)finishSessionWithTimerId:(id)arg1 completion:(id /* block */)arg2;
- (bool)hasActiveAlarmSession;
- (bool)hasActiveTimerSession;
- (bool)hasAlarmSessionWithId:(id)arg1;
- (bool)hasTimerSessionWithId:(id)arg1;
- (id)init;
- (void)localSetup;
- (unsigned long long)numberOfActiveSessions;
- (unsigned long long)numberOfAvailableSessions;
- (void)restoreAlarmSessionsWithCompletion:(id /* block */)arg1;
- (void)restoreTimerSessionsWithCompletion:(id /* block */)arg1;
- (long long)sessionStateForTimer:(id)arg1;
- (void)setActivityCenter:(id)arg1;
- (void)setAlarmProvider:(id)arg1;
- (void)setTimerProvider:(id)arg1;
- (id)timerProvider;
- (void)updateSessionWithAlarm:(id)arg1;
- (void)updateSessionWithTimer:(id)arg1;

@end
