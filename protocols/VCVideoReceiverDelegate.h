
@protocol VCVideoReceiverDelegate <NSObject>

@required

- (void)vcVideoReceiver:(VCVideoReceiverBase *)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2 firType:(int)arg3;

@optional

- (void)vcVideoReceiver:(VCVideoReceiverBase *)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (void)vcVideoReceiver:(VCVideoReceiverBase *)arg1 downlinkQualityDidChange:(NSDictionary *)arg2;
- (unsigned int)vcVideoReceiver:(VCVideoReceiverBase *)arg1 receivedTMMBR:(unsigned int)arg2;
- (void)vcVideoReceiverRequestKeyFrame:(VCVideoReceiverBase *)arg1 rtcpPSFBType:(unsigned int)arg2;

@end
