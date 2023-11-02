
@interface TPSAnalyticsEventRuleMatched : TPSAnalyticsEvent {
    NSString * _correlationID;
    NSString * _ruleID;
    NSString * _tipID;
}

@property (nonatomic, readonly) NSString *correlationID;
@property (nonatomic, readonly) NSString *ruleID;
@property (nonatomic, readonly) NSString *tipID;

+ (id)eventWithTipID:(id)arg1 correlationID:(id)arg2 ruleID:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTipID:(id)arg1 correlationID:(id)arg2 ruleID:(id)arg3;
- (id)correlationID;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (id)ruleID;
- (id)tipID;

@end
