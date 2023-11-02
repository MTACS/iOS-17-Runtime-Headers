
@protocol SiriButtonSource <SiriActivationSourceContext>

@required

- (void)didRecognizeButtonSinglePressUp;
- (<SiriAssertion> *)prepareForActivation;
- (<SiriAssertion> *)prepareForActivationWithTimestamp:(double)arg1;
- (<SiriAssertion> *)speechInteractionActivityWithTimestamp:(double)arg1;

@end
