
@interface TTSRuleset : NSObject {
    TTSRegex * _activationRegex;
    NSString * _identifier;
    unsigned long long  _priority;
    NSMutableArray * _ruleReplacements;
}

@property (nonatomic, retain) TTSRegex *activationRegex;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, readonly) NSNumber *ruleCount;
@property (nonatomic, retain) NSMutableArray *ruleReplacements;

+ (id)processReplacementStringForSpecialCharacters:(id)arg1;
+ (id)rulesetWithData:(id)arg1 identifier:(id)arg2 priority:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)activationRegex;
- (void)addRuleReplacement:(id)arg1;
- (void)addRuleString:(id)arg1;
- (void)addRules:(id)arg1;
- (void)addRulesFromData:(id)arg1;
- (id)identifier;
- (id)init;
- (unsigned long long)priority;
- (id)ruleCount;
- (id)ruleReplacements;
- (void)setActivationRegex:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setRuleReplacements:(id)arg1;

@end
