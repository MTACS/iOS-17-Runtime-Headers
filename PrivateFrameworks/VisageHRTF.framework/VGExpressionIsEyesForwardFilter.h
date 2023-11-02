
@interface VGExpressionIsEyesForwardFilter : VGExpressionFilter {
    float  _eyesForwardPitchSensitivityInRadians;
    float  _eyesForwardYawSensitivityInRadians;
}

- (float)filter:(id)arg1;
- (id)initWithEyesForwardYawSensitivity:(float)arg1 eyesForwardPitchSensitivity:(float)arg2;

@end
