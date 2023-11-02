
@interface SBSystemUISceneSettings : PTSettings {
    bool  _allowAnyBundleIdentifier;
}

@property (nonatomic) bool allowAnyBundleIdentifier;

+ (id)settingsControllerModule;

- (bool)allowAnyBundleIdentifier;
- (void)setAllowAnyBundleIdentifier:(bool)arg1;
- (void)setDefaultValues;

@end
