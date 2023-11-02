
@protocol INResumeTimerIntentHandling <NSObject>

@required

- (void)handleResumeTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INResumeTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INResumeTimerIntentResponse *, void*

@optional

- (void)confirmResumeTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INResumeTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INResumeTimerIntentResponse *, void*
- (void)resolveResumeMultipleForResumeTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INResumeTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*
- (void)resolveTargetTimerForResumeTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INResumeTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INTimerResolutionResult *, void*

@end
