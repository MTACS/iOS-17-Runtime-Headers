
@interface CEMAccountGoogleDeclaration_CommunicationServiceRules : CEMPayloadBase {
    CEMAccountGoogleDeclaration_CommunicationServiceRulesDefaultServiceHandlers * _payloadDefaultServiceHandlers;
}

@property (nonatomic, copy) CEMAccountGoogleDeclaration_CommunicationServiceRulesDefaultServiceHandlers *payloadDefaultServiceHandlers;

+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithDefaultServiceHandlers:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)payloadDefaultServiceHandlers;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadDefaultServiceHandlers:(id)arg1;

@end
