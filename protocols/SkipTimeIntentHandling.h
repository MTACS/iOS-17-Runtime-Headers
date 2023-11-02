
@protocol SkipTimeIntentHandling <NSObject>

@required

- (void)handleSkipTime:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SkipTimeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SkipTimeIntentResponse *, void*
- (void)handleSkipTime:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SkipTimeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SkipTimeIntentResponse *, void*
- (void)resolveDevicesForSkipTime:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SkipTimeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveDevicesForSkipTime:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SkipTimeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveDurationForSkipTime:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SkipTimeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SignedDurationResolutionResult *, void*
- (void)resolveDurationForSkipTime:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SkipTimeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SignedDurationResolutionResult *, void*

@optional

- (void)confirmSkipTime:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SkipTimeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SkipTimeIntentResponse *, void*
- (void)confirmSkipTime:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SkipTimeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SkipTimeIntentResponse *, void*

@end
