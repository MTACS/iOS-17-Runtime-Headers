
@interface RMProtocolErrorResponse : RMModelPayloadBase {
    NSString * _responseCode;
    NSString * _responseDescription;
    RMModelAnyPayload * _responseDetails;
}

@property (nonatomic, copy) NSString *responseCode;
@property (nonatomic, copy) NSString *responseDescription;
@property (nonatomic, copy) RMModelAnyPayload *responseDetails;

+ (id)requestWithCode:(id)arg1 description:(id)arg2 details:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)responseCode;
- (id)responseDescription;
- (id)responseDetails;
- (id)serializeWithType:(short)arg1;
- (void)setResponseCode:(id)arg1;
- (void)setResponseDescription:(id)arg1;
- (void)setResponseDetails:(id)arg1;

@end
