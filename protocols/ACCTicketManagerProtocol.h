
@protocol ACCTicketManagerProtocol <NSObject>

@required

- (<ACCAuthContextProtocol> *)authContextWithRequest:(ACFMessage *)arg1;
- (<ACCAuthContextProtocol> *)authContextWithRequest:(ACFMessage *)arg1 keyCode:(NSString *)arg2 authenticationType:(NSNumber *)arg3;
- (<ACCAuthContextProtocol> *)authContextWithRequest:(ACFMessage *)arg1 sessionToken:(NSString *)arg2;
- (<ACCAuthContextProtocol> *)changePasswordContextWithRequest:(ACFMessage *)arg1 oldPassword:(NSString *)arg2 newPassword:(NSString *)arg3;
- (<ACCSSOTokenProtocol> *)createSSOTokenWithContent:(NSData *)arg1 context:(id <ACCAuthContextProtocol>)arg2;
- (NSData *)decryptEncryptedContent:(NSData *)arg1 withHmac:(NSString *)arg2 context:(id <ACCAuthContextProtocol>)arg3;
- (NSDictionary *)envelopeWithContext:(id <ACCAuthContextProtocol>)arg1;
- (<ACCSSOTokenProtocol> *)fetchSSOTokenForPrincipal:(ACFPrincipal *)arg1;
- (<ACCSSOTokenProtocol> *)fetchSSOTokenForPrincipal:(ACFPrincipal *)arg1 agedLessThan:(double)arg2;
- (bool)installCertificateWithString:(NSString *)arg1 version:(NSString *)arg2 forRealm:(NSString *)arg3;
- (NSString *)serviceTicketStringWithRequest:(ACFMessage *)arg1 ssoToken:(id <ACCSSOTokenProtocol>)arg2;
- (bool)storeSSOToken:(id <ACCSSOTokenProtocol>)arg1;
- (void)uninstallPublicKeyForRealm:(NSString *)arg1;
- (void)updateContextWithClientSecretIfAny:(id <ACCAuthContextProtocol>)arg1;

@end
