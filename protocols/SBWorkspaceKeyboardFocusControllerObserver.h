
@protocol SBWorkspaceKeyboardFocusControllerObserver <NSObject>

@required

- (void)keyboardFocusController:(SBWorkspaceKeyboardFocusController *)arg1 externalSceneDidAcquireFocus:(FBScene *)arg2;

@optional

- (void)keyboardFocusController:(SBWorkspaceKeyboardFocusController *)arg1 didUpdateWindowSceneWithFocusFrom:(SBWindowScene *)arg2 to:(SBWindowScene *)arg3;

@end
