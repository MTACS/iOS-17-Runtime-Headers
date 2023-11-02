
@protocol HMDVideoStreamReconfigureDelegate <NSObject>

@required

- (void)videoStreamReconfigureDidNetworkDeteriorate:(HMDVideoStreamReconfigure *)arg1;
- (void)videoStreamReconfigureDidNetworkImprove:(HMDVideoStreamReconfigure *)arg1;

@end
