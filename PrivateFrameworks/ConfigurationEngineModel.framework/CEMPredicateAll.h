
@interface CEMPredicateAll : CEMPredicateBase <CEMRegisteredTypeProtocol> {
    NSArray * _payloadPredicates;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *payloadPredicates;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithPredicates:(id)arg1;
+ (id)buildWithPredicates:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadPredicates;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadPredicates:(id)arg1;

@end
