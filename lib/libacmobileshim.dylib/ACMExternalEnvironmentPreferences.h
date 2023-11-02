
@interface ACMExternalEnvironmentPreferences : ACMEnvironmentPreferences

+ (id)externalEnvironmentSpecifications;

- (id)authenticateURLString;
- (id)defaultPublicKeyString;
- (id)environmentSpecificationForRealm:(id)arg1;
- (id)generateAndSendSecCodeURLString;
- (id)getTrustedDevicesURLString;
- (id)myAppleIDURL;
- (id)serverAttemptsDelays;
- (id)serverHosts;
- (id)verifySecurityCodeURLString;
- (id)verifyTicketURLString;

@end
