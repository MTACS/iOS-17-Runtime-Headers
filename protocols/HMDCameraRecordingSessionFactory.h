
@protocol HMDCameraRecordingSessionFactory <NSObject>

@required

- (HMDCameraRecordingSessionSignificantEventManager *)createSignificantEventManagerWithWorkQueue:(NSObject<OS_dispatch_queue> *)arg1 faceClassificationResolver:(HMDCameraSignificantEventFaceClassificationResolver *)arg2 logIdentifier:(NSString *)arg3;
- (HMDCameraRecordingSessionVariantFragmentManager *)createTimelapseFragmentManagerWithLogIdentifier:(NSString *)arg1;
- (HMDCameraClipUploader *)createUploaderWithClipUUID:(NSUUID *)arg1 startDate:(NSDate *)arg2 targetFragmentDuration:(double)arg3 quality:(long long)arg4 localZone:(HMBLocalZone *)arg5 workQueue:(NSObject<OS_dispatch_queue> *)arg6 logIdentifier:(NSString *)arg7;
- (<HMDCameraRecordingSessionVideoAnalyzer> *)createVideoAnalyzerWithConfiguration:(HMIVideoAnalyzerConfiguration *)arg1 identifier:(NSUUID *)arg2;
- (bool)isVideoInitData:(NSData *)arg1 combinableWithVideoInitData:(NSData *)arg2;
- (double)maximumClipDuration;
- (double)recordingExtensionDuration;

@end
