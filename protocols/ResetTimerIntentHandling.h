
@protocol ResetTimerIntentHandling <NSObject>

@required

- (void)handleResetTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ResetTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ResetTimerIntentResponse *, void*
- (void)handleResetTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ResetTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ResetTimerIntentResponse *, void*
- (void)resolveAllAvailableTargetsForResetTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ResetTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveAllAvailableTargetsForResetTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ResetTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveAssociatedDeviceTargetForResetTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ResetTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriDeviceResolutionResult *, void*
- (void)resolveAssociatedDeviceTargetForResetTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ResetTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriDeviceResolutionResult *, void*
- (void)resolveTargetTimerForResetTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ResetTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriTimerResolutionResult *, void*
- (void)resolveTargetTimerForResetTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ResetTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriTimerResolutionResult *, void*

@optional

- (void)confirmResetTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ResetTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ResetTimerIntentResponse *, void*
- (void)confirmResetTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ResetTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ResetTimerIntentResponse *, void*

@end
