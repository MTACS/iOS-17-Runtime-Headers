
@interface HMDCameraRecordingSessionFactory : HMFObject <HMDCameraRecordingSessionFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) double maximumClipDuration;
@property (readonly) double recordingExtensionDuration;
@property (readonly) Class superclass;

- (id)createSignificantEventManagerWithWorkQueue:(id)arg1 faceClassificationResolver:(id)arg2 logIdentifier:(id)arg3;
- (id)createTimelapseFragmentManagerWithLogIdentifier:(id)arg1;
- (id)createUploaderWithClipUUID:(id)arg1 startDate:(id)arg2 targetFragmentDuration:(double)arg3 quality:(long long)arg4 localZone:(id)arg5 workQueue:(id)arg6 logIdentifier:(id)arg7;
- (id)createVideoAnalyzerWithConfiguration:(id)arg1 identifier:(id)arg2;
- (bool)isVideoInitData:(id)arg1 combinableWithVideoInitData:(id)arg2;
- (double)maximumClipDuration;
- (double)recordingExtensionDuration;

@end
