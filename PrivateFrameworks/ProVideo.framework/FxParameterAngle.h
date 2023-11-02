
@interface FxParameterAngle : FxPinParameter {
    struct FxParameterAnglePriv { bool x1; double x2; double x3; } * _anglePriv;
}

- (void)dealloc;
- (id)init;
- (bool)isClockwise;
- (void)setIsClockwise:(bool)arg1;
- (void)setStartValue:(double)arg1;
- (void)setStepValue:(double)arg1;
- (double)startValue;
- (double)stepValue;

@end
