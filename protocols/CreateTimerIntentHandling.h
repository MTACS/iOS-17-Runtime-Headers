
@protocol CreateTimerIntentHandling <NSObject>

@required

- (void)handleCreateTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CreateTimerIntentResponse *, void*
- (void)handleCreateTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CreateTimerIntentResponse *, void*
- (void)resolveAllAvailableTargetsForCreateTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: CreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveAllAvailableTargetsForCreateTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: CreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveAssociatedDeviceTargetForCreateTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: CreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriDeviceResolutionResult *, void*
- (void)resolveAssociatedDeviceTargetForCreateTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: CreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriDeviceResolutionResult *, void*
- (void)resolveDurationNumberForCreateTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: CreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INTimeIntervalResolutionResult *, void*
- (void)resolveDurationNumberForCreateTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: CreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INTimeIntervalResolutionResult *, void*
- (void)resolveLabelForCreateTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: CreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSpeakableStringResolutionResult *, void*
- (void)resolveLabelForCreateTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: CreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSpeakableStringResolutionResult *, void*
- (void)resolveTypeForCreateTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: CreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriTimerTypeResolutionResult *, void*
- (void)resolveTypeForCreateTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: CreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriTimerTypeResolutionResult *, void*

@optional

- (void)confirmCreateTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CreateTimerIntentResponse *, void*
- (void)confirmCreateTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CreateTimerIntentResponse *, void*

@end
