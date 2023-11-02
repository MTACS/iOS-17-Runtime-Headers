
@interface HFCameraClipSignificantEventItem : HFFetchedHomeKitObjectItem <NSCopying> {
    HMCameraProfile * _cameraProfile;
    HMHome * _home;
}

@property (nonatomic, readonly) HMCameraProfile *cameraProfile;
@property (nonatomic, readonly, copy) HMCameraClipSignificantEvent *event;
@property (nonatomic, readonly) HMHome *home;

- (void).cxx_destruct;
- (id)_homeKitObjectFetch;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)cameraProfile;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)event;
- (id)home;
- (id)initWithSignificantEvent:(id)arg1 home:(id)arg2;

@end
