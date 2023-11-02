
@protocol ASPublicKeyCredential <ASAuthorizationCredential>

@required

- (NSData *)credentialID;
- (NSData *)rawClientDataJSON;

@end
