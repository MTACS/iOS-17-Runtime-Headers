
@protocol INSearchForTimersIntentHandling <NSObject>

@required

- (void)handleSearchForTimers:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSearchForTimersIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSearchForTimersIntentResponse *, void*

@optional

- (void)confirmSearchForTimers:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSearchForTimersIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSearchForTimersIntentResponse *, void*
- (void)resolveDurationForSearchForTimers:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSearchForTimersIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INTimeIntervalResolutionResult *, void*
- (void)resolveLabelForSearchForTimers:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSearchForTimersIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSpeakableStringResolutionResult *, void*
- (void)resolveStateForSearchForTimers:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSearchForTimersIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INTimerStateResolutionResult *, void*
- (void)resolveTypeForSearchForTimers:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSearchForTimersIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INTimerTypeResolutionResult *, void*

@end
