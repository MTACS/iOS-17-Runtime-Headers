
@interface CAXContextualActionParameter : NSObject <ATXProtoBufWrapper, NSSecureCoding> {
    NSDictionary * _parameterMetadata;
    NSString * _parameterType;
}

@property (nonatomic, readonly) NSDictionary *parameterMetadata;
@property (nonatomic, readonly) NSString *parameterType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameterType:(id)arg1 parameterMetadata:(id)arg2;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)json;
- (id)jsonRawData;
- (id)parameterMetadata;
- (id)parameterType;
- (id)proto;

@end
