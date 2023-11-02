
@protocol HMDCameraRecordingBulkSendSessionReaderDelegate <NSObject>

@required

- (void)bulkSendSessionReader:(HMDCameraRecordingBulkSendSessionReader *)arg1 didFinishWithReason:(unsigned short)arg2;
- (void)bulkSendSessionReader:(HMDCameraRecordingBulkSendSessionReader *)arg1 didReadFragment:(HMDDataStreamFragment *)arg2;

@end
