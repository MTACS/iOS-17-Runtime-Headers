
@protocol MTUpdateAlarmIntentHandling <NSObject>

@required

- (void)handleUpdateAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MTUpdateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTUpdateAlarmIntentResponse *, void*

@optional

- (void)confirmUpdateAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MTUpdateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTUpdateAlarmIntentResponse *, void*

@end
