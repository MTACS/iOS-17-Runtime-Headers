
@interface ATXSendToDigestSuggestion : NSObject <ATXProtoBufWrapper, NSCopying, NSSecureCoding>

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)feedbackKeyComponent;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXSendToDigestSuggestion:(id)arg1;
- (id)jsonRawData;
- (id)proto;

@end
