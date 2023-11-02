
@protocol DeepLaunchIntentHandling <NSObject>

@required

- (void)handleDeepLaunch:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DeepLaunchIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DeepLaunchIntentResponse *, void*
- (void)handleDeepLaunch:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DeepLaunchIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DeepLaunchIntentResponse *, void*
- (void)resolvePageNameForDeepLaunch:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: DeepLaunchIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DeepLaunchPageNameResolutionResult *, void*
- (void)resolvePageNameForDeepLaunch:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: DeepLaunchIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DeepLaunchPageNameResolutionResult *, void*
- (void)resolveRequestedApplicationForDeepLaunch:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: DeepLaunchIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DeepLaunchRequestedApplicationResolutionResult *, void*
- (void)resolveRequestedApplicationForDeepLaunch:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: DeepLaunchIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DeepLaunchRequestedApplicationResolutionResult *, void*

@optional

- (void)confirmDeepLaunch:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DeepLaunchIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DeepLaunchIntentResponse *, void*
- (void)confirmDeepLaunch:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DeepLaunchIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DeepLaunchIntentResponse *, void*

@end
