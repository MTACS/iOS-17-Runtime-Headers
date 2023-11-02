
@interface HMDCameraClipUploaderFactory : NSObject <HMDCameraClipUploaderFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createAddSignificantEventOperationForClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4;
- (id)createCreateClipOperationForClipModelID:(id)arg1 localZone:(id)arg2 targetFragmentDuration:(double)arg3 clipStartDate:(id)arg4 quality:(long long)arg5 encryptionManager:(id)arg6;
- (id)createCreateClipWithSignificantEventOperationForClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 targetFragmentDuration:(double)arg5 clipStartDate:(id)arg6 quality:(long long)arg7 encryptionManager:(id)arg8;
- (id)createFinalizeClipOperationForModelID:(id)arg1 localZone:(id)arg2;
- (id)createUploadVideoSegmentOperationForModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5;

@end
