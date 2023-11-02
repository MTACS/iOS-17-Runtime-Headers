
@protocol HMDCameraRemoteStreamSenderProtocol <HMDCameraRemoteStreamProtocol>

@required

- (NSNumber *)mtu;
- (void)openRelaySession;
- (void)startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(HMDCameraNetworkConfig *)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(HMDCameraNetworkConfig *)arg5 cameraAudioSSRC:(unsigned int)arg6;

@optional

- (void)startPacketRelayWithIDSDeviceSession:(IDSSession *)arg1 cameraVideoSSRC:(unsigned int)arg2 cameraAudioSSRC:(unsigned int)arg3;

@end
