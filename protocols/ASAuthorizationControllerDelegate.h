
@protocol ASAuthorizationControllerDelegate <NSObject>

@optional

- (void)authorizationController:(ASAuthorizationController *)arg1 didCompleteWithAuthorization:(ASAuthorization *)arg2;
- (void)authorizationController:(ASAuthorizationController *)arg1 didCompleteWithCustomMethod:(NSString *)arg2;
- (void)authorizationController:(ASAuthorizationController *)arg1 didCompleteWithError:(NSError *)arg2;

@end
