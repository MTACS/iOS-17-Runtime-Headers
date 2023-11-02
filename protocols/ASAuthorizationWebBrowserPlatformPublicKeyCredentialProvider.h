
@protocol ASAuthorizationWebBrowserPlatformPublicKeyCredentialProvider

@required

- (ASAuthorizationPlatformPublicKeyCredentialAssertionRequest *)createCredentialAssertionRequestWithClientData:(ASPublicKeyCredentialClientData *)arg1;
- (ASAuthorizationPlatformPublicKeyCredentialRegistrationRequest *)createCredentialRegistrationRequestWithClientData:(ASPublicKeyCredentialClientData *)arg1 name:(NSString *)arg2 userID:(NSData *)arg3;

@end
