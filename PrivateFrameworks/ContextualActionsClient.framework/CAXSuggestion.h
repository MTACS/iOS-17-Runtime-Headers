
@interface CAXSuggestion : NSObject <ATXProtoBufWrapper, NSSecureCoding> {
    NSUUID * _blendingCacheUpdateUUID;
    NSString * _modelVersion;
    NSArray * _suggestedActions;
}

@property (nonatomic, retain) NSUUID *blendingCacheUpdateUUID;
@property (nonatomic, retain) NSString *modelVersion;
@property (nonatomic, readonly) NSArray *suggestedActions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blendingCacheUpdateUUID;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSuggestedActions:(id)arg1 modelVersion:(id)arg2;
- (id)json;
- (id)jsonRawData;
- (id)modelVersion;
- (id)proto;
- (void)setBlendingCacheUpdateUUID:(id)arg1;
- (void)setModelVersion:(id)arg1;
- (id)suggestedActions;

@end
