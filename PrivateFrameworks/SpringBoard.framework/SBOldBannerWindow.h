
@interface SBOldBannerWindow : SBSecureMainScreenActiveInterfaceOrientationWindow

+ (id)_traitsArbiterOrientationActuationRole;
+ (bool)layoutContentViewControllerWithConstraints;

- (bool)_canBecomeKeyWindow;
- (bool)becomeFirstResponder;
- (bool)canResignFirstResponder;
- (id)initWithWindowScene:(id)arg1;
- (bool)resignFirstResponder;
- (void)setHidden:(bool)arg1;

@end
