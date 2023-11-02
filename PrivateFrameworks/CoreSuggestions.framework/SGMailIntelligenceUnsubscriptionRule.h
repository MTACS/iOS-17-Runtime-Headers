
@interface SGMailIntelligenceUnsubscriptionRule : NSObject <NSSecureCoding> {
    NSNumber * _mailCount;
    NSNumber * _score;
    long long  _unsubscriptionRuleField;
    NSString * _value;
}

@property (nonatomic, readonly) NSNumber *mailCount;
@property (nonatomic, readonly) NSNumber *score;
@property (nonatomic, readonly) long long unsubscriptionRuleField;
@property (nonatomic, readonly) NSString *value;

+ (id)prettyNameForUnsubscriptionRuleField:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnsubscriptionRuleField:(long long)arg1 tokenCounts:(id)arg2;
- (id)initWithUnsubscriptionRuleField:(long long)arg1 value:(id)arg2 mailCount:(id)arg3 score:(id)arg4;
- (id)mailCount;
- (id)score;
- (long long)unsubscriptionRuleField;
- (id)value;

@end
