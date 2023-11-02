
@interface RMProtocolCommandRequest : RMModelPayloadBase {
    NSString * _requestIdentifier;
    NSArray * _requestReasons;
    RMModelAnyPayload * _requestResult;
    NSString * _requestStatus;
}

@property (nonatomic, copy) NSString *requestIdentifier;
@property (nonatomic, copy) NSArray *requestReasons;
@property (nonatomic, copy) RMModelAnyPayload *requestResult;
@property (nonatomic, copy) NSString *requestStatus;

+ (id)requestWithStatus:(id)arg1 identifier:(id)arg2 result:(id)arg3 reasons:(id)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)requestIdentifier;
- (id)requestReasons;
- (id)requestResult;
- (id)requestStatus;
- (id)serializeWithType:(short)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setRequestReasons:(id)arg1;
- (void)setRequestResult:(id)arg1;
- (void)setRequestStatus:(id)arg1;

@end
