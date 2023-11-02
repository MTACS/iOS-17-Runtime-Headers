
@interface SBHFolderZoomSettings : SBHScaleZoomSettings {
    SBFAnimationSettings * _innerFolderFadeSettings;
}

@property (nonatomic, retain) SBFAnimationSettings *innerFolderFadeSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)innerFolderFadeSettings;
- (void)setDefaultValues;
- (void)setInnerFolderFadeSettings:(id)arg1;

@end
