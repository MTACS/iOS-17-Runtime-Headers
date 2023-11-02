
@interface CEMActivationSimpleDeclaration : CEMDeclarationBase <CEMRegisteredTypeProtocol> {
    CEMPredicateBase * _payloadPredicate;
    NSArray * _payloadStandardConfigurations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CEMPredicateBase *payloadPredicate;
@property (nonatomic, copy) NSArray *payloadStandardConfigurations;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withStandardConfigurations:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withStandardConfigurations:(id)arg2 withPredicate:(id)arg3;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadPredicate;
- (id)payloadStandardConfigurations;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadPredicate:(id)arg1;
- (void)setPayloadStandardConfigurations:(id)arg1;

@end
