
@interface COMessagingRequest : COMeshRequest {
    NSData * _payload;
    NSString * _payloadType;
    unsigned int  _requestID;
    long long  _requestType;
    NSString * _topic;
}

@property (nonatomic, readonly, copy) NSData *payload;
@property (nonatomic, readonly, copy) NSString *payloadType;
@property (nonatomic, readonly) unsigned int requestID;
@property (nonatomic, readonly) long long requestType;
@property (nonatomic, readonly, copy) NSString *topic;

+ (id)acceptableResponses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestID:(unsigned int)arg1 requestType:(long long)arg2 payload:(id)arg3 payloadType:(id)arg4 topic:(id)arg5;
- (id)payload;
- (id)payloadType;
- (unsigned int)requestID;
- (long long)requestType;
- (id)topic;

@end
