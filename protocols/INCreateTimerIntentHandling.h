
@protocol INCreateTimerIntentHandling <NSObject>

@required

- (void)handleCreateTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INCreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INCreateTimerIntentResponse *, void*

@optional

- (void)confirmCreateTimer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INCreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INCreateTimerIntentResponse *, void*
- (void)resolveDurationForCreateTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INCreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INTimeIntervalResolutionResult *, void*
- (void)resolveLabelForCreateTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INCreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INCreateTimerLabelResolutionResult *, void*
- (void)resolveTypeForCreateTimer:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INCreateTimerIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INTimerTypeResolutionResult *, void*

@end
