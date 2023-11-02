
@interface _UIStatusBarFocusableImageView : _UIStatusBarImageView {
    UIColor * _focusedImageTintColor;
    UIColor * _unfocusedTintColor;
}

@property (nonatomic, retain) UIColor *focusedImageTintColor;

- (void).cxx_destruct;
- (void)applyStyleAttributes:(id)arg1;
- (bool)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)focusedImageTintColor;
- (bool)isUserInteractionEnabled;
- (void)setFocusedImageTintColor:(id)arg1;

@end
