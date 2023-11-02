
@protocol SSSpinnerProtocol <NSObject>

@required

- (bool)animating;
- (NSArray *)cachedButtons;
- (void)setAnimating:(bool)arg1;
- (void)setCachedButtons:(NSArray *)arg1;
- (void)setSpinner:(SSSpinner *)arg1;
- (void)setSpinnerContainer:(UIView *)arg1;
- (SSSpinner *)spinner;
- (UIView *)spinnerContainer;

@end
