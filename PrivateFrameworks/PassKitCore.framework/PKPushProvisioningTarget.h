
@interface PKPushProvisioningTarget : NSObject <NSCopying, NSSecureCoding> {
    NSString * _accountHash;
    NSDictionary * _additionalProvisioningDictionary;
    NSString * _appleIdentifier;
    long long  _appleIdentifierType;
    NSString * _cardConfigurationIdentifier;
    NSDate * _creationDate;
    NSString * _environmentIdentifier;
    NSString * _nonce;
    NSString * _provisioningCredentialIdentifier;
    NSString * _relyingPartyIdentifier;
    bool  _requiresSimultaneousRequestRouting;
    NSString * _secondarySource;
    NSString * _sharingInstanceIdentifier;
    unsigned long long  _targetDevice;
    NSString * _templateIdentifier;
    NSString * _verificationCode;
}

@property (nonatomic, retain) NSString *accountHash;
@property (nonatomic, copy) NSString *appleIdentifier;
@property (nonatomic) long long appleIdentifierType;
@property (nonatomic, readonly, copy) NSString *cardConfigurationIdentifier;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, retain) NSString *environmentIdentifier;
@property (nonatomic, copy) NSString *nonce;
@property (nonatomic, readonly, copy) NSString *provisioningCredentialIdentifier;
@property (nonatomic, retain) NSString *relyingPartyIdentifier;
@property (nonatomic) bool requiresSimultaneousRequestRouting;
@property (nonatomic, retain) NSString *secondarySource;
@property (nonatomic, copy) NSString *sharingInstanceIdentifier;
@property (nonatomic) unsigned long long targetDevice;
@property (nonatomic, readonly) NSString *templateIdentifier;
@property (nonatomic, retain) NSString *verificationCode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountHash;
- (id)appleIdentifier;
- (long long)appleIdentifierType;
- (id)cardConfigurationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (id)environmentIdentifier;
- (unsigned long long)hash;
- (id)initWithAppleIdentifier:(id)arg1 appleIdentifierType:(long long)arg2 provisioningCredentialIdentifier:(id)arg3 cardConfigurationIdentifier:(id)arg4 sharingInstanceIdentifier:(id)arg5 nonce:(id)arg6;
- (id)initWithAppleIdentifier:(id)arg1 appleIdentifierType:(long long)arg2 provisioningCredentialIdentifier:(id)arg3 cardConfigurationIdentifier:(id)arg4 sharingInstanceIdentifier:(id)arg5 nonce:(id)arg6 accountHash:(id)arg7 templateIdentifier:(id)arg8 relyingPartyIdentifier:(id)arg9 requiresSimultaneousRequestRouting:(bool)arg10 targetDevice:(unsigned long long)arg11 environmentIdentifier:(id)arg12;
- (id)initWithCoder:(id)arg1;
- (id)initWithProvisioningDict:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToProvisioningTarget:(id)arg1;
- (id)jsonRepresentation;
- (id)nonce;
- (id)provisioningCredentialIdentifier;
- (id)relyingPartyIdentifier;
- (bool)requiresSimultaneousRequestRouting;
- (id)secondarySource;
- (void)setAccountHash:(id)arg1;
- (void)setAppleIdentifier:(id)arg1;
- (void)setAppleIdentifierType:(long long)arg1;
- (void)setEnvironmentIdentifier:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setRelyingPartyIdentifier:(id)arg1;
- (void)setRequiresSimultaneousRequestRouting:(bool)arg1;
- (void)setSecondarySource:(id)arg1;
- (void)setSharingInstanceIdentifier:(id)arg1;
- (void)setTargetDevice:(unsigned long long)arg1;
- (void)setVerificationCode:(id)arg1;
- (id)sharingInstanceIdentifier;
- (unsigned long long)targetDevice;
- (id)templateIdentifier;
- (id)verificationCode;

@end
