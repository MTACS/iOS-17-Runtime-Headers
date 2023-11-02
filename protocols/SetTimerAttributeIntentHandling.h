
@protocol SetTimerAttributeIntentHandling <NSObject>

@required

- (void)handleSetTimerAttribute:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetTimerAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetTimerAttributeIntentResponse *, void*
- (void)handleSetTimerAttribute:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetTimerAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetTimerAttributeIntentResponse *, void*
- (void)resolveAllAvailableTargetsForSetTimerAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetTimerAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveAllAvailableTargetsForSetTimerAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetTimerAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveAssociatedDeviceTargetForSetTimerAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetTimerAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriDeviceResolutionResult *, void*
- (void)resolveAssociatedDeviceTargetForSetTimerAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetTimerAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriDeviceResolutionResult *, void*
- (void)resolveTargetTimerForSetTimerAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetTimerAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriTimerResolutionResult *, void*
- (void)resolveTargetTimerForSetTimerAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetTimerAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriTimerResolutionResult *, void*
- (void)resolveToDurationForSetTimerAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetTimerAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INTimeIntervalResolutionResult *, void*
- (void)resolveToDurationForSetTimerAttribute:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetTimerAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INTimeIntervalResolutionResult *, void*

@optional

- (void)confirmSetTimerAttribute:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetTimerAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetTimerAttributeIntentResponse *, void*
- (void)confirmSetTimerAttribute:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetTimerAttributeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetTimerAttributeIntentResponse *, void*

@end
