
@interface PXStoryTransitionWipe : PXStoryConcreteTransition {
    CAMediaTimingFunction * _animationCurve;
    PXStoryWipeTransitionConfiguration * _configuration;
    double  _dividerAnimationDurationFraction;
    double  _reverseDividerAnimationDurationFraction;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1;
- (void)timeDidChange;
- (void)wasStopped;

@end
