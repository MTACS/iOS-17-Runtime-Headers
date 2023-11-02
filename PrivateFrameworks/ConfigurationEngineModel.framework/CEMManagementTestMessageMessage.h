
@interface CEMManagementTestMessageMessage : CEMMessageBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadEcho;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadEcho;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithEcho:(id)arg1;
+ (id)buildWithEcho:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadEcho;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadEcho:(id)arg1;

@end
