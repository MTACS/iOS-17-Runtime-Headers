
@interface FTSpeechTranslationStreamingContext : NSObject {
    <OspreyClientStreamingContext> * _grpcContext;
}

- (void).cxx_destruct;
- (void)closeStream;
- (id)initWithGRPCStreamingCallContext:(id)arg1;
- (void)sendSpeechTranslationStreamingRequest:(id)arg1;

@end
