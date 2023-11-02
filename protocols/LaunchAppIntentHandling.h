
@protocol LaunchAppIntentHandling <NSObject>

@required

- (void)handleLaunchApp:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: LaunchAppIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LaunchAppIntentResponse *, void*
- (void)handleLaunchApp:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: LaunchAppIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LaunchAppIntentResponse *, void*
- (void)resolveApplicationForLaunchApp:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: LaunchAppIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LaunchAppApplicationResolutionResult *, void*
- (void)resolveApplicationForLaunchApp:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: LaunchAppIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LaunchAppApplicationResolutionResult *, void*

@optional

- (void)confirmLaunchApp:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: LaunchAppIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LaunchAppIntentResponse *, void*
- (void)confirmLaunchApp:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: LaunchAppIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LaunchAppIntentResponse *, void*

@end
