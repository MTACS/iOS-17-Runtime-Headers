
@interface HUCameraSmartDetectionSettingsItem : HFItem {
    NSSet * _cameraProfiles;
    unsigned long long  _settingsContext;
    HFCameraSignificantEventConfiguration * _significantEventConfiguration;
}

@property (nonatomic, readonly, copy) NSSet *cameraProfiles;
@property (nonatomic, readonly) unsigned long long settingsContext;
@property (nonatomic, readonly, copy) HFCameraSignificantEventConfiguration *significantEventConfiguration;

- (void).cxx_destruct;
- (bool)_isHiddenForCurrentsignificantEventConfiguration:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)cameraProfiles;
- (id)initWithSignificantEventConfiguration:(id)arg1 cameraProfiles:(id)arg2 settingsContext:(unsigned long long)arg3;
- (unsigned long long)settingsContext;
- (id)significantEventConfiguration;

@end
