
@protocol PlayLiveServiceIntentHandling <NSObject>

@required

- (void)handlePlayLiveService:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PlayLiveServiceIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PlayLiveServiceIntentResponse *, void*
- (void)handlePlayLiveService:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PlayLiveServiceIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PlayLiveServiceIntentResponse *, void*
- (void)resolveLiveServiceForPlayLiveService:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: PlayLiveServiceIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PlayLiveServiceLiveServiceResolutionResult *, void*
- (void)resolveLiveServiceForPlayLiveService:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: PlayLiveServiceIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PlayLiveServiceLiveServiceResolutionResult *, void*

@optional

- (void)confirmPlayLiveService:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PlayLiveServiceIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PlayLiveServiceIntentResponse *, void*
- (void)confirmPlayLiveService:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: PlayLiveServiceIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PlayLiveServiceIntentResponse *, void*

@end
