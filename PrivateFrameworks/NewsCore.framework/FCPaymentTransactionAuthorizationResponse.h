
@interface FCPaymentTransactionAuthorizationResponse : NSObject {
    NSError * _accountSignupError;
    FCAuthKitAuthorizationCredential * _credential;
}

@property (nonatomic, readonly) NSError *accountSignupError;
@property (nonatomic, readonly) FCAuthKitAuthorizationCredential *credential;

- (void).cxx_destruct;
- (id)accountSignupError;
- (id)credential;
- (id)initWithCredential:(id)arg1 accountSignupError:(id)arg2;

@end
