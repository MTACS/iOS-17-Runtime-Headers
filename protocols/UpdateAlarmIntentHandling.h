
@protocol UpdateAlarmIntentHandling <NSObject>

@required

- (void)handleUpdateAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: UpdateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UpdateAlarmIntentResponse *, void*
- (void)handleUpdateAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: UpdateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UpdateAlarmIntentResponse *, void*
- (void)resolveAlarmForUpdateAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: UpdateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UpdateAlarmAlarmResolutionResult *, void*
- (void)resolveAlarmForUpdateAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: UpdateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UpdateAlarmAlarmResolutionResult *, void*
- (void)resolveProposedLabelForUpdateAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: UpdateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*
- (void)resolveProposedLabelForUpdateAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: UpdateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*
- (void)resolveProposedMeridiemSetByUserForUpdateAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: UpdateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*
- (void)resolveProposedMeridiemSetByUserForUpdateAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: UpdateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*
- (void)resolveProposedTimeForUpdateAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: UpdateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDateComponentsResolutionResult *, void*
- (void)resolveProposedTimeForUpdateAlarm:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: UpdateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDateComponentsResolutionResult *, void*

@optional

- (void)confirmUpdateAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: UpdateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UpdateAlarmIntentResponse *, void*
- (void)confirmUpdateAlarm:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: UpdateAlarmIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UpdateAlarmIntentResponse *, void*

@end
