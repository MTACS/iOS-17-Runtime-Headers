
@interface CEMSecurityADCertificateDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowAllAppsAccess;
    NSString * _payloadCertServer;
    NSString * _payloadCertTemplate;
    NSString * _payloadCertificateAcquisitionMechanism;
    NSString * _payloadCertificateAuthority;
    NSNumber * _payloadCertificateRenewalTimeInterval;
    NSString * _payloadDescription;
    NSNumber * _payloadEnableAutoRenewal;
    NSNumber * _payloadKeyIsExtractable;
    NSNumber * _payloadKeysize;
    NSNumber * _payloadPromptForCredentials;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowAllAppsAccess;
@property (nonatomic, copy) NSString *payloadCertServer;
@property (nonatomic, copy) NSString *payloadCertTemplate;
@property (nonatomic, copy) NSString *payloadCertificateAcquisitionMechanism;
@property (nonatomic, copy) NSString *payloadCertificateAuthority;
@property (nonatomic, copy) NSNumber *payloadCertificateRenewalTimeInterval;
@property (nonatomic, copy) NSString *payloadDescription;
@property (nonatomic, copy) NSNumber *payloadEnableAutoRenewal;
@property (nonatomic, copy) NSNumber *payloadKeyIsExtractable;
@property (nonatomic, copy) NSNumber *payloadKeysize;
@property (nonatomic, copy) NSNumber *payloadPromptForCredentials;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withCertServer:(id)arg2 withCertTemplate:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withCertServer:(id)arg2 withCertTemplate:(id)arg3 withDescription:(id)arg4 withCertificateRenewalTimeInterval:(id)arg5 withCertificateAuthority:(id)arg6 withCertificateAcquisitionMechanism:(id)arg7 withAllowAllAppsAccess:(id)arg8 withPromptForCredentials:(id)arg9 withKeyIsExtractable:(id)arg10 withKeysize:(id)arg11 withEnableAutoRenewal:(id)arg12;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadAllowAllAppsAccess;
- (id)payloadCertServer;
- (id)payloadCertTemplate;
- (id)payloadCertificateAcquisitionMechanism;
- (id)payloadCertificateAuthority;
- (id)payloadCertificateRenewalTimeInterval;
- (id)payloadDescription;
- (id)payloadEnableAutoRenewal;
- (id)payloadKeyIsExtractable;
- (id)payloadKeysize;
- (id)payloadPromptForCredentials;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowAllAppsAccess:(id)arg1;
- (void)setPayloadCertServer:(id)arg1;
- (void)setPayloadCertTemplate:(id)arg1;
- (void)setPayloadCertificateAcquisitionMechanism:(id)arg1;
- (void)setPayloadCertificateAuthority:(id)arg1;
- (void)setPayloadCertificateRenewalTimeInterval:(id)arg1;
- (void)setPayloadDescription:(id)arg1;
- (void)setPayloadEnableAutoRenewal:(id)arg1;
- (void)setPayloadKeyIsExtractable:(id)arg1;
- (void)setPayloadKeysize:(id)arg1;
- (void)setPayloadPromptForCredentials:(id)arg1;

@end
