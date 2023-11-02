
@interface SBHCrossfadeZoomSettings : SBHScaleZoomSettings {
    SBFAnimationSettings * _morphSettings;
    bool  _morphWithZoom;
}

@property (nonatomic, retain) SBFAnimationSettings *morphSettings;
@property (nonatomic) bool morphWithZoom;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)effectiveMorphAnimationSettings;
- (id)morphSettings;
- (bool)morphWithZoom;
- (void)setDefaultValues;
- (void)setMorphSettings:(id)arg1;
- (void)setMorphWithZoom:(bool)arg1;

@end
