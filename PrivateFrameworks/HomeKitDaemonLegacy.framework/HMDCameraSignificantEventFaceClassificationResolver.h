
@interface HMDCameraSignificantEventFaceClassificationResolver : HMFObject <HMFLogging> {
    HMDHome * _home;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMDHome *home;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_faceClassificationForSignificantEventFaceClassifications:(id)arg1 user:(id)arg2;
- (id)faceClassificationForSignificantEventFaceClassifications:(id)arg1;
- (id)faceClassificationForSignificantEventFaceClassifications:(id)arg1 user:(id)arg2;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)logIdentifier;
- (id)personManagerWithUUID:(id)arg1;
- (void)setHome:(id)arg1;

@end
