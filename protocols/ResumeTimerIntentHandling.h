
@protocol ResumeTimerIntentHandling <NSObject>

@required

- (void)handleResumeTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ResumeTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ResumeTimerIntentResponse *, void*
- (void)handleResumeTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ResumeTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ResumeTimerIntentResponse *, void*
- (void)resolveAllAvailableTargetsForResumeTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ResumeTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveAllAvailableTargetsForResumeTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ResumeTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveAssociatedDeviceTargetForResumeTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ResumeTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriDeviceResolutionResult *, void*
- (void)resolveAssociatedDeviceTargetForResumeTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ResumeTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriDeviceResolutionResult *, void*
- (void)resolveTargetTimerForResumeTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ResumeTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriTimerResolutionResult *, void*
- (void)resolveTargetTimerForResumeTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ResumeTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriTimerResolutionResult *, void*

@optional

- (void)confirmResumeTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ResumeTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ResumeTimerIntentResponse *, void*
- (void)confirmResumeTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ResumeTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ResumeTimerIntentResponse *, void*

@end
