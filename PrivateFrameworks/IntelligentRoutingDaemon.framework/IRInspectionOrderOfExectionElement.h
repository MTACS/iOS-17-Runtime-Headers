
@interface IRInspectionOrderOfExectionElement : NSObject {
    NSString * _ruleName;
    NSString * _ruleType;
}

@property (nonatomic, retain) NSString *ruleName;
@property (nonatomic, retain) NSString *ruleType;

- (void).cxx_destruct;
- (id)initWithRuleName:(id)arg1 andRuleType:(id)arg2;
- (id)ruleName;
- (id)ruleType;
- (void)setRuleName:(id)arg1;
- (void)setRuleType:(id)arg1;

@end
