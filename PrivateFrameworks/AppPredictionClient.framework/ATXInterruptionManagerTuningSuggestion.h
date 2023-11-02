
@interface ATXInterruptionManagerTuningSuggestion : NSObject <ATXProtoBufWrapper, NSCopying, NSSecureCoding> {
    int  _suggestionType;
    long long  _tuningSuggestionType;
}

@property (nonatomic, readonly) int suggestionType;
@property (nonatomic, readonly) long long tuningSuggestionType;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)feedbackKeyComponent;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithSuggestionType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXInterruptionManagerTuningSuggestion:(id)arg1;
- (id)jsonRawData;
- (id)proto;
- (int)suggestionType;
- (long long)tuningSuggestionType;

@end
