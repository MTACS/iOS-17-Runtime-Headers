
@protocol HMDCameraRemoteStreamReceiverProtocol <HMDCameraRemoteStreamProtocol>

@required

- (IDSSession *)session;
- (void)setUpRemoteConnectionWithDevice:(HMDDevice *)arg1;

@end
