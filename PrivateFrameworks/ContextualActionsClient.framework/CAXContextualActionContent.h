
@interface CAXContextualActionContent : NSObject <ATXProtoBufWrapper, NSSecureCoding> {
    NSDictionary * _contentMetadata;
    NSString * _contentType;
}

@property (nonatomic, readonly) NSDictionary *contentMetadata;
@property (nonatomic, readonly) NSString *contentType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)contentMetadata;
- (id)contentType;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentType:(id)arg1 contentMetadata:(id)arg2;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)json;
- (id)jsonRawData;
- (id)proto;

@end
