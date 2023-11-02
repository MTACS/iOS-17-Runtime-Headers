
@protocol MTCreateAlarmIntentHandling <NSObject>

@required

- (void)handleMTCreateAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MTCreateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTCreateAlarmIntentResponse *, void*
- (void)provideRepeatScheduleOptionsCollectionForMTCreateAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: MTCreateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INObjectCollection *, NSError *, void*
- (void)resolveDateComponentsForMTCreateAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTCreateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDateComponentsResolutionResult *, void*
- (void)resolveLabelForMTCreateAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTCreateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*
- (void)resolveRepeatScheduleForMTCreateAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: MTCreateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@optional

- (void)confirmMTCreateAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: MTCreateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTCreateAlarmIntentResponse *, void*
- (NSArray *)defaultRepeatScheduleForMTCreateAlarm:(MTCreateAlarmIntent *)arg1;
- (void)provideRepeatScheduleOptionsForMTCreateAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: MTCreateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
