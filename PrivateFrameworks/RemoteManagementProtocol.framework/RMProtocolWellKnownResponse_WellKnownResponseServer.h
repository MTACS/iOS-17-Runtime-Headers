
@interface RMProtocolWellKnownResponse_WellKnownResponseServer : RMModelPayloadBase {
    NSString * _responseBaseURL;
    NSString * _responseVersion;
}

@property (nonatomic, copy) NSString *responseBaseURL;
@property (nonatomic, copy) NSString *responseVersion;

+ (id)allowedResponseKeys;
+ (id)buildRequiredOnlyWithVersion:(id)arg1 baseURL:(id)arg2;
+ (id)buildWithVersion:(id)arg1 baseURL:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)responseBaseURL;
- (id)responseVersion;
- (id)serializeWithType:(short)arg1;
- (void)setResponseBaseURL:(id)arg1;
- (void)setResponseVersion:(id)arg1;

@end
