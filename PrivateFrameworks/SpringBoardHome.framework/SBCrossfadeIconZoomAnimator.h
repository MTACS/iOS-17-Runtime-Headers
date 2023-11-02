
@interface SBCrossfadeIconZoomAnimator : SBScaleIconZoomAnimator {
    UIView * _crossfadeView;
    bool  _masksCorners;
    bool  _performsTrueCrossfade;
}

@property (nonatomic) bool masksCorners;
@property (nonatomic) bool performsTrueCrossfade;
@property (nonatomic, retain) SBHCrossfadeZoomSettings *settings;

- (void).cxx_destruct;
- (double)_appSnapshotCornerRadiusForFraction:(double)arg1;
- (void)_assertCrossfadeViewSizeIfNecessary;
- (void)_cleanupAnimation;
- (void)_cleanupZoom;
- (void)_delayedForRotation;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(bool)arg4 sharedCompletion:(id /* block */)arg5;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_zoomedFrame;
- (struct CGPoint { double x1; double x2; })_zoomedIconCenter;
- (bool)fadesHomeScreen;
- (id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2 icon:(id)arg3;
- (bool)masksCorners;
- (double)maxHomeScreenZoomScale;
- (bool)performsTrueCrossfade;
- (void)setMasksCorners:(bool)arg1;
- (void)setPerformsTrueCrossfade:(bool)arg1;

@end
