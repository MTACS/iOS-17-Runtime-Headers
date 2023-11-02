
@interface CEMSecurityFirewallDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSArray * _payloadApplications;
    NSNumber * _payloadBlockAllIncoming;
    NSNumber * _payloadEnableFirewall;
    NSNumber * _payloadEnableStealthMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadApplications;
@property (nonatomic, copy) NSNumber *payloadBlockAllIncoming;
@property (nonatomic, copy) NSNumber *payloadEnableFirewall;
@property (nonatomic, copy) NSNumber *payloadEnableStealthMode;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEnableFirewall:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withEnableFirewall:(id)arg2 withBlockAllIncoming:(id)arg3 withEnableStealthMode:(id)arg4 withApplications:(id)arg5;
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
- (id)payloadApplications;
- (id)payloadBlockAllIncoming;
- (id)payloadEnableFirewall;
- (id)payloadEnableStealthMode;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadApplications:(id)arg1;
- (void)setPayloadBlockAllIncoming:(id)arg1;
- (void)setPayloadEnableFirewall:(id)arg1;
- (void)setPayloadEnableStealthMode:(id)arg1;

@end
