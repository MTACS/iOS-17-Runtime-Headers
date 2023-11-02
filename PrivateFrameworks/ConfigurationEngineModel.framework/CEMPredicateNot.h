
@interface CEMPredicateNot : CEMPredicateBase <CEMRegisteredTypeProtocol> {
    CEMPredicateBase * _payloadPredicate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CEMPredicateBase *payloadPredicate;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithPredicate:(id)arg1;
+ (id)buildWithPredicate:(id)arg1;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadPredicate;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadPredicate:(id)arg1;

@end
