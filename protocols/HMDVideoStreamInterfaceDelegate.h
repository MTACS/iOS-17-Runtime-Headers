
@protocol HMDVideoStreamInterfaceDelegate <NSObject>

@required

- (void)videoStream:(HMDVideoStreamInterface *)arg1 didStart:(NSError *)arg2;
- (void)videoStream:(HMDVideoStreamInterface *)arg1 didStop:(NSError *)arg2;
- (void)videoStreamDidNetworkDeteriorate:(HMDVideoStreamInterface *)arg1;
- (void)videoStreamDidNetworkImprove:(HMDVideoStreamInterface *)arg1;
- (void)videoStreamDidUpdateConfiguration:(HMDVideoStreamInterface *)arg1;

@end
