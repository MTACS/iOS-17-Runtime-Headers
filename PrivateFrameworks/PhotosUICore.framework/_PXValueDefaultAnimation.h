
@interface _PXValueDefaultAnimation : _PXValueAnimation {
    long long  _curve;
    double  _initialValue;
}

- (double)approximateVelocity;
- (double)currentValue;
- (id)initWithDuration:(double)arg1 currentMediaTime:(double)arg2 spec:(struct _PXValueAnimationSpec { long long x1; double x2; long long x3; double x4; double x5; double x6; double x7; })arg3;
- (id)initWithFromValue:(double)arg1 currentMediaTime:(double)arg2 spec:(struct _PXValueAnimationSpec { long long x1; double x2; long long x3; double x4; double x5; double x6; double x7; })arg3;

@end
