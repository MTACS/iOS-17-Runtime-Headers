
@interface RMProtocolEnrollReferralResponse : RMModelPayloadBase {
    NSString * _responseReferralBaseURL;
}

@property (nonatomic, copy) NSString *responseReferralBaseURL;

+ (id)requestWithReferralBaseURL:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)responseReferralBaseURL;
- (id)serializeWithType:(short)arg1;
- (void)setResponseReferralBaseURL:(id)arg1;

@end
