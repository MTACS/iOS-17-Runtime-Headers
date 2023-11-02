
@interface CEMActivationAdvancedDeclaration : CEMDeclarationBase <CEMRegisteredTypeProtocol> {
    CEMAnyPayload * _payloadActivationPredicate;
    NSArray * _payloadRequiredConfigurations;
    NSArray * _payloadStandardConfigurations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CEMAnyPayload *payloadActivationPredicate;
@property (nonatomic, copy) NSArray *payloadRequiredConfigurations;
@property (nonatomic, copy) NSArray *payloadStandardConfigurations;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withRequiredConfigurations:(id)arg2 withStandardConfigurations:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withRequiredConfigurations:(id)arg2 withStandardConfigurations:(id)arg3 withActivationPredicate:(id)arg4;
+ (id)registeredClassName;
+ (id)registeredIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadActivationPredicate;
- (id)payloadRequiredConfigurations;
- (id)payloadStandardConfigurations;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadActivationPredicate:(id)arg1;
- (void)setPayloadRequiredConfigurations:(id)arg1;
- (void)setPayloadStandardConfigurations:(id)arg1;

@end
