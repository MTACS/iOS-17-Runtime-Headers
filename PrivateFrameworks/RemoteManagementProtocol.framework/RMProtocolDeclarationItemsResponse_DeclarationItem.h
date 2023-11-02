
@interface RMProtocolDeclarationItemsResponse_DeclarationItem : RMModelPayloadBase {
    NSString * _responseIdentifier;
    NSString * _responseServerToken;
}

@property (nonatomic, copy) NSString *responseIdentifier;
@property (nonatomic, copy) NSString *responseServerToken;

+ (id)allowedResponseKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 serverToken:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 serverToken:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)responseIdentifier;
- (id)responseServerToken;
- (id)serializeWithType:(short)arg1;
- (void)setResponseIdentifier:(id)arg1;
- (void)setResponseServerToken:(id)arg1;

@end
