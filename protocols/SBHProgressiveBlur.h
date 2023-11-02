
@protocol SBHProgressiveBlur <NSObject>

@required

- (void)completeIncrementalTransitionSuccessfully:(bool)arg1;
- (void)completeTransitionSuccessfully:(bool)arg1;
- (void)prepareForTransitionToBlurred:(bool)arg1;
- (void)setTransitionProgress:(double)arg1;

@end
