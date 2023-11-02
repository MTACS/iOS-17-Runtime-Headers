
@protocol _UIViewServiceSessionPrimaryActivityProviding <_UIViewServiceSessionActivityProviding>

@required

- (int)_effectiveViewControllerAppearState;
- (UIWindow *)_primaryHostedWindow;

@end
