
@protocol DeleteTimerIntentHandling <NSObject>

@required

- (void)handleDeleteTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DeleteTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DeleteTimerIntentResponse *, void*
- (void)handleDeleteTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DeleteTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DeleteTimerIntentResponse *, void*
- (void)resolveAllAvailableTargetsForDeleteTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: DeleteTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveAllAvailableTargetsForDeleteTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: DeleteTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveAssociatedDeviceTargetForDeleteTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: DeleteTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriDeviceResolutionResult *, void*
- (void)resolveAssociatedDeviceTargetForDeleteTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: DeleteTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriDeviceResolutionResult *, void*
- (void)resolveTargetTimerForDeleteTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: DeleteTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriTimerResolutionResult *, void*
- (void)resolveTargetTimerForDeleteTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: DeleteTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriTimerResolutionResult *, void*

@optional

- (void)confirmDeleteTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DeleteTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DeleteTimerIntentResponse *, void*
- (void)confirmDeleteTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DeleteTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DeleteTimerIntentResponse *, void*

@end
