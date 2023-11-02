
@protocol NSURLAuthenticationChallengeSender <NSObject>

@required

- (void)cancelAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg1;
- (void)useCredential:(NSURLCredential *)arg1 forAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;

@optional

- (void)performDefaultHandlingForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(NSURLAuthenticationChallenge *)arg1;

@end
