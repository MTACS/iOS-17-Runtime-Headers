
@protocol CreateAlarmIntentHandling <NSObject>

@required

- (void)handleCreateAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CreateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CreateAlarmIntentResponse *, void*
- (void)handleCreateAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CreateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CreateAlarmIntentResponse *, void*
- (void)resolveTimeForCreateAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: CreateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDateComponentsResolutionResult *, void*
- (void)resolveTimeForCreateAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: CreateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDateComponentsResolutionResult *, void*

@optional

- (void)confirmCreateAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CreateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CreateAlarmIntentResponse *, void*
- (void)confirmCreateAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CreateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CreateAlarmIntentResponse *, void*

@end
