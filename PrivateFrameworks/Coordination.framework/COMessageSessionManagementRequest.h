
@interface COMessageSessionManagementRequest : COMessageChannelRequest {
    long long  _commandType;
    NSData * _payload;
    NSString * _payloadType;
    NSError * _remoteError;
    NSString * _subTopic;
    NSString * _topic;
}

@property (nonatomic, readonly) long long commandType;
@property (nonatomic, readonly, copy) NSData *payload;
@property (nonatomic, readonly, copy) NSString *payloadType;
@property (nonatomic, readonly, copy) NSError *remoteError;
@property (nonatomic, readonly, copy) NSString *subTopic;
@property (nonatomic, readonly, copy) NSString *topic;

+ (id)acceptableResponses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)commandType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCommandType:(long long)arg1 error:(id)arg2 topic:(id)arg3 subTopic:(id)arg4;
- (id)initWithCommandType:(long long)arg1 payload:(id)arg2 payloadType:(id)arg3 topic:(id)arg4 subTopic:(id)arg5;
- (id)payload;
- (id)payloadType;
- (id)remoteError;
- (id)subTopic;
- (id)topic;

@end
