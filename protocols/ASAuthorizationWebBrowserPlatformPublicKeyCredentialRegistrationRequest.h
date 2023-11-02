
@protocol ASAuthorizationWebBrowserPlatformPublicKeyCredentialRegistrationRequest

@required

- (ASPublicKeyCredentialClientData *)clientData;
- (NSArray *)excludedCredentials;
- (void)setExcludedCredentials:(NSArray *)arg1;
- (void)setShouldShowHybridTransport:(bool)arg1;
- (bool)shouldShowHybridTransport;

@end
