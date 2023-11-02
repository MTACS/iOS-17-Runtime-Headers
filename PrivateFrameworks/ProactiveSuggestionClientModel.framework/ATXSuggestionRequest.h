
@interface ATXSuggestionRequest : NSObject <ATXProtoBufWrapper, NSSecureCoding> {
    unsigned char  _consumerSubType;
    NSString * _originatorId;
    NSUUID * _requestUUID;
    double  _timeout;
}

@property (nonatomic, readonly) unsigned char consumerSubType;
@property (nonatomic, readonly) NSString *originatorId;
@property (nonatomic, readonly) NSUUID *requestUUID;
@property (nonatomic, readonly) double timeout;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (unsigned char)consumerSubType;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithUUID:(id)arg1 originatorId:(id)arg2 consumerSubType:(unsigned char)arg3;
- (id)initWithUUID:(id)arg1 originatorId:(id)arg2 consumerSubType:(unsigned char)arg3 timeout:(double)arg4;
- (bool)isEqual:(id)arg1;
- (id)originatorId;
- (id)proto;
- (id)requestUUID;
- (double)timeout;

@end
