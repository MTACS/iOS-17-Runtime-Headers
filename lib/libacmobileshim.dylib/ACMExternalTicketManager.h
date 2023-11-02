
@interface ACMExternalTicketManager : ACMTicketManager <ACMTicketManagerProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)clientID;
- (id)defaultPublicKeyVersionForRealm:(id)arg1;
- (id)deviceIdentifier;
- (id)identifier;
- (id)preferences;
- (void)tokenDidReceive2SVSecret:(id)arg1;
- (id)twoSVCreateDateForPrincipal:(id)arg1;
- (id)twoSVPersonIDForPrincipal:(id)arg1;
- (id)twoSVSecretForPrincipal:(id)arg1;

@end
