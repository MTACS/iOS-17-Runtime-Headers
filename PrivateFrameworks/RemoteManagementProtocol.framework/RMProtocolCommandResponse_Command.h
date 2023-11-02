
@interface RMProtocolCommandResponse_Command : RMModelPayloadBase {
    NSString * _responseIdentifier;
    RMModelAnyPayload * _responsePayload;
    NSString * _responseType;
}

@property (nonatomic, copy) NSString *responseIdentifier;
@property (nonatomic, copy) RMModelAnyPayload *responsePayload;
@property (nonatomic, copy) NSString *responseType;

+ (id)allowedResponseKeys;
+ (id)buildRequiredOnlyWithType:(id)arg1 identifier:(id)arg2;
+ (id)buildWithType:(id)arg1 identifier:(id)arg2 payload:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)responseIdentifier;
- (id)responsePayload;
- (id)responseType;
- (id)serializeWithType:(short)arg1;
- (void)setResponseIdentifier:(id)arg1;
- (void)setResponsePayload:(id)arg1;
- (void)setResponseType:(id)arg1;

@end
