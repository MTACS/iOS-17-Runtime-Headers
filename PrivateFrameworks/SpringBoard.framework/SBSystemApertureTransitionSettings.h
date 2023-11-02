
@interface SBSystemApertureTransitionSettings : PTSettings {
    SBFFluidBehaviorSettings * _defaultBehaviorSettings;
}

@property (nonatomic, retain) SBFFluidBehaviorSettings *defaultBehaviorSettings;

+ (id)_childSettingsKeyPathsToTitles;
+ (id)_moduleWithSectionTitle:(id)arg1;
+ (id)_rowForKeyPath:(id)arg1 title:(id)arg2;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)_childSettings;
- (void)_setDefaultValuesForBehaviorSettings:(id)arg1;
- (id)defaultBehaviorSettings;
- (void)setChildBehaviorSettingsNamePrefix:(id)arg1;
- (void)setDefaultBehaviorSettings:(id)arg1;
- (void)setDefaultValues;

@end
