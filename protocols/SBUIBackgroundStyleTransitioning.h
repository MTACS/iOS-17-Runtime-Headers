
@protocol SBUIBackgroundStyleTransitioning <NSObject>

@required

- (long long)backgroundStyle;
- (void)beginTransitionToBackgroundStyle:(long long)arg1;
- (void)completeTransitionToBackgroundStyle:(long long)arg1;
- (bool)isTransitioningBackgroundStyle;
- (void)setBackgroundStyle:(long long)arg1;
- (void)updateBackgroundStyleTransitionProgress:(double)arg1;

@end
