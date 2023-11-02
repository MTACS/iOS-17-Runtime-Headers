
@interface RMProtocolEnrollResponse : RMModelPayloadBase {
    NSString * _responsePushEnvironment;
    NSString * _responsePushTopic;
    NSArray * _responseStatusItems;
}

@property (nonatomic, copy) NSString *responsePushEnvironment;
@property (nonatomic, copy) NSString *responsePushTopic;
@property (nonatomic, copy) NSArray *responseStatusItems;

+ (id)requestWithPushTopic:(id)arg1 pushEnvironment:(id)arg2 statusItems:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)responsePushEnvironment;
- (id)responsePushTopic;
- (id)responseStatusItems;
- (id)serializeWithType:(short)arg1;
- (void)setResponsePushEnvironment:(id)arg1;
- (void)setResponsePushTopic:(id)arg1;
- (void)setResponseStatusItems:(id)arg1;

@end
