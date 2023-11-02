
@protocol MTGetAlarmsIntentHandling <NSObject>

@required

- (void)handleGetAlarms:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MTGetAlarmsIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTGetAlarmsIntentResponse *, void*

@optional

- (void)confirmGetAlarms:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MTGetAlarmsIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTGetAlarmsIntentResponse *, void*

@end
