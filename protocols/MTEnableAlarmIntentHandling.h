
@protocol MTEnableAlarmIntentHandling <NSObject>

@required

- (void)handleEnableAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MTEnableAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTEnableAlarmIntentResponse *, void*

@optional

- (void)confirmEnableAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MTEnableAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTEnableAlarmIntentResponse *, void*

@end
