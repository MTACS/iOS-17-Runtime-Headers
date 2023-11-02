
@interface HREActionVarianceCollection : NSObject {
    NSMutableDictionary * _rules;
}

@property (nonatomic, retain) NSMutableDictionary *rules;

+ (id)varianceRuleCollectionWithRules:(id)arg1;

- (void).cxx_destruct;
- (bool)anyRulePassesForAction:(id)arg1;
- (id)initWithRules:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)rules;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setRules:(id)arg1;

@end
