
@protocol HMDCameraClipUploaderFactory <NSObject>

@required

- (HMDCameraClipAddSignificantEventOperation *)createAddSignificantEventOperationForClipModelID:(NSUUID *)arg1 localZone:(HMBLocalZone *)arg2 significantEvent:(HMDCameraRecordingSessionSignificantEvent *)arg3 homePresenceByPairingIdentity:(NSDictionary *)arg4;
- (HMDCameraClipCreateClipOperation *)createCreateClipOperationForClipModelID:(NSUUID *)arg1 localZone:(HMBLocalZone *)arg2 targetFragmentDuration:(double)arg3 clipStartDate:(NSDate *)arg4 quality:(long long)arg5 encryptionManager:(HMCameraClipEncryptionManager *)arg6;
- (HMDCameraClipCreateClipWithSignificantEventOperation *)createCreateClipWithSignificantEventOperationForClipModelID:(NSUUID *)arg1 localZone:(HMBLocalZone *)arg2 significantEvent:(HMDCameraRecordingSessionSignificantEvent *)arg3 homePresenceByPairingIdentity:(NSDictionary *)arg4 targetFragmentDuration:(double)arg5 clipStartDate:(NSDate *)arg6 quality:(long long)arg7 encryptionManager:(HMCameraClipEncryptionManager *)arg8;
- (HMDCameraClipFinalizeClipOperation *)createFinalizeClipOperationForModelID:(NSUUID *)arg1 localZone:(HMBLocalZone *)arg2;
- (HMDCameraClipUploadVideoSegmentOperation *)createUploadVideoSegmentOperationForModelID:(NSUUID *)arg1 localZone:(HMBLocalZone *)arg2 data:(NSData *)arg3 metadata:(HMDCameraClipSegmentMetadata *)arg4 encryptionManager:(HMCameraClipEncryptionManager *)arg5;

@end
