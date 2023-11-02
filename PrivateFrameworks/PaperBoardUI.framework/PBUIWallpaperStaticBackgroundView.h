
@interface PBUIWallpaperStaticBackgroundView : UIView {
    PBUIWallpaperEffectViewBase * _homescreenWallpaperEffectView;
    PBUIWallpaperEffectViewBase * _lockscreenWallpaperEffectView;
    long long  _variant;
    <PBUIWallpaperPresenting><PBUIWallpaperLegibilityProviding> * _wallpaperPresenter;
    <BSInvalidatable> * _wallpaperStyleAnimationAssertion;
}

@property (nonatomic) long long variant;
@property (nonatomic, retain) <BSInvalidatable> *wallpaperStyleAnimationAssertion;

- (void).cxx_destruct;
- (void)_beginSuspendingMotionEffectsForStyleIfNeeded;
- (id)_effectViewForVariant:(long long)arg1;
- (void)_endSuspendingMotionEffectsForStyleIfNeeded;
- (id)_newEffectViewForVariant:(long long)arg1 transitionState:(struct { long long x1; long long x2; double x3; })arg2;
- (void)_setEffectView:(id)arg1 forVariant:(long long)arg2;
- (bool)_shouldSuspendMotionEffectsForState:(struct { long long x1; long long x2; double x3; })arg1;
- (bool)_shouldSuspendMotionEffectsForStyle:(long long)arg1;
- (void)_updateMotionEffectsForState:(struct { long long x1; long long x2; double x3; })arg1;
- (void)dealloc;
- (id)initWithWallpaperPresenter:(id)arg1;
- (void)setVariant:(long long)arg1;
- (void)setVariant:(long long)arg1 withOutAnimationFactory:(id)arg2 inAnimationFactory:(id)arg3 completion:(id /* block */)arg4;
- (void)setWallpaperStyleAnimationAssertion:(id)arg1;
- (bool)setWallpaperStyleTransitionState:(struct { long long x1; long long x2; double x3; })arg1 forVariant:(long long)arg2 withAnimationFactory:(id)arg3;
- (long long)variant;
- (id)wallpaperStyleAnimationAssertion;

@end
