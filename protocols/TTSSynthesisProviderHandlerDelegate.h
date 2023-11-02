
@protocol TTSSynthesisProviderHandlerDelegate

@required

- (void)didGeneratePlayableBuffers:(NSArray *)arg1 forRequest:(AVSpeechSynthesisProviderRequest *)arg2;

@end
