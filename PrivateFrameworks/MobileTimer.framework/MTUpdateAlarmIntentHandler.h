
@interface MTUpdateAlarmIntentHandler : MTAlarmIntentHandler <MTUpdateAlarmIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_alarmUserActivityWithIntent:(id)arg1;
- (void)confirmMTUpdateAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)confirmUpdateAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)handleMTUpdateAlarm:(id)arg1 completion:(id /* block */)arg2;
- (void)handleUpdateAlarm:(id)arg1 completion:(id /* block */)arg2;

@end
