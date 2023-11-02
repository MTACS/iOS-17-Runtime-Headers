
@protocol _UIRemoteKeyboardInputViewPlaceholder

@required

- (void)_isPlaceholderViewSelector;
- (UIView *)associatedView;
- (UIView *)fallbackView;
- (struct CGSize { double x1; double x2; })fixedSize;
- (bool)isLocalMinimumHeightPlaceholder;
- (UIView *)placeheldView;
- (bool)refreshPlaceholder;
- (void)setAssociatedView:(UIView *)arg1;
- (void)setFallbackView:(UIView *)arg1;
- (void)setFixedSize:(struct CGSize { double x1; double x2; })arg1;

@end
