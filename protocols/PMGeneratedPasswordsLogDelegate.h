
@protocol PMGeneratedPasswordsLogDelegate

@required

- (void)passwordManagerLogViewControllerWantsToDismiss;
- (void)passwordManagerLogViewControllerWantsToSaveGeneratedPassword:(WBSGeneratedPassword *)arg1;

@end
