
@protocol HMDVideoStreamLastDecodedFrameDelegate <NSObject>

@required

- (void)videoStream:(HMDVideoStreamInterface *)arg1 didGetLastDecodedFrame:(HMDCameraSnapshotData *)arg2;

@end
