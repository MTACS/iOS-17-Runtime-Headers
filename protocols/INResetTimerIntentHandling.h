
@protocol INResetTimerIntentHandling <NSObject>

@required

- (void)handleResetTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INResetTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INResetTimerIntentResponse *, void*

@optional

- (void)confirmResetTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INResetTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INResetTimerIntentResponse *, void*
- (void)resolveResetMultipleForResetTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INResetTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*
- (void)resolveTargetTimerForResetTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INResetTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INTimerResolutionResult *, void*

@end
