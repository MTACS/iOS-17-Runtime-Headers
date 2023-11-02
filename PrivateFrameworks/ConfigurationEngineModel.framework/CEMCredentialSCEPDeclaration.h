
@interface CEMCredentialSCEPDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol> {
    CEMAssetBaseDescriptor * _payloadDescriptor;
    CEMCredentialSCEPDeclaration_SCEP * _payloadSCEP;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CEMAssetBaseDescriptor *payloadDescriptor;
@property (nonatomic, copy) CEMCredentialSCEPDeclaration_SCEP *payloadSCEP;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withSCEP:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withSCEP:(id)arg3;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadDescriptor;
- (id)payloadSCEP;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDescriptor:(id)arg1;
- (void)setPayloadSCEP:(id)arg1;

@end
