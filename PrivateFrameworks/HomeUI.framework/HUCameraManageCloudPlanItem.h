
@interface HUCameraManageCloudPlanItem : HFStaticItem {
    HMCameraProfile * _cameraProfile;
}

@property (nonatomic, readonly, copy) HMCameraProfile *cameraProfile;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)cameraProfile;
- (id)initWithCameraProfile:(id)arg1;

@end
