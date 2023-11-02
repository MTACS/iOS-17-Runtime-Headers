
@interface DMCEnrollmentAuthenticationController : NSObject

- (void)authenticateWithAuthenticationResults:(id)arg1 ephemeral:(bool)arg2 requireAppleMAID:(bool)arg3 presentingViewController:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)authenticateWithUsername:(id)arg1 password:(id)arg2 ephemeral:(bool)arg3 requireAppleMAID:(bool)arg4 presentingViewController:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)fetchAuthenticationModeForUsername:(id)arg1 requireAppleMAID:(bool)arg2 completionHandler:(id /* block */)arg3;

@end
