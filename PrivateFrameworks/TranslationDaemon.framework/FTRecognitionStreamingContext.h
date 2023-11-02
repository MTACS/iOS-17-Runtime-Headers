
@interface FTRecognitionStreamingContext : NSObject {
    <OspreyClientStreamingContext> * _grpcContext;
}

- (void).cxx_destruct;
- (void)closeStream;
- (id)initWithGRPCStreamingCallContext:(id)arg1;
- (void)sendRecognitionStreamingRequest:(id)arg1;

@end
