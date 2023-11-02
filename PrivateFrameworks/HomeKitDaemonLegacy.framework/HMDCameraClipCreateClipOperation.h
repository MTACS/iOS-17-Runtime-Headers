
@interface HMDCameraClipCreateClipOperation : HMDCameraClipAddModelsOperation {
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
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 targetFragmentDuration:(double)arg3 clipStartDate:(id)arg4 quality:(long long)arg5 encryptionManager:(id)arg6;
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 targetFragmentDuration:(double)arg3 clipStartDate:(id)arg4 quality:(long long)arg5 encryptionManager:(id)arg6 dataSource:(id)arg7;
- (id)modelsToAdd;
- (long long)quality;
- (double)targetFragmentDuration;

@end
