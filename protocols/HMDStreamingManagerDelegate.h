
@protocol HMDStreamingManagerDelegate <NSObject>

@required

- (void)streamingManager:(HMDStreamingManager *)arg1 didStartStreamWithError:(NSError *)arg2;
- (void)streamingManagerDidNetworkDeteriorate:(HMDStreamingManager *)arg1;
- (void)streamingManagerDidNetworkImprove:(HMDStreamingManager *)arg1;
- (void)streamingManagerDidReceiveFirstFrame:(HMDStreamingManager *)arg1;
- (void)streamingManagerDidStopStream:(HMDStreamingManager *)arg1 error:(NSError *)arg2;
- (void)streamingManagerDidUpdateConfiguration:(HMDStreamingManager *)arg1;

@optional

- (void)streamingManagerDidStartRelay:(HMDStreamingManager *)arg1;

@end
