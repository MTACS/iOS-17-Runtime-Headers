
@interface CEMPredicateOneTime : CEMPredicateBase <CEMRegisteredTypeProtocol> {
    NSString * _payloadDateTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadDateTime;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithDateTime:(id)arg1;
+ (id)buildWithDateTime:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadDateTime;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDateTime:(id)arg1;

@end
