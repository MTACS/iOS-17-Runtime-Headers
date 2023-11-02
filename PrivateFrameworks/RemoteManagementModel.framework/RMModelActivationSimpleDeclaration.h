
@interface RMModelActivationSimpleDeclaration : RMModelActivationBase <RMModelRegisteredTypeProtocol> {
    NSString * _payloadPredicate;
    NSArray * _payloadStandardConfigurations;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *payloadPredicate;
@property (nonatomic, copy) NSArray *payloadStandardConfigurations;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 standardConfigurations:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 standardConfigurations:(id)arg2 predicate:(id)arg3;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)payloadPredicate;
- (id)payloadStandardConfigurations;
- (id)serializePayloadWithType:(short)arg1;
- (void)setPayloadPredicate:(id)arg1;
- (void)setPayloadStandardConfigurations:(id)arg1;

@end
