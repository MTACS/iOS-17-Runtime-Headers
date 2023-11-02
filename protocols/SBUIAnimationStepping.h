
@protocol SBUIAnimationStepping <NSObject>

@required

- (void)finishSteppingBackwardToStart;
- (void)finishSteppingForwardToEnd;
- (bool)isStepped;
- (void)setStepPercentage:(double)arg1;
- (double)stepPercentage;

@end
