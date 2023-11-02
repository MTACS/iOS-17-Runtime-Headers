
@interface WBSPasswordRuleSet : NSObject {
    WBSAllowedPasswordRule * _allowedRule;
    WBSMaxConsecutivePasswordRule * _maxConsecutiveRule;
    WBSMaxLengthPasswordRule * _maxLengthRule;
    WBSMinLengthPasswordRule * _minLengthRule;
    NSArray * _requiredRules;
}

@property (nonatomic, readonly) WBSAllowedPasswordRule *allowedRule;
@property (nonatomic, readonly) WBSMaxConsecutivePasswordRule *maxConsecutiveRule;
@property (nonatomic, readonly) WBSMaxLengthPasswordRule *maxLengthRule;
@property (nonatomic, readonly) WBSMinLengthPasswordRule *minLengthRule;
@property (nonatomic, readonly, copy) NSArray *requiredRules;

+ (id)ruleSetWithAllowedRule:(id)arg1 requiredRules:(id)arg2 maxConsecutiveRule:(id)arg3;
+ (id)ruleSetWithAllowedRule:(id)arg1 requiredRules:(id)arg2 maxConsecutiveRule:(id)arg3 minLengthRule:(id)arg4 maxLengthRule:(id)arg5;

- (void).cxx_destruct;
- (id)allowedRule;
- (id)initWithAllowedRule:(id)arg1 requiredRules:(id)arg2 maxConsecutiveRule:(id)arg3 minLengthRule:(id)arg4 maxLengthRule:(id)arg5;
- (id)maxConsecutiveRule;
- (id)maxLengthRule;
- (id)minLengthRule;
- (id)requiredRules;

@end
