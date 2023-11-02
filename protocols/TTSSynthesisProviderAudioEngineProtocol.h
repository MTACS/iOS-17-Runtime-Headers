
@protocol TTSSynthesisProviderAudioEngineProtocol

@required

- (void)synthesisProviderDidFinishSpeakingRequest:(AVSpeechSynthesisProviderRequest *)arg1 successfully:(bool)arg2 withError:(NSError *)arg3;
- (void)synthesisProviderDidStartSpeakingMarker:(AVSpeechSynthesisMarker *)arg1 forRequest:(AVSpeechSynthesisProviderRequest *)arg2;

@end
