
@protocol INDeleteTimerIntentHandling <NSObject>

@required

- (void)handleDeleteTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INDeleteTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDeleteTimerIntentResponse *, void*

@optional

- (void)confirmDeleteTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INDeleteTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDeleteTimerIntentResponse *, void*
- (void)resolveDeleteMultipleForDeleteTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INDeleteTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBooleanResolutionResult *, void*
- (void)resolveTargetTimerForDeleteTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INDeleteTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INTimerResolutionResult *, void*

@end
