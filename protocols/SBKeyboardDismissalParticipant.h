
@protocol SBKeyboardDismissalParticipant <NSObject>

@required

- (bool)keyboardDismissalManager:(SBKeyboardDismissalManager *)arg1 shouldPreventDismissalForTouch:(UITouch *)arg2 inWindow:(UIWindow *)arg3;

@end
