
@interface FTTtsService : OspreyChannel

- (void)performTextToSpeech:(id)arg1 requestBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)performTextToSpeechSpeechFeature:(id)arg1 requestBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)performTextToSpeechStreamingWithDelegate:(id)arg1 requestBuilder:(id /* block */)arg2 completion:(id /* block */)arg3;

@end
