
@protocol HMDCameraSnapshotIDSRelayInitiatorDelegate <NSObject>

@required

- (void)relayInitiator:(HMDCameraSnapshotIDSRelayInitiator *)arg1 didEndIDSSessionWithError:(NSError *)arg2;
- (void)relayInitiatorDidSendDataSuccessfully:(HMDCameraSnapshotIDSRelayInitiator *)arg1;
- (void)relayInitiatorDidSendIDSInvitation:(HMDCameraSnapshotIDSRelayInitiator *)arg1;
- (void)relayInitiatorDidStartDataSend:(HMDCameraSnapshotIDSRelayInitiator *)arg1;
- (void)relayInitiatorIDSSessionDidStart:(HMDCameraSnapshotIDSRelayInitiator *)arg1;

@end
