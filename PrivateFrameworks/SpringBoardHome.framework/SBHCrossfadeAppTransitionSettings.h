
@interface SBHCrossfadeAppTransitionSettings : SBHCrossfadeZoomSettings {
    SBFAnimationSettings * _appSnapshotCornerRadiusSettings;
}

@property (nonatomic, retain) SBFAnimationSettings *appSnapshotCornerRadiusSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)appSnapshotCornerRadiusSettings;
- (void)setAppSnapshotCornerRadiusSettings:(id)arg1;
- (void)setDefaultValues;

@end
