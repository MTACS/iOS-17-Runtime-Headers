
@protocol BWIrisStagingNodeIrisRequestDelegate <NSObject>

@required

- (void)stagingNode:(BWIrisStagingNode *)arg1 readyToReceiveRequestsWithEarliestAllowedStillImageCaptureHostPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)stagingNode:(BWIrisStagingNode *)arg1 valveClosedWithPendingIrisRequests:(NSArray *)arg2;
- (void)stagingNode:(BWIrisStagingNode *)arg1 waitingToEmitFrameWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)stagingNode:(BWIrisStagingNode *)arg1 willEmitIrisRequest:(BWIrisMovieInfo *)arg2;

@end
