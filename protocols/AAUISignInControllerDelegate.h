
@protocol AAUISignInControllerDelegate <UINavigationControllerDelegate>

@optional

- (AIDAServiceContext *)serviceContext;
- (void)signInController:(AAUISignInController *)arg1 didCompleteWithOperationsResults:(NSDictionary *)arg2;
- (void)signInController:(AAUISignInController *)arg1 didCompleteWithSuccess:(bool)arg2 error:(NSError *)arg3;
- (void)signInControllerDidCancel:(AAUISignInController *)arg1;
- (void)signInControllerDidSelectChildSignIn:(AAUISignInController *)arg1;
- (void)signInControllerDidSkip:(AAUISignInController *)arg1;

@end
