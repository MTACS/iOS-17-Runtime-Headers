
@interface CEMBookEnterpriseDeclaration : CEMAssetBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadAuthor;
    CEMAssetBaseDescriptor * _payloadDescriptor;
    NSString * _payloadKind;
    CEMAssetBaseReference * _payloadReference;
    NSString * _payloadTitle;
    NSString * _payloadVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadAuthor;
@property (nonatomic, copy) CEMAssetBaseDescriptor *payloadDescriptor;
@property (nonatomic, copy) NSString *payloadKind;
@property (nonatomic, copy) CEMAssetBaseReference *payloadReference;
@property (nonatomic, copy) NSString *payloadTitle;
@property (nonatomic, copy) NSString *payloadVersion;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3 withKind:(id)arg4 withVersion:(id)arg5 withAuthor:(id)arg6 withTitle:(id)arg7;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadAuthor;
- (id)payloadDescriptor;
- (id)payloadKind;
- (id)payloadReference;
- (id)payloadTitle;
- (id)payloadVersion;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAuthor:(id)arg1;
- (void)setPayloadDescriptor:(id)arg1;
- (void)setPayloadKind:(id)arg1;
- (void)setPayloadReference:(id)arg1;
- (void)setPayloadTitle:(id)arg1;
- (void)setPayloadVersion:(id)arg1;

@end
