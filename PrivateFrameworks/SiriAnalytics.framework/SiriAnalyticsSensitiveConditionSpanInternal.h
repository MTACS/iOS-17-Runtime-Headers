
@interface SiriAnalyticsSensitiveConditionSpanInternal : NSObject <NSSecureCoding> {
    void conditionType;
    void timestampRange;
}

@property (nonatomic, readonly) int conditionType;
@property (nonatomic, readonly) unsigned long long endedAt;
@property (nonatomic, readonly) unsigned long long startedAt;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (int)conditionType;
- (bool)containsTimestamp:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)endedAt;
- (bool)hasEndedAt;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConditionType:(int)arg1 startedAt:(unsigned long long)arg2;
- (unsigned long long)startedAt;

@end
