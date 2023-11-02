
@interface MTToggleAlarmIntentHandler : MTAlarmIntentHandler <MTDisableAlarmIntentHandling, MTEnableAlarmIntentHandling, MTToggleAlarmIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_alarmUserActivityWithDisableIntent:(id)arg1;
- (id)_alarmUserActivityWithEnableIntent:(id)arg1;
- (void)_toggleAlarm:(id)arg1 alarmIDString:(id)arg2 completion:(id /* block */)arg3;
- (void)confirmDisableAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmEnableAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmMTDisableAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmMTEnableAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmToggleAlarm:(id)arg1 completion:(id /* block */)arg2;
- (bool)getEnableStateForAlarm:(id)arg1;
- (void)handleDisableAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)handleEnableAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)handleMTDisableAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)handleMTEnableAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)handleToggleAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)provideAlarmOptionsForToggleAlarm:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveAlarmForToggleAlarm:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveOperationForToggleAlarm:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveStateForToggleAlarm:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)updateEnableStateForAlarm:(id)arg1 enabled:(bool)arg2;

@end
