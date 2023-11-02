
@interface CEMSecuritySettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowEnablingRestrictions;
    NSNumber * _payloadAllowEraseContentAndSettings;
    NSNumber * _payloadAllowOTAPKIUpdates;
    NSNumber * _payloadAllowUntrustedTLSPrompt;
    NSNumber * _payloadForceEncryptedBackup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowEnablingRestrictions;
@property (nonatomic, copy) NSNumber *payloadAllowEraseContentAndSettings;
@property (nonatomic, copy) NSNumber *payloadAllowOTAPKIUpdates;
@property (nonatomic, copy) NSNumber *payloadAllowUntrustedTLSPrompt;
@property (nonatomic, copy) NSNumber *payloadForceEncryptedBackup;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAllowUntrustedTLSPrompt:(id)arg2 withAllowOTAPKIUpdates:(id)arg3 withForceEncryptedBackup:(id)arg4 withAllowEraseContentAndSettings:(id)arg5 withAllowEnablingRestrictions:(id)arg6;
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
- (id)payloadAllowEnablingRestrictions;
- (id)payloadAllowEraseContentAndSettings;
- (id)payloadAllowOTAPKIUpdates;
- (id)payloadAllowUntrustedTLSPrompt;
- (id)payloadForceEncryptedBackup;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowEnablingRestrictions:(id)arg1;
- (void)setPayloadAllowEraseContentAndSettings:(id)arg1;
- (void)setPayloadAllowOTAPKIUpdates:(id)arg1;
- (void)setPayloadAllowUntrustedTLSPrompt:(id)arg1;
- (void)setPayloadForceEncryptedBackup:(id)arg1;

@end
