
@protocol INCreateAlarmIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (INAlarm *)createdAlarm;
- (void)setCreatedAlarm:(INAlarm *)arg1;
- (void)setSuccessCode:(long long)arg1;
- (long long)successCode;

@end
