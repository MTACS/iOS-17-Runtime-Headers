
@protocol PKLegacyButtonInterface <NSObject>

@required

- (void)setShowSpinner:(bool)arg1;
- (bool)showSpinner;
- (void)updateActivityIndicatorColorWithColor:(UIColor *)arg1;
- (void)updateBackgroundColorWithColor:(UIColor *)arg1;
- (void)updateTitleColorWithColor:(UIColor *)arg1;
- (void)updateWithImage:(UIImage *)arg1;

@end
