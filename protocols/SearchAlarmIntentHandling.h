
@protocol SearchAlarmIntentHandling <NSObject>

@required

- (void)handleSearchAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SearchAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SearchAlarmIntentResponse *, void*
- (void)handleSearchAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SearchAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SearchAlarmIntentResponse *, void*
- (void)resolveAlarmsForSearchAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SearchAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveAlarmsForSearchAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SearchAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (void)confirmSearchAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SearchAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SearchAlarmIntentResponse *, void*
- (void)confirmSearchAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SearchAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SearchAlarmIntentResponse *, void*

@end
