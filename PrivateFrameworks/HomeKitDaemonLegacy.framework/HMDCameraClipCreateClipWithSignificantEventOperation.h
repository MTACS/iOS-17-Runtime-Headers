
@interface HMDCameraClipCreateClipWithSignificantEventOperation : HMDCameraClipAddSignificantEventOperation {
    NSDate * _clipStartDate;
    HMCameraClipEncryptionManager * _encryptionManager;
    long long  _quality;
    double  _targetFragmentDuration;
}

@property (readonly, copy) NSDate *clipStartDate;
@property (readonly) HMCameraClipEncryptionManager *encryptionManager;
@property (readonly) long long quality;
@property (readonly) double targetFragmentDuration;

+ (unsigned long long)cameraClipOperationType;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)clipStartDate;
- (id)encryptionManager;
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 targetFragmentDuration:(double)arg5 clipStartDate:(id)arg6 quality:(long long)arg7 encryptionManager:(id)arg8;
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 significantEvent:(id)arg3 homePresenceByPairingIdentity:(id)arg4 targetFragmentDuration:(double)arg5 clipStartDate:(id)arg6 quality:(long long)arg7 encryptionManager:(id)arg8 dataSource:(id)arg9;
- (id)modelsToAdd;
- (long long)quality;
- (double)targetFragmentDuration;

@end
