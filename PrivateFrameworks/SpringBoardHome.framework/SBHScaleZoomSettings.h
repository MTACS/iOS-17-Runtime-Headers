
@interface SBHScaleZoomSettings : SBHIconZoomSettings {
    SBFAnimationSettings * _crossfadeSettings;
    bool  _crossfadeWithZoom;
    bool  _fadesIconGrid;
    SBFAnimationSettings * _iconGridFadeSettings;
    SBFAnimationSettings * _outerFolderFadeSettings;
}

@property (nonatomic, retain) SBFAnimationSettings *crossfadeSettings;
@property (nonatomic) bool crossfadeWithZoom;
@property (nonatomic) bool fadesIconGrid;
@property (nonatomic, retain) SBFAnimationSettings *iconGridFadeSettings;
@property (nonatomic, retain) SBFAnimationSettings *outerFolderFadeSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)crossfadeSettings;
- (bool)crossfadeWithZoom;
- (id)effectiveCrossfadeAnimationSettings;
- (bool)fadesIconGrid;
- (id)iconGridFadeSettings;
- (id)outerFolderFadeSettings;
- (void)setCrossfadeSettings:(id)arg1;
- (void)setCrossfadeWithZoom:(bool)arg1;
- (void)setDefaultValues;
- (void)setFadesIconGrid:(bool)arg1;
- (void)setIconGridFadeSettings:(id)arg1;
- (void)setOuterFolderFadeSettings:(id)arg1;

@end
