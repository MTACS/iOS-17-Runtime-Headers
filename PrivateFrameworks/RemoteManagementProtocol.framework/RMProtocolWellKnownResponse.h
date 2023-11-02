
@interface RMProtocolWellKnownResponse : RMModelPayloadBase {
    NSArray * _responseServers;
}

@property (nonatomic, copy) NSArray *responseServers;

+ (id)requestWithServers:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)responseServers;
- (id)serializeWithType:(short)arg1;
- (void)setResponseServers:(id)arg1;

@end
