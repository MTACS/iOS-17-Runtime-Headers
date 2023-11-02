
@protocol SFDialogControllerDelegate <NSObject>

@optional

- (void)dialogController:(SFDialogController *)arg1 didDismissDialog:(SFDialog *)arg2;
- (long long)dialogController:(SFDialogController *)arg1 presentationPolicyForDialog:(SFDialog *)arg2;
- (void)dialogController:(SFDialogController *)arg1 willPresentDialog:(SFDialog *)arg2;

@end
