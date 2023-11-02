
@interface CEMCredentialCertificateIdentityDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol> {
    CEMAssetBaseDescriptor * _payloadDescriptor;
    CEMAssetBaseReference * _payloadReference;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CEMAssetBaseDescriptor *payloadDescriptor;
@property (nonatomic, copy) CEMAssetBaseReference *payloadReference;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadDescriptor;
- (id)payloadReference;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDescriptor:(id)arg1;
- (void)setPayloadReference:(id)arg1;

@end
