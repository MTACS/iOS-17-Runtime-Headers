
@protocol ASAuthorizationPublicKeyCredentialAssertionRequest <NSObject, NSSecureCoding, NSCopying>

@required

- (NSArray *)allowedCredentials;
- (NSData *)challenge;
- (NSString *)relyingPartyIdentifier;
- (void)setAllowedCredentials:(NSArray *)arg1;
- (void)setChallenge:(NSData *)arg1;
- (void)setRelyingPartyIdentifier:(NSString *)arg1;
- (void)setUserVerificationPreference:(NSString *)arg1;
- (NSString *)userVerificationPreference;

@end
