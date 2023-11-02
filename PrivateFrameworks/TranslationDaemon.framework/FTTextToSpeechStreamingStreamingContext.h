
@interface FTTextToSpeechStreamingStreamingContext : NSObject {
    <OspreyClientStreamingContext> * _grpcContext;
}

- (void).cxx_destruct;
- (void)closeStream;
- (id)initWithGRPCStreamingCallContext:(id)arg1;
- (void)sendTextToSpeechStreamingStreamingRequest:(id)arg1;

@end
