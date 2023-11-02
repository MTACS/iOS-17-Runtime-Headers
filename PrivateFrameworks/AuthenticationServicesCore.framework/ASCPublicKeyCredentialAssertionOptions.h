
@interface ASCPublicKeyCredentialAssertionOptions : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _allowedCredentials;
    NSData * _challenge;
    NSData * _clientDataHash;
    NSData * _clientDataJSON;
    unsigned long long  _credentialKind;
    NSString * _destinationSiteForCrossSiteAssertion;
    ASCWebAuthenticationExtensionsClientInputs * _extensions;
    NSData * _extensionsCBOR;
    NSString * _relyingPartyIdentifier;
    bool  _shouldHideHybrid;
    NSNumber * _timeout;
    NSString * _userVerificationPreference;
}

@property (nonatomic, readonly, copy) NSArray *allowedCredentials;
@property (nonatomic, readonly, copy) NSData *challenge;
@property (nonatomic, copy) NSData *clientDataHash;
@property (nonatomic, copy) NSData *clientDataJSON;
@property (nonatomic, readonly) unsigned long long credentialKind;
@property (nonatomic, copy) NSString *destinationSiteForCrossSiteAssertion;
@property (nonatomic, copy) ASCWebAuthenticationExtensionsClientInputs *extensions;
@property (nonatomic, copy) NSData *extensionsCBOR;
@property (nonatomic, readonly, copy) NSString *relyingPartyIdentifier;
@property (nonatomic) bool shouldHideHybrid;
@property (nonatomic, copy) NSNumber *timeout;
@property (nonatomic, readonly, copy) NSString *userVerificationPreference;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithKind:(unsigned long long)arg1 relyingPartyIdentifier:(id)arg2 challenge:(id)arg3 clientDataHash:(id)arg4 clientDataJSON:(id)arg5 userVerificationPreference:(id)arg6 allowedCredentials:(id)arg7 shouldHideHybrid:(bool)arg8;
- (id)allowedCredentials;
- (id)challenge;
- (id)clientDataHash;
- (id)clientDataJSON;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)credentialKind;
- (id)destinationSiteForCrossSiteAssertion;
- (void)encodeWithCoder:(id)arg1;
- (id)extensions;
- (id)extensionsCBOR;
- (id)initWithCoder:(id)arg1;
- (id)initWithKind:(unsigned long long)arg1 relyingPartyIdentifier:(id)arg2 challenge:(id)arg3 userVerificationPreference:(id)arg4 allowedCredentials:(id)arg5;
- (id)initWithKind:(unsigned long long)arg1 relyingPartyIdentifier:(id)arg2 clientDataHash:(id)arg3 userVerificationPreference:(id)arg4 allowedCredentials:(id)arg5;
- (id)initWithKind:(unsigned long long)arg1 relyingPartyIdentifier:(id)arg2 clientDataJSON:(id)arg3 userVerificationPreference:(id)arg4 allowedCredentials:(id)arg5;
- (void)logRequest;
- (id)relyingPartyIdentifier;
- (void)setClientDataHash:(id)arg1;
- (void)setClientDataJSON:(id)arg1;
- (void)setDestinationSiteForCrossSiteAssertion:(id)arg1;
- (void)setExtensions:(id)arg1;
- (void)setExtensionsCBOR:(id)arg1;
- (void)setShouldHideHybrid:(bool)arg1;
- (void)setTimeout:(id)arg1;
- (bool)shouldHideHybrid;
- (id)timeout;
- (id)userVerificationPreference;

@end
