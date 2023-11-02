
@interface FTMultilingualStreamingContext : NSObject {
    <OspreyClientStreamingContext> * _grpcContext;
}

- (void).cxx_destruct;
- (void)closeStream;
- (id)initWithGRPCStreamingCallContext:(id)arg1;
- (void)sendMultilingualStreamingRequest:(id)arg1;

@end
