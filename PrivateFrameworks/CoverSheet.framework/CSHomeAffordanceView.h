
@interface CSHomeAffordanceView : UIView <SBSystemPointerInteractionDelegate, SBUIOptionalLegibility> {
    CSAlwaysOnHomeAffordancePillView * _alwaysOnHomeAffordance;
    <CSCoverSheetContextProviding> * _coverSheetContext;
    MTLumaDodgePillView * _dynamicHomeAffordance;
    _UILegibilitySettings * _legibilitySettings;
    UIColor * _overrideColor;
    SBFHomeGrabberSettings * _settings;
    MTStaticColorPillView * _staticHomeAffordance;
    unsigned long long  _style;
    bool  _systemPointerInteractionEnabled;
}

@property (nonatomic) CSAlwaysOnHomeAffordancePillView *alwaysOnHomeAffordance;
@property (nonatomic, retain) <CSCoverSheetContextProviding> *coverSheetContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) MTLumaDodgePillView *dynamicHomeAffordance;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) UIColor *overrideColor;
@property (nonatomic) MTStaticColorPillView *staticHomeAffordance;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (getter=isSystemPointerInteractionEnabled, nonatomic) bool systemPointerInteractionEnabled;

- (void).cxx_destruct;
- (void)_createAlwaysOnHomeAffordance;
- (void)_createDynamicHomeAffordance;
- (void)_createStaticHomeAffordance;
- (void)_transitionToStyle:(unsigned long long)arg1 animated:(bool)arg2;
- (void)_updateForLegibility;
- (id)_viewForStyle:(unsigned long long)arg1;
- (id)alwaysOnHomeAffordance;
- (id)coverSheetContext;
- (id)dynamicHomeAffordance;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })extendedFrameForPointerAnimationSuppression;
- (id)init;
- (bool)isSystemPointerInteractionEnabled;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (id)overrideColor;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pointerInteractionHitTestInsetsForView:(id)arg1;
- (void)setAlwaysOnHomeAffordance:(id)arg1;
- (void)setCoverSheetContext:(id)arg1;
- (void)setDynamicHomeAffordance:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setOverrideColor:(id)arg1;
- (void)setStaticHomeAffordance:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setSystemPointerInteractionEnabled:(bool)arg1;
- (bool)shouldBeginPointerInteractionRequest:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 forView:(id)arg3;
- (id)staticHomeAffordance;
- (unsigned long long)style;
- (id)styleForRegion:(id)arg1 forView:(id)arg2;
- (double)suggestedEdgeSpacing;
- (struct CGSize { double x1; double x2; })suggestedSizeForContentWidth:(double)arg1;

@end
