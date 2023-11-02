
@interface CEMNetworkCellularDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSArray * _payloadAPNs;
    CEMNetworkCellularDeclaration_AttachAPN * _payloadAttachAPN;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadAPNs;
@property (nonatomic, copy) CEMNetworkCellularDeclaration_AttachAPN *payloadAttachAPN;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withAttachAPN:(id)arg2 withAPNs:(id)arg3;
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
- (id)payloadAPNs;
- (id)payloadAttachAPN;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAPNs:(id)arg1;
- (void)setPayloadAttachAPN:(id)arg1;

@end
