
@interface SKPaymentTransactionAuthorizationResponse : NSObject {
    NSError * _accountSignupError;
    AKAuthorizationCredential * _authorizationAppleIDCredential;
}

@property (nonatomic, readonly) NSError *accountSignupError;
@property (nonatomic, readonly) AKAuthorizationCredential *authorizationAppleIDCredential;

- (void).cxx_destruct;
- (id)accountSignupError;
- (id)authorizationAppleIDCredential;
- (id)initWithAuthorizationCredential:(id)arg1 error:(id)arg2;

@end
