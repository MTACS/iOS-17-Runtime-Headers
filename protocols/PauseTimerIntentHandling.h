
@protocol PauseTimerIntentHandling <NSObject>

@required

- (void)handlePauseTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PauseTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PauseTimerIntentResponse *, void*
- (void)handlePauseTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PauseTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PauseTimerIntentResponse *, void*
- (void)resolveAllAvailableTargetsForPauseTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: PauseTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveAllAvailableTargetsForPauseTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: PauseTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveAssociatedDeviceTargetForPauseTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: PauseTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriDeviceResolutionResult *, void*
- (void)resolveAssociatedDeviceTargetForPauseTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: PauseTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriDeviceResolutionResult *, void*
- (void)resolveTargetTimerForPauseTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: PauseTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriTimerResolutionResult *, void*
- (void)resolveTargetTimerForPauseTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: PauseTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriTimerResolutionResult *, void*

@optional

- (void)confirmPauseTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PauseTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PauseTimerIntentResponse *, void*
- (void)confirmPauseTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PauseTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PauseTimerIntentResponse *, void*

@end
