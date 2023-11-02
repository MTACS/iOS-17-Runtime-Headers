
@interface LAUIPhysicalButtonViewShimmerAnimation : LAUIPhysicalButtonViewAnimation {
    CAGradientLayer * _shimmerGradient;
}

- (void).cxx_destruct;
- (void)_beginReducedMotionAnimationWithDelay:(double)arg1;
- (void)_beginRegularMotionAnimationWithDelay:(double)arg1;
- (void)_endShimmerAnimation;
- (bool)_isReducedMotionEnabled;
- (void)beginWithDelay:(double)arg1;
- (double)duration;
- (void)endImmediately;

@end
