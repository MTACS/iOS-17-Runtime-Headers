
@interface RMProtocolDeclarationResponse : RMModelPayloadBase {
    NSString * _responseIdentifier;
    RMModelAnyPayload * _responsePayload;
    NSString * _responseServerToken;
    NSString * _responseType;
}

@property (nonatomic, copy) NSString *responseIdentifier;
@property (nonatomic, copy) RMModelAnyPayload *responsePayload;
@property (nonatomic, copy) NSString *responseServerToken;
@property (nonatomic, copy) NSString *responseType;

+ (id)requestWithType:(id)arg1 identifier:(id)arg2 serverToken:(id)arg3 payload:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)responseIdentifier;
- (id)responsePayload;
- (id)responseServerToken;
- (id)responseType;
- (id)serializeWithType:(short)arg1;
- (void)setResponseIdentifier:(id)arg1;
- (void)setResponsePayload:(id)arg1;
- (void)setResponseServerToken:(id)arg1;
- (void)setResponseType:(id)arg1;

@end
