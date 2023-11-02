
@interface CEMPredicateiCloudAccount : CEMPredicateBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadDSID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadDSID;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithDSID:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadDSID;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDSID:(id)arg1;

@end
