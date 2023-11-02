
@protocol HMDCameraSnapshotIDSRelayReceiverDelegate <NSObject>

@required

- (void)relayReceiver:(HMDCameraSnapshotIDSRelayReceiver *)arg1 didReceiveData:(NSData *)arg2 error:(NSError *)arg3;
- (void)relayReceiverDidAcceptIDSInvitation:(HMDCameraSnapshotIDSRelayReceiver *)arg1;
- (void)relayReceiverIDSSessionDidStart:(HMDCameraSnapshotIDSRelayReceiver *)arg1;

@end
