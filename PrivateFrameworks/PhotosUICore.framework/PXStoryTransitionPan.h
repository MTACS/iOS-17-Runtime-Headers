
@interface PXStoryTransitionPan : PXStoryConcreteTransition {
    PXStoryPanTransitionConfiguration * _configuration;
    CAMediaTimingFunction * _effectCurveAfterMidpoint;
    CAMediaTimingFunction * _effectCurveBeforeMidpoint;
    CAMediaTimingFunction * _movementCurve;
}

+ (id)panWithConfiguration:(id)arg1;
+ (id)panWithEffect:(id)arg1 transitionInfo:(struct { BOOL x1; unsigned char x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; BOOL x4; union { BOOL x_5_1_1; BOOL x_5_1_2; BOOL x_5_1_3; BOOL x_5_1_4; } x5; union { double x_6_1_1; double x_6_1_2; BOOL x_6_1_3; } x6; })arg2;

- (void).cxx_destruct;
- (void)_configureClipLayoutsContentBoundsForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)configureEffectForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)timeDidChange;
- (void)wasStopped;

@end
