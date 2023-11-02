
@interface FTLanguageDetectionStreamingContext : NSObject {
    <OspreyClientStreamingContext> * _grpcContext;
}

- (void).cxx_destruct;
- (void)closeStream;
- (id)initWithGRPCStreamingCallContext:(id)arg1;
- (void)sendLanguageDetectionStreamingRequest:(id)arg1;

@end
