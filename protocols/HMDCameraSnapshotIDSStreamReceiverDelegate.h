
@protocol HMDCameraSnapshotIDSStreamReceiverDelegate <NSObject>

@required

- (void)streamReceiver:(HMDCameraSnapshotIDSStreamReceiver *)arg1 didReceiveFileWithError:(NSError *)arg2;

@end
