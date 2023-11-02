
@interface HUCameraCloudStorageItemProvider : HFStaticItemProvider {
    HMCameraProfile * _cameraProfile;
}

@property (nonatomic, readonly, copy) HMCameraProfile *cameraProfile;

- (void).cxx_destruct;
- (id)cameraProfile;
- (id)init;
- (id)initWithCameraProfile:(id)arg1;

@end
