
@interface PLCompoundPropertyValidationRule : PLPropertyValidationRule {
    long long  _compoundType;
    NSArray * _rules;
}

@property (nonatomic) long long compoundType;
@property (nonatomic, retain) NSArray *rules;

+ (id)andCompoundPropertyValidationRuleWithRules:(id)arg1;
+ (id)orCompoundPropertyValidationRuleWithRules:(id)arg1;

- (void).cxx_destruct;
- (long long)compoundType;
- (id)currentValuesOfObject:(id)arg1;
- (id)initWithType:(long long)arg1 rules:(id)arg2;
- (id)keyPaths;
- (id)predicate;
- (id)rules;
- (void)setCompoundType:(long long)arg1;
- (void)setRules:(id)arg1;

@end
