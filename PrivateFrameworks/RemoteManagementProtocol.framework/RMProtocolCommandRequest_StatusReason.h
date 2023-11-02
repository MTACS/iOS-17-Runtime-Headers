
@interface RMProtocolCommandRequest_StatusReason : RMModelPayloadBase {
    NSString * _requestCode;
    NSString * _requestDescription;
    RMModelAnyPayload * _requestDetails;
}

@property (nonatomic, copy) NSString *requestCode;
@property (nonatomic, copy) NSString *requestDescription;
@property (nonatomic, copy) RMModelAnyPayload *requestDetails;

+ (id)allowedRequestKeys;
+ (id)buildRequiredOnlyWithCode:(id)arg1;
+ (id)buildWithCode:(id)arg1 description:(id)arg2 details:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)requestCode;
- (id)requestDescription;
- (id)requestDetails;
- (id)serializeWithType:(short)arg1;
- (void)setRequestCode:(id)arg1;
- (void)setRequestDescription:(id)arg1;
- (void)setRequestDetails:(id)arg1;

@end
