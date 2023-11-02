
@interface CEMNetworkVPNAppLayerDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadCellularSliceUUID;
    NSNumber * _payloadOnDemandMatchAppEnabled;
    NSString * _payloadProviderType;
    NSArray * _payloadSMBDomains;
    NSArray * _payloadSafariDomains;
    NSString * _payloadVPNUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadCellularSliceUUID;
@property (nonatomic, copy) NSNumber *payloadOnDemandMatchAppEnabled;
@property (nonatomic, copy) NSString *payloadProviderType;
@property (nonatomic, copy) NSArray *payloadSMBDomains;
@property (nonatomic, copy) NSArray *payloadSafariDomains;
@property (nonatomic, copy) NSString *payloadVPNUUID;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withVPNUUID:(id)arg2 withCellularSliceUUID:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withVPNUUID:(id)arg2 withCellularSliceUUID:(id)arg3 withSafariDomains:(id)arg4 withOnDemandMatchAppEnabled:(id)arg5 withSMBDomains:(id)arg6 withProviderType:(id)arg7;
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
- (id)payloadCellularSliceUUID;
- (id)payloadOnDemandMatchAppEnabled;
- (id)payloadProviderType;
- (id)payloadSMBDomains;
- (id)payloadSafariDomains;
- (id)payloadVPNUUID;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadCellularSliceUUID:(id)arg1;
- (void)setPayloadOnDemandMatchAppEnabled:(id)arg1;
- (void)setPayloadProviderType:(id)arg1;
- (void)setPayloadSMBDomains:(id)arg1;
- (void)setPayloadSafariDomains:(id)arg1;
- (void)setPayloadVPNUUID:(id)arg1;

@end
