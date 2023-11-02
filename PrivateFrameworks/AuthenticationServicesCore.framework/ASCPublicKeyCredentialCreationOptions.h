
@interface ASCPublicKeyCredentialCreationOptions : NSObject <NSCopying, NSSecureCoding> {
    NSString * _attestationPreference;
    NSData * _challenge;
    NSData * _clientDataHash;
    NSData * _clientDataJSON;
    NSArray * _excludedCredentials;
    ASCWebAuthenticationExtensionsClientInputs * _extensions;
    NSData * _extensionsCBOR;
    NSString * _relyingPartyIdentifier;
    long long  _residentKeyPreference;
    bool  _shouldHideHybrid;
    NSArray * _supportedAlgorithmIdentifiers;
    NSNumber * _timeout;
    NSString * _userDisplayName;
    NSData * _userIdentifier;
    NSString * _userName;
    NSString * _userVerificationPreference;
}

@property (nonatomic, copy) NSString *attestationPreference;
@property (nonatomic, copy) NSData *challenge;
@property (nonatomic, copy) NSData *clientDataHash;
@property (nonatomic, copy) NSData *clientDataJSON;
@property (nonatomic, copy) NSArray *excludedCredentials;
@property (nonatomic, copy) ASCWebAuthenticationExtensionsClientInputs *extensions;
@property (nonatomic, copy) NSData *extensionsCBOR;
@property (nonatomic, copy) NSString *relyingPartyIdentifier;
@property (nonatomic) long long residentKeyPreference;
@property (nonatomic) bool shouldHideHybrid;
@property (nonatomic) bool shouldRequireResidentKey;
@property (nonatomic, copy) NSArray *supportedAlgorithmIdentifiers;
@property (nonatomic, copy) NSNumber *timeout;
@property (nonatomic, copy) NSString *userDisplayName;
@property (nonatomic, copy) NSData *userIdentifier;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *userVerificationPreference;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attestationPreference;
- (id)challenge;
- (id)clientDataHash;
- (id)clientDataJSON;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedCredentials;
- (id)extensions;
- (id)extensionsCBOR;
- (id)initWithCoder:(id)arg1;
- (void)logRequest;
- (id)relyingPartyIdentifier;
- (long long)residentKeyPreference;
- (void)setAttestationPreference:(id)arg1;
- (void)setChallenge:(id)arg1;
- (void)setClientDataHash:(id)arg1;
- (void)setClientDataJSON:(id)arg1;
- (void)setExcludedCredentials:(id)arg1;
- (void)setExtensions:(id)arg1;
- (void)setExtensionsCBOR:(id)arg1;
- (void)setRelyingPartyIdentifier:(id)arg1;
- (void)setResidentKeyPreference:(long long)arg1;
- (void)setShouldHideHybrid:(bool)arg1;
- (void)setShouldRequireResidentKey:(bool)arg1;
- (void)setSupportedAlgorithmIdentifiers:(id)arg1;
- (void)setTimeout:(id)arg1;
- (void)setUserDisplayName:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setUserVerificationPreference:(id)arg1;
- (bool)shouldHideHybrid;
- (bool)shouldRequireResidentKey;
- (id)supportedAlgorithmIdentifiers;
- (id)timeout;
- (id)userDisplayName;
- (id)userIdentifier;
- (id)userName;
- (id)userVerificationPreference;

@end
