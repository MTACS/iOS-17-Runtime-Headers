
@protocol AISAppleIDSignInControllerDelegate <NSObject>

@required

- (void)signInController:(AISAppleIDSignInController *)arg1 didCompleteWithResult:(AISAppleIDSignInResult *)arg2;
- (void)signInController:(AISAppleIDSignInController *)arg1 didFinishWithError:(NSError *)arg2;

@optional

- (void)signInControllerDidSkip:(AISAppleIDSignInController *)arg1;

@end
