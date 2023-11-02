
@interface HUCameraRecordingOptionsItem : HFStaticItem {
    NSSet * _cameraProfiles;
}

@property (nonatomic, readonly) NSSet *cameraProfiles;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)cameraProfiles;
- (id)initWithCameraProfiles:(id)arg1;

@end
