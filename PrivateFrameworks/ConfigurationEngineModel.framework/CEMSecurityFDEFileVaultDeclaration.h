
@interface CEMSecurityFDEFileVaultDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadCertificateIdentifier;
    NSNumber * _payloadDefer;
    NSNumber * _payloadDeferDontAskAtUserLogout;
    NSNumber * _payloadDeferForceAtUserLoginMaxBypassAttempts;
    NSString * _payloadEnable;
    NSString * _payloadOutputPath;
    NSString * _payloadPassword;
    NSNumber * _payloadShowRecoveryKey;
    NSNumber * _payloadUseKeychain;
    NSNumber * _payloadUseRecoveryKey;
    NSNumber * _payloadUserEntersMissingInfo;
    NSString * _payloadUsername;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadCertificateIdentifier;
@property (nonatomic, copy) NSNumber *payloadDefer;
@property (nonatomic, copy) NSNumber *payloadDeferDontAskAtUserLogout;
@property (nonatomic, copy) NSNumber *payloadDeferForceAtUserLoginMaxBypassAttempts;
@property (nonatomic, copy) NSString *payloadEnable;
@property (nonatomic, copy) NSString *payloadOutputPath;
@property (nonatomic, copy) NSString *payloadPassword;
@property (nonatomic, copy) NSNumber *payloadShowRecoveryKey;
@property (nonatomic, copy) NSNumber *payloadUseKeychain;
@property (nonatomic, copy) NSNumber *payloadUseRecoveryKey;
@property (nonatomic, copy) NSNumber *payloadUserEntersMissingInfo;
@property (nonatomic, copy) NSString *payloadUsername;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEnable:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withEnable:(id)arg2 withDefer:(id)arg3 withUserEntersMissingInfo:(id)arg4 withUseRecoveryKey:(id)arg5 withShowRecoveryKey:(id)arg6 withOutputPath:(id)arg7 withUsername:(id)arg8 withPassword:(id)arg9 withUseKeychain:(id)arg10 withDeferForceAtUserLoginMaxBypassAttempts:(id)arg11 withDeferDontAskAtUserLogout:(id)arg12 withCertificateIdentifier:(id)arg13;
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
- (id)payloadCertificateIdentifier;
- (id)payloadDefer;
- (id)payloadDeferDontAskAtUserLogout;
- (id)payloadDeferForceAtUserLoginMaxBypassAttempts;
- (id)payloadEnable;
- (id)payloadOutputPath;
- (id)payloadPassword;
- (id)payloadShowRecoveryKey;
- (id)payloadUseKeychain;
- (id)payloadUseRecoveryKey;
- (id)payloadUserEntersMissingInfo;
- (id)payloadUsername;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadCertificateIdentifier:(id)arg1;
- (void)setPayloadDefer:(id)arg1;
- (void)setPayloadDeferDontAskAtUserLogout:(id)arg1;
- (void)setPayloadDeferForceAtUserLoginMaxBypassAttempts:(id)arg1;
- (void)setPayloadEnable:(id)arg1;
- (void)setPayloadOutputPath:(id)arg1;
- (void)setPayloadPassword:(id)arg1;
- (void)setPayloadShowRecoveryKey:(id)arg1;
- (void)setPayloadUseKeychain:(id)arg1;
- (void)setPayloadUseRecoveryKey:(id)arg1;
- (void)setPayloadUserEntersMissingInfo:(id)arg1;
- (void)setPayloadUsername:(id)arg1;

@end
