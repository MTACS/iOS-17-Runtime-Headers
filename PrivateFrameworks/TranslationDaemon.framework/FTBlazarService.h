
@interface FTBlazarService : OspreyChannel

- (id)performBatchTranslationWithDelegate:(id)arg1 requestBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)performMultiUserWithDelegate:(id)arg1 requestBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)performMultilingualWithDelegate:(id)arg1 requestBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)performServiceDiscovery:(id)arg1 requestBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)performSpeechTranslationWithDelegate:(id)arg1 requestBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)performTextToSpeechRouter:(id)arg1 requestBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)performTextToSpeechRouterStreamingWithDelegate:(id)arg1 requestBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;

@end
