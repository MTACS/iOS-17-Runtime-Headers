
@interface SBRingerAlertElement : SBAlertProvidedContentElement <SBRingerNoticeUICoordinating, SBSystemApertureContextProviding> {
    bool  _activatedForPreviewing;
    <SAAlertHosting> * _alertHost;
    <SAInvalidatable> * _assertion;
    SBUISystemApertureContentProvider * _contentProvider;
    <SBRingerAlertElementDelegate> * _delegate;
    bool  _lastEventIsAVolumeChange;
    SBUISystemApertureCAPackageContentProvider * _leadingRingerContentViewProvider;
    <SBUISystemApertureContentViewProviding> * _minimalContentViewProvider;
    SBUISystemApertureCAPackageContentProvider * _minimalRingerContentViewProvider;
    SBRingerVolumeSliderView * _minimalSliderView;
    double  _overshoot;
    bool  _ringerSilent;
    SBRingerVolumeSliderView * _sliderView;
    unsigned long long  _source;
    SBUISystemApertureTextContentProvider * _trailingTextContentViewProvider;
    unsigned long long  _visualStyle;
    float  _volume;
}

@property (getter=isActivatedForPreviewing, nonatomic) bool activatedForPreviewing;
@property (getter=isAffiliatedWithSessionMonitor, nonatomic, readonly) bool affiliatedWithSessionMonitor;
@property (nonatomic, retain) <SAInvalidatable> *assertion;
@property (nonatomic, retain) SBUISystemApertureContentProvider *contentProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBRingerAlertElementDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIColor *keyColor;
@property (nonatomic) bool lastEventIsAVolumeChange;
@property (nonatomic, retain) SBUISystemApertureCAPackageContentProvider *leadingRingerContentViewProvider;
@property (nonatomic, retain) <SBUISystemApertureContentViewProviding> *minimalContentViewProvider;
@property (nonatomic, retain) SBUISystemApertureCAPackageContentProvider *minimalRingerContentViewProvider;
@property (nonatomic, retain) SBRingerVolumeSliderView *minimalSliderView;
@property (nonatomic) double overshoot;
@property (getter=isPresented, nonatomic, readonly) bool presented;
@property (nonatomic, readonly) bool preventsSwipeToHide;
@property (getter=isRingerSilent, nonatomic) bool ringerSilent;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, retain) SBRingerVolumeSliderView *sliderView;
@property (nonatomic) unsigned long long source;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBUISystemApertureTextContentProvider *trailingTextContentViewProvider;
@property (nonatomic) unsigned long long visualStyle;
@property (nonatomic) float volume;

- (void).cxx_destruct;
- (id)_bellImageForRingerSilent:(bool)arg1;
- (id)_colorForRingerSilent:(bool)arg1;
- (id)_containedVolumeSliderViewWithSize:(struct CGSize { double x1; double x2; })arg1 layoutAxis:(long long)arg2;
- (void)_getRingerPackageSizesForVisualStyle:(unsigned long long)arg1 ringerSilent:(bool)arg2 leadingSize:(out struct CGSize { double x1; double x2; }*)arg3 minimalSize:(out struct CGSize { double x1; double x2; }*)arg4;
- (id)_leadingContentViewProviderForVolume;
- (id)_minimalContentForSource:(unsigned long long)arg1 visualStyle:(unsigned long long)arg2 ringerSilent:(bool)arg3;
- (id)_ringerPackageNameForVisualStyle:(unsigned long long)arg1 minimal:(bool)arg2;
- (void)_setRingerSilent:(bool)arg1 skipUpdate:(bool)arg2;
- (void)_shakeRingerBell;
- (id)_textForRingerSilent:(bool)arg1;
- (void)_updateStateWithTransitionType:(unsigned long long)arg1;
- (void)_updateVolumeSliderAnimated:(bool)arg1;
- (id)alertHost;
- (id)assertion;
- (void)buttonReleased;
- (id)clientIdentifier;
- (double)concentricPaddingOverrideForView:(id)arg1 inLayoutMode:(long long)arg2;
- (id)contentProvider;
- (id)delegate;
- (id)elementIdentifier;
- (id)initWithSource:(unsigned long long)arg1 ringerSilent:(bool)arg2 forPreviewing:(bool)arg3;
- (bool)isActivatedForPreviewing;
- (bool)isPresented;
- (bool)isProvidedViewConcentric:(id)arg1 inLayoutMode:(long long)arg2;
- (bool)isRingerSilent;
- (id)keyColor;
- (bool)lastEventIsAVolumeChange;
- (id)leadingRingerContentViewProvider;
- (id)minimalContentViewProvider;
- (id)minimalRingerContentViewProvider;
- (id)minimalSliderView;
- (void)nudgeUp:(bool)arg1;
- (bool)overridesConcentricPaddingForView:(id)arg1 inLayoutMode:(long long)arg2;
- (double)overshoot;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeOutsetsForLayoutMode:(long long)arg1 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 maximumOutsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)presentForMuteChange:(bool)arg1;
- (void)setActivatedForPreviewing:(bool)arg1;
- (void)setAlertHost:(id)arg1;
- (void)setAssertion:(id)arg1;
- (void)setContentProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastEventIsAVolumeChange:(bool)arg1;
- (void)setLeadingRingerContentViewProvider:(id)arg1;
- (void)setMinimalContentViewProvider:(id)arg1;
- (void)setMinimalRingerContentViewProvider:(id)arg1;
- (void)setMinimalSliderView:(id)arg1;
- (void)setOvershoot:(double)arg1;
- (void)setRingerSilent:(bool)arg1;
- (void)setSliderView:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setTrailingTextContentViewProvider:(id)arg1;
- (void)setVisualStyle:(unsigned long long)arg1;
- (void)setVolume:(float)arg1;
- (void)setVolume:(float)arg1 animated:(bool)arg2 forKeyPress:(bool)arg3;
- (id)sliderView;
- (unsigned long long)source;
- (id)trailingTextContentViewProvider;
- (unsigned long long)visualStyle;
- (float)volume;

@end
