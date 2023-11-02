
@interface scoredRule : NSObject {
    NSNumber * _recipientUniqueID;
    long long  _ruleLabel;
    float  _ruleScore;
}

@property (nonatomic, retain) NSNumber *recipientUniqueID;
@property (nonatomic) long long ruleLabel;
@property (nonatomic) float ruleScore;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithLabel:(long long)arg1 score:(float)arg2 recipientUniqueID:(id)arg3;
- (id)recipientUniqueID;
- (long long)ruleLabel;
- (float)ruleScore;
- (void)setRecipientUniqueID:(id)arg1;
- (void)setRuleLabel:(long long)arg1;
- (void)setRuleScore:(float)arg1;

@end
