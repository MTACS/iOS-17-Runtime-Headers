
@interface MTGetAlarmsIntentHandler : MTAlarmIntentHandler <MTGetAlarmsIntentHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)confirmGetAlarms:(id)arg1 completion:(id /* block */)arg2;
- (void)handleGetAlarms:(id)arg1 completion:(id /* block */)arg2;

@end
