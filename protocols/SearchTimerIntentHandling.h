
@protocol SearchTimerIntentHandling <NSObject>

@required

- (void)handleSearchTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SearchTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SearchTimerIntentResponse *, void*
- (void)handleSearchTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SearchTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SearchTimerIntentResponse *, void*
- (void)resolveAllAvailableTargetsForSearchTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SearchTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveAllAvailableTargetsForSearchTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SearchTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveAssociatedDeviceTargetForSearchTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SearchTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriDeviceResolutionResult *, void*
- (void)resolveAssociatedDeviceTargetForSearchTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SearchTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriDeviceResolutionResult *, void*

@optional

- (void)confirmSearchTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SearchTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SearchTimerIntentResponse *, void*
- (void)confirmSearchTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SearchTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SearchTimerIntentResponse *, void*

@end
