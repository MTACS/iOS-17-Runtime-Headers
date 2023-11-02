
@interface ICMusicKitURLResponseHandler : ICURLResponseHandler

- (void)_invalidateDeveloperTokenForInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_invalidateUserTokenForInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_updateRequest:(id)arg1 forProcessedResponseOfStoreURLRequest:(id)arg2;
- (void)processCompletedResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)processInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
