
@protocol HMDCameraSnapshotIDSStreamInitiatorDelegate <NSObject>

@required

- (void)streamInitiator:(HMDCameraSnapshotIDSStreamInitiator *)arg1 didFailToSendFileWithError:(NSError *)arg2;

@end
