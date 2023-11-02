
@interface ATXNotificationSmartPauseSuggestion : NSObject <ATXProtoBufWrapper, NSCopying, NSSecureCoding> {
    double  _suggestionDuration;
    NSDate * _suggestionExpiration;
}

@property (nonatomic) double suggestionDuration;
@property (nonatomic, readonly, copy) NSDate *suggestionExpiration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
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
- (id)initWithSuggestionExpiration:(id)arg1 pauseDuration:(double)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXNotificationSmartPauseSuggestion:(id)arg1;
- (id)proto;
- (void)setSuggestionDuration:(double)arg1;
- (double)suggestionDuration;
- (id)suggestionExpiration;

@end
