
@interface HUCameraEraseRecordingsItem : HFStaticItem {
    HMCameraProfile * _cameraProfile;
}

@property (nonatomic, readonly, copy) HMCameraProfile *cameraProfile;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (void)_updateResultsForFuture:(id)arg1 withHiddenStatus:(bool)arg2;
- (id)cameraProfile;
- (id)initWithCameraProfile:(id)arg1;

@end
