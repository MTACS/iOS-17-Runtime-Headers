
@protocol SBIconAnimationContaining <NSObject>

@required

- (UIWindow *)animationWindow;
- (UIView *)containerView;
- (UIView *)fallbackIconContainerView;

@end
