
@protocol MTDisableAlarmIntentHandling <NSObject>

@required

- (void)handleDisableAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MTDisableAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTDisableAlarmIntentResponse *, void*

@optional

- (void)confirmDisableAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MTDisableAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTDisableAlarmIntentResponse *, void*

@end
