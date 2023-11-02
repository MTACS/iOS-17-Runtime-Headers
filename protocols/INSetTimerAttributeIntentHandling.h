
@protocol INSetTimerAttributeIntentHandling <NSObject>

@required

- (void)handleSetTimerAttribute:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSetTimerAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSetTimerAttributeIntentResponse *, void*

@optional

- (void)confirmSetTimerAttribute:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSetTimerAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSetTimerAttributeIntentResponse *, void*
- (void)resolveTargetTimerForSetTimerAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetTimerAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSetTimerAttributeTargetTimerResolutionResult *, void*
- (void)resolveToDurationForSetTimerAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetTimerAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INTimeIntervalResolutionResult *, void*
- (void)resolveToLabelForSetTimerAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetTimerAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSpeakableStringResolutionResult *, void*

@end
