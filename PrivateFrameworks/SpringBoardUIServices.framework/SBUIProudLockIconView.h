
@interface SBUIProudLockIconView : UIView {
    bool  _allowsAlongsideCoaching;
    SBUIFaceIDCameraGlyphView * _cameraCoveredView;
    bool  _changingAllowsAlongsideCoaching;
    UIColor * _contentColor;
    double  _durationOnCameraCoveredGlyphBeforeCoaching;
    UIView * _iconContainerView;
    NSSet * _imageLayers;
    SBUIFaceIDCoachingView * _lazy_faceIDCoachingView;
    LAUIPearlGlyphView * _lazy_pearlGlyphView;
    _UILegibilitySettings * _legibilitySettings;
    BSUICAPackageView * _lockView;
    double  _overrideExtent;
    struct CGPoint { 
        double x; 
        double y; 
    }  _overrideOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _overrideSize;
    bool  _overridesSizing;
    long long  _pearlGlyphStyle;
    id  _pearlGlyphViewSharedResources;
    bool  _performingIncomingLayout;
    NSSet * _shadowFilterLayers;
    NSSet * _shadowImageLayers;
    long long  _state;
}

@property (nonatomic, readonly) SBUIFaceIDCameraGlyphView *cameraCoveredView;
@property (nonatomic, retain) UIColor *contentColor;
@property (nonatomic) double durationOnCameraCoveredGlyphBeforeCoaching;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (id)_activeViewsForState:(long long)arg1;
- (id)_alphaAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4 forIncomingViews:(bool)arg5;
- (double)_alphaForActiveViewForState:(long long)arg1;
- (void)_configureShadowFromLegibilitySettings:(id)arg1;
- (id)_defaultAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4;
- (id)_faceIDCoachingView;
- (void)_forEachLayerInHierarchy:(id)arg1 perform:(id /* block */)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_incomingTransformForActiveView:(id)arg1 forState:(long long)arg2;
- (id)_layoutAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4;
- (double)_lockToCoachingSpacing;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_outgoingTransformForView:(id)arg1 fromState:(long long)arg2;
- (id)_pearlGlyphView;
- (id)_pearlGlyphViewIfExists;
- (struct CGSize { double x1; double x2; })_practicalProudLockSize;
- (void)_resetCameraGlyphView;
- (void)_resetPearlGlyphView;
- (void)_resetfaceIDCoachingView;
- (double)_scaleAmountForZoom;
- (struct CGSize { double x1; double x2; })_smallLockSize;
- (struct CGSize { double x1; double x2; })_smallLockSizeForTextSize:(id)arg1;
- (id)_transformAnimationSettingsForTransitionFromViews:(id)arg1 andState:(long long)arg2 toViews:(id)arg3 andState:(long long)arg4 forIncomingViews:(bool)arg5;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForActiveView:(id)arg1 forState:(long long)arg2;
- (void)_transitionToState:(long long)arg1 animated:(bool)arg2 updateText:(bool)arg3 options:(long long)arg4 completion:(id /* block */)arg5;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_zoomedTransform;
- (bool)allowsAlongsideCoaching;
- (id)cameraCoveredView;
- (id)contentColor;
- (double)durationOnCameraCoveredGlyphBeforeCoaching;
- (id)fileNameForCurrentDevice;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)legibilitySettings;
- (double)proudLockLandscapeOffset;
- (void)setAllowsAlongsideCoaching:(bool)arg1;
- (void)setContentColor:(id)arg1;
- (void)setDurationOnCameraCoveredGlyphBeforeCoaching:(double)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setOverrideGlyphStyle:(long long)arg1;
- (void)setOverrideSize:(struct CGSize { double x1; double x2; })arg1 offset:(struct CGPoint { double x1; double x2; })arg2 extent:(double)arg3;
- (void)setState:(long long)arg1;
- (void)setState:(long long)arg1 animated:(bool)arg2;
- (void)setState:(long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setState:(long long)arg1 animated:(bool)arg2 updateText:(bool)arg3 options:(long long)arg4 completion:(id /* block */)arg5;
- (long long)state;

@end
