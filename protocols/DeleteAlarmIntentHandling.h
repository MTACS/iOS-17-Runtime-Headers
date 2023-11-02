
@protocol DeleteAlarmIntentHandling <NSObject>

@required

- (void)handleDeleteAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DeleteAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DeleteAlarmIntentResponse *, void*
- (void)handleDeleteAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DeleteAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DeleteAlarmIntentResponse *, void*
- (void)resolveAlarmsForDeleteAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: DeleteAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveAlarmsForDeleteAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: DeleteAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (void)confirmDeleteAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DeleteAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DeleteAlarmIntentResponse *, void*
- (void)confirmDeleteAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DeleteAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DeleteAlarmIntentResponse *, void*

@end
