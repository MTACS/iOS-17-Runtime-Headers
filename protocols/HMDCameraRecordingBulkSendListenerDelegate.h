
@protocol HMDCameraRecordingBulkSendListenerDelegate <NSObject>

@required

- (void)listenerDidReceiveDataStreamClose:(HMDCameraRecordingBulkSendListener *)arg1;
- (void)listenerDidReceiveDataStreamStart:(HMDCameraRecordingBulkSendListener *)arg1;

@end
