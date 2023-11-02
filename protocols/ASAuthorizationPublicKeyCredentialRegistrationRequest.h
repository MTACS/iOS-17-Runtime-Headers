
@protocol ASAuthorizationPublicKeyCredentialRegistrationRequest <NSObject, NSSecureCoding, NSCopying>

@required

- (NSString *)attestationPreference;
- (NSData *)challenge;
- (NSString *)displayName;
- (NSString *)name;
- (NSString *)relyingPartyIdentifier;
- (void)setAttestationPreference:(NSString *)arg1;
- (void)setChallenge:(NSData *)arg1;
- (void)setDisplayName:(NSString *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setUserID:(NSData *)arg1;
- (void)setUserVerificationPreference:(NSString *)arg1;
- (NSData *)userID;
- (NSString *)userVerificationPreference;

@end
