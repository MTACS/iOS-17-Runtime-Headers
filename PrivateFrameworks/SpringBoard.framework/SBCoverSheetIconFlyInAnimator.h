
@interface SBCoverSheetIconFlyInAnimator : SBCenterIconZoomAnimator <PTSettingsKeyObserver> {
    double  _baselineDistance;
    double  _distanceExponent;
    double  _effectMultiplier;
    UIViewFloatAnimatableProperty * _labelAlphaDrivingProgressAnimatableProperty;
    UIPageControl * _pageControl;
    CAMediaTimingFunction * _timingFunction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *labelAlphaDrivingProgressAnimatableProperty;
@property (nonatomic, retain) UIPageControl *pageControl;
@property (readonly) Class superclass;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;

- (void).cxx_destruct;
- (void)_cleanupAnimation;
- (void)_createAnimatableProperties;
- (double)_functionWithProgress:(double)arg1 distance:(double)arg2;
- (double)_labelAlphaForFraction:(double)arg1;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1 withCenter:(struct CGPoint { double x1; double x2; })arg2;
- (void)_updateDockForFraction:(double)arg1;
- (void)_updateLabelAlphaForPresentationValue:(bool)arg1;
- (void)_updateWithSettings:(id)arg1;
- (double)_zPositionForPoint:(struct CGPoint { double x1; double x2; })arg1 center:(struct CGPoint { double x1; double x2; })arg2 andFraction:(double)arg3;
- (double)_zPositionForView:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 andFraction:(double)arg3;
- (id)initWithFolderController:(id)arg1;
- (id)labelAlphaDrivingProgressAnimatableProperty;
- (id)pageControl;
- (void)setLabelAlphaDrivingProgressAnimatableProperty:(id)arg1;
- (void)setPageControl:(id)arg1;
- (void)setTimingFunction:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)timingFunction;

@end
