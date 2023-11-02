
@protocol SVXClientSpeechSynthesisServicing <NSObject>

@required

- (void)cancelPendingRequest:(SVXSpeechSynthesisRequest *)arg1;
- (void)enqueueRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SVXSpeechSynthesisRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SVXSpeechSynthesisResult *, void*
- (void)prewarmRequest:(SVXSpeechSynthesisRequest *)arg1;
- (void)stopRequest:(SVXSpeechSynthesisRequest *)arg1;
- (void)synthesizeRequest:(void *)arg1 audioChunkHandler:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 14: SVXSpeechSynthesisRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SiriTTSAudioData *, unsigned long long, void*, id /* block */, void*, void, id /* block */, SVXSpeechSynthesisResult *, void*
- (void)synthesizeRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SVXSpeechSynthesisRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SVXSpeechSynthesisResult *, void*

@end
