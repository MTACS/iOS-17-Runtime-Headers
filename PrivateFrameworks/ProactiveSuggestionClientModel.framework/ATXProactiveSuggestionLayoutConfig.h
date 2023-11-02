
@interface ATXProactiveSuggestionLayoutConfig : NSObject <ATXProtoBufWrapper, NSCopying, NSSecureCoding> {
    long long  _applicableLayoutType;
}

@property (nonatomic, readonly) long long applicableLayoutType;

+ (id)layoutConfigurationsForLayoutOptions:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (long long)applicableLayoutType;
- (bool)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithApplicableSuggestionLayout:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)proto;

@end
