
@interface SCMLTextClassification : NSObject <NSCopying, NSSecureCoding> {
    NSString * _conversationIdentifier;
    NSDate * _endDate;
    long long  _result;
    NSDate * _startDate;
}

@property (nonatomic, copy) NSString *conversationIdentifier;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic) long long result;
@property (nonatomic, copy) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)conversationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 result:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (long long)result;
- (void)setConversationIdentifier:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setResult:(long long)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
