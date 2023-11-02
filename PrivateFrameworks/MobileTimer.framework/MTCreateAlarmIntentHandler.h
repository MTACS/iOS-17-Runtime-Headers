
@interface MTCreateAlarmIntentHandler : MTAlarmIntentHandler <MTCreateAlarmIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_alarmUserActivityWithIntent:(id)arg1;
- (void)confirmMTCreateAlarm:(id)arg1 completion:(id /* block */)arg2;
- (id)defaultRepeatScheduleForMTCreateAlarm:(id)arg1;
- (void)handleMTCreateAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)provideRepeatScheduleOptionsForMTCreateAlarm:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveDateComponentsForMTCreateAlarm:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveLabelForMTCreateAlarm:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveRepeatScheduleForMTCreateAlarm:(id)arg1 withCompletion:(id /* block */)arg2;

@end
