
@interface SBBannerWindow : SBFSecureWindow

- (bool)_canBecomeKeyWindow;
- (bool)becomeFirstResponder;
- (bool)canResignFirstResponder;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithWindowScene:(id)arg1;
- (bool)resignFirstResponder;
- (void)setHidden:(bool)arg1;

@end
