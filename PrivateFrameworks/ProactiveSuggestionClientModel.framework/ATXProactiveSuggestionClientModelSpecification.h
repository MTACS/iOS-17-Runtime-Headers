
@interface ATXProactiveSuggestionClientModelSpecification : NSObject <ATXProtoBufWrapper, NSCopying, NSSecureCoding> {
    NSString * _clientModelId;
    NSString * _clientModelVersion;
    unsigned long long  _engagementResetPolicy;
}

@property (nonatomic, readonly) NSString *clientModelId;
@property (nonatomic, readonly) NSString *clientModelVersion;
@property (nonatomic, readonly) unsigned long long engagementResetPolicy;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)clientModelId;
- (id)clientModelVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)engagementResetPolicy;
- (bool)fuzzyIsEqualToClientModelSpecification:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClientModelId:(id)arg1 clientModelVersion:(id)arg2;
- (id)initWithClientModelId:(id)arg1 clientModelVersion:(id)arg2 engagementResetPolicy:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRawData;
- (id)proto;

@end
