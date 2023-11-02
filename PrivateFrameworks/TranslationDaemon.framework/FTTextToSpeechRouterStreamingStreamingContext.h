
@interface FTTextToSpeechRouterStreamingStreamingContext : NSObject {
    <OspreyClientStreamingContext> * _grpcContext;
}

- (void).cxx_destruct;
- (void)closeStream;
- (id)initWithGRPCStreamingCallContext:(id)arg1;
- (void)sendTextToSpeechRouterStreamingStreamingRequest:(id)arg1;

@end
