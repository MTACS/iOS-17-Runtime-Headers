
@protocol ASAuthorizationPublicKeyCredentialAssertion <ASPublicKeyCredential>

@required

- (NSData *)rawAuthenticatorData;
- (NSData *)signature;
- (NSData *)userID;

@end
