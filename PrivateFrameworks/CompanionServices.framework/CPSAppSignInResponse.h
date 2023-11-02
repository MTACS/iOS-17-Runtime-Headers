
@interface CPSAppSignInResponse : CPSAuthenticationResponse <NSSecureCoding> {
    AKAuthorization * _appleIDAuthorization;
    CASPasswordCredential * _passwordCredential;
    ASCPlatformPublicKeyCredentialAssertion * _platformKeyCredentialAssertion;
    ASCPlatformPublicKeyCredentialRegistration * _platformKeyCredentialRegistration;
    NSURL * _webCallbackURL;
}

@property (nonatomic, readonly) AKAuthorization *appleIDAuthorization;
@property (nonatomic, readonly) AKAuthorization *authorization;
@property (nonatomic, readonly) AKAuthorization *authorizaton;
@property (nonatomic, readonly) <ASAuthorizationCredential> *credential;
@property (nonatomic, readonly) CASPasswordCredential *passwordCredential;
@property (nonatomic, readonly) ASCPlatformPublicKeyCredentialAssertion *platformKeyCredentialAssertion;
@property (nonatomic, readonly) ASCPlatformPublicKeyCredentialRegistration *platformKeyCredentialRegistration;
@property (nonatomic, readonly) NSURL *webCallbackURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appleIDAuthorization;
- (id)authorization;
- (id)authorizaton;
- (id)credential;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAppleIDAuthorization:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPasswordCredential:(id)arg1;
- (id)initWithPlatformKeyCredentialAssertion:(id)arg1;
- (id)initWithPlatformKeyCredentialRegistration:(id)arg1;
- (id)initWithWebCallbackURL:(id)arg1;
- (id)passwordCredential;
- (id)platformKeyCredentialAssertion;
- (id)platformKeyCredentialRegistration;
- (id)webCallbackURL;

@end
