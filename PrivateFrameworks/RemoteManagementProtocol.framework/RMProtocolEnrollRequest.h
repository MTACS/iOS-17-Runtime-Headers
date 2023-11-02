
@interface RMProtocolEnrollRequest : RMModelPayloadBase {
    NSString * _requestEnrollmentToken;
    RMModelAnyPayload * _requestStatusItems;
}

@property (nonatomic, copy) NSString *requestEnrollmentToken;
@property (nonatomic, copy) RMModelAnyPayload *requestStatusItems;

+ (id)requestWithEnrollmentToken:(id)arg1 statusItems:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)requestEnrollmentToken;
- (id)requestStatusItems;
- (id)serializeWithType:(short)arg1;
- (void)setRequestEnrollmentToken:(id)arg1;
- (void)setRequestStatusItems:(id)arg1;

@end
