
@interface CEMStringDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadData;
    CEMAssetBaseDescriptor * _payloadDescriptor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadData;
@property (nonatomic, copy) CEMAssetBaseDescriptor *payloadDescriptor;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withData:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withData:(id)arg3;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadData;
- (id)payloadDescriptor;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadData:(id)arg1;
- (void)setPayloadDescriptor:(id)arg1;

@end
