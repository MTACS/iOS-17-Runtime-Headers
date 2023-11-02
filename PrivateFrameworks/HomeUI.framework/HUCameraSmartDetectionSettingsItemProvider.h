
@interface HUCameraSmartDetectionSettingsItemProvider : HFItemProvider {
    NSSet * _cameraProfiles;
    unsigned long long  _settingsContext;
    NSMutableSet * _smartDetectionSettingsItems;
}

@property (nonatomic, readonly, copy) NSSet *cameraProfiles;
@property (nonatomic, readonly) unsigned long long settingsContext;
@property (nonatomic, readonly) NSMutableSet *smartDetectionSettingsItems;

- (void).cxx_destruct;
- (bool)_homeSupportsPackageDetection;
- (id)cameraProfiles;
- (id)init;
- (id)initWithCameraProfiles:(id)arg1 settingsContext:(unsigned long long)arg2;
- (id)items;
- (id)reloadItems;
- (unsigned long long)settingsContext;
- (id)smartDetectionSettingsItems;

@end
