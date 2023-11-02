
@interface RMProtocolCommandResponse : RMModelPayloadBase {
    RMProtocolCommandResponse_Command * _responseCommand;
    NSString * _responseCommandToken;
}

@property (nonatomic, copy) RMProtocolCommandResponse_Command *responseCommand;
@property (nonatomic, copy) NSString *responseCommandToken;

+ (id)requestWithCommandToken:(id)arg1 command:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)responseCommand;
- (id)responseCommandToken;
- (id)serializeWithType:(short)arg1;
- (void)setResponseCommand:(id)arg1;
- (void)setResponseCommandToken:(id)arg1;

@end
