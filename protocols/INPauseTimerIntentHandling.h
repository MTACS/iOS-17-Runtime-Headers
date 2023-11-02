
@protocol INPauseTimerIntentHandling <NSObject>

@required

- (void)handlePauseTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INPauseTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INPauseTimerIntentResponse *, void*

@optional

- (void)confirmPauseTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INPauseTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INPauseTimerIntentResponse *, void*
- (void)resolvePauseMultipleForPauseTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INPauseTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*
- (void)resolveTargetTimerForPauseTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INPauseTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INTimerResolutionResult *, void*

@end
